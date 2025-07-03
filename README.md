# MSYS2 GTK Experiment

This project is for me to learn how to create desktop applications using GTK in an MSYS2 environment. I also want to figure out how to export it as an executable file that I can have as a standalone application.

### Compiling the application

`gcc \`pkg-config --cflags gtk4\` -o <OUTPUT NAME>.exe <PROGRAM NAME>.c \`pkg-config --libs gtk\``

Then use `./hello.exe` to run the program

### Standalone application
```
mkdir hello_app
cp hello.exe hello_app/
gdk-pixbuf-query-loaders > loaders.cache
gtk4-update-icon-cache /mingw64/share/icons/hicolor
```
