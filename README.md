# NeuroChat - AI Chat Interface with Animated RGB Title

A beautiful C++ GUI application built with Qt Framework that displays an animated "NeuroChat" title with smooth RGB color transitions.

## Features

✨ **Animated RGB Color Display** - The "NeuroChat" title smoothly cycles through rainbow colors
🎨 **Beautiful Font Rendering** - Large, bold, anti-aliased text for a professional look
🖥️ **Dark Theme Interface** - Modern dark background with contrasting colors
💻 **Console Output** - Displays status information when the application starts
⚡ **Smooth Performance** - 50ms animation refresh rate for smooth color transitions

## Requirements

- **Visual Studio 2022** (v143 toolset)
- **Qt 6.9.0** (MSVC 2022 64-bit) or compatible version
- **Windows 10 or later** (x64 platform)

## Installation & Setup

### Step 1: Install Qt
1. Download Qt from [qt.io](https://www.qt.io/download)
2. Install Qt 6.9.0 with MSVC 2022 64-bit components
3. Note the installation path (e.g., `C:\Qt\6.9.0\msvc2022_64`)

### Step 2: Install Visual Studio
1. Install Visual Studio 2022 with C++ development tools
2. Ensure the v143 toolset is installed

### Step 3: Configure Qt in Visual Studio
1. Open Visual Studio
2. Go to **Extensions > Qt VS Tools > Qt Versions**
3. Click **Add** and specify the Qt installation path
4. Ensure it matches the version in `.vcxproj` (`6.9.0_msvc2022_64`)

## Building the Project

### Method 1: Using Visual Studio IDE
1. Open `NeuroChat.sln` in Visual Studio 2022
2. Select **Build Configuration**: Debug or Release
3. Select **Platform**: x64
4. Go to **Build > Build Solution** (or press Ctrl+Shift+B)
5. Wait for compilation to complete

### Method 2: Using Command Line
```bash
cd path\to\NeuroChat
"C:\Program Files\Microsoft Visual Studio\2022\Community\MSBuild\Current\Bin\MSBuild.exe" NeuroChat.sln /p:Configuration=Release /p:Platform=x64
```

## Running the Application

After successful build:

### Method 1: From Visual Studio
- Press **F5** (Debug with console) or **Ctrl+F5** (Release)
- The NeuroChat window will launch with animated RGB colors
- Console window will show initialization messages

### Method 2: From File Explorer
1. Navigate to: `NeuroChat\x64\Release\` (or `NeuroChat\x64\Debug\`)
2. Double-click `NeuroChat.exe`
3. The application window opens with the animated title

### Method 3: From Command Line
```bash
cd NeuroChat\x64\Release
NeuroChat.exe
```

## Application Features

### Main Window
- **Title**: Large "NeuroChat" text (120pt Arial Bold)
- **Colors**: Smoothly transitions through all RGB colors using HSV color space
- **Subtitle**: "AI-Powered Chat Interface" below the main title
- **Background**: Dark theme (#0a0e27) for reduced eye strain
- **Animation**: Continuous smooth color cycling

### Console Output
When launched, the application displays:
```
╔════════════════════════════════════════╗
║     Welcome to NeuroChat v1.0         ║
║   AI-Powered Chat Interface           ║
╚════════════════════════════════════════╝

✓ Application initialized
✓ Enjoy the colorful animation!
```

## Project Structure

```
NeuroChat/
├── NeuroChat.sln                  # Solution file
├── README.md                      # This file
└── NeuroChat/
    ├── main.cpp                   # Application entry point (fixed)
    ├── NeuroChat.h                # Header file with animation logic (fixed)
    ├── NeuroChat.cpp              # Implementation with RGB animation (fixed)
    ├── NeuroChat.qrc              # Resource file
    ├── NeuroChat.vcxproj          # Project file (updated)
    └── NeuroChat.ui               # Removed (no longer used)
```

## Color Animation Details

The application uses **HSV color space** for smooth, continuous color transitions:
- **Hue**: Continuously rotates from 0° to 360°
- **Saturation**: 255 (full saturation for vibrant colors)
- **Value**: 255 (full brightness)

The animation updates every **50 milliseconds** with a hue increment of **1.5°**, creating a smooth rainbow effect.

## Troubleshooting

### Qt Module Not Found
- Verify Qt installation path in Qt VS Tools settings
- Check that QtMsBuild plugin is installed
- Ensure Qt VS Tools extension is enabled in Visual Studio

### Build Errors
- Clean solution: **Build > Clean Solution**
- Rebuild: **Build > Rebuild Solution**
- Ensure Visual Studio has internet connection

### Application Won't Display Properly
- Update graphics drivers
- Ensure Qt binaries are accessible
- Try running the Debug version first to check for errors

### Colors Not Animating
- Close the application and rebuild
- Ensure QTimer is properly connected
- Check that paintEvent is being called (check console output)

## Files Modified

✅ **NeuroChat.h** - Added animation logic with QTimer and color calculations
✅ **NeuroChat.cpp** - Implemented RGB color-changing animation using HSV color space
✅ **main.cpp** - Added console output and improved initialization
✅ **NeuroChat.vcxproj** - Removed UI compilation, configured for console output
✅ **README.md** - Complete setup and usage instructions
❌ **NeuroChat.ui** - Removed (using custom painting instead)

## Performance

- **Window Size**: 1000x600 pixels
- **Refresh Rate**: 50ms (20 FPS)
- **CPU Usage**: Minimal (animation timer based)
- **Memory**: < 50MB

## Future Enhancements

Possible additions:
- Chat input interface
- Message display area
- AI backend integration
- Customizable animation speed
- User-configurable color schemes
- Dark/Light theme toggle

## License

This project is part of the NeuroChat initiative.

---

**Enjoy the beautiful RGB animation! 🌈**
