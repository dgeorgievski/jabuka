cmake_minimum_required(VERSION 3.16)

project(jabuka VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Hint common Homebrew Qt install locations when QT_PREFIX_PATH is not set
if(APPLE AND NOT DEFINED ENV{QT_PREFIX_PATH})
    set(_qt_already_set FALSE)
    foreach(_qt_path IN LISTS CMAKE_PREFIX_PATH)
        set(_qt_already_set TRUE)
    endforeach()
    if(NOT _qt_already_set)
        set(_qt_homebrew_candidates "/opt/homebrew/opt/qt" "/usr/local/opt/qt")
        foreach(_qt_candidate IN LISTS _qt_homebrew_candidates)
            if(EXISTS "${_qt_candidate}")
                list(APPEND CMAKE_PREFIX_PATH "${_qt_candidate}")
            endif()
        endforeach()
    endif()
endif()

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

set(PROJECT_SOURCES
        main.cpp
        applewindow.cpp
        applewindow.h
        applewindow.ui
        searchdialog.h
        searchdialog.cpp
        searchdialog.ui
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(jabuka
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )
else()
    add_executable(jabuka
        ${PROJECT_SOURCES}
    )
endif()

target_link_libraries(jabuka PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.jabuka)
endif()
set_target_properties(jabuka PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS jabuka
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(jabuka)
endif()
