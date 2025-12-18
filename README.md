# Jabuka

Builds with CMake and Qt (5 or 6). You can build from the terminal or use Visual Studio Code with the CMake Tools and C/C++ extensions.

## Prerequisites
- Qt 5 or Qt 6 installed and discoverable by CMake.
- macOS: `brew install qt` then (if needed) `export QT_PREFIX_PATH=$(brew --prefix qt)`; CMake also auto-hints common Homebrew paths.
- Windows: set `QT_PREFIX_PATH` (e.g. `C:\Qt\6.7.0\msvc2019_64`) if Qt isn't found automatically.

## Build and run from the terminal
```bash
cmake --preset debug          # configure into build/debug
cmake --build --preset debug  # build
./build/debug/jabuka.app/Contents/MacOS/jabuka  # macOS bundle
# On Linux/Windows use: ./build/debug/jabuka or build\\debug\\jabuka.exe
```

Replace `debug` with `release` for an optimized build.

## Build and run from VS Code
1. Open the folder in VS Code with the CMake Tools extension installed.
2. CMake Tools will pick up `CMakePresets.json`; choose the `debug` preset if prompted.
3. Use the **CMake: Build** command (or the status bar Build button).
4. Run/debug with the **Launch jabuka** configuration in `Run and Debug`; it uses the active CMake target path.

The `.vscode/settings.json` file tells CMake Tools to always use the presets, so the build directories match the terminal workflow.
