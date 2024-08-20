#!/bin/bash

echo "[Multi Platform Ui App] An app with a user interface, that is created for multiple platforms."
echo "[Multi Platform Ui App] Version 0.0.1"
(
    gcc -Wno-deprecated -Wno-deprecated-declarations \
        `pkg-config --cflags gtk+-3.0` \
        -o multi-platform-ui-app \
        main.c \
        `pkg-config --libs gtk+-3.0` && \
    echo "[Multi Platform Ui App] Compilation successful."
) || echo "[Multi Platform Ui App] Compilation FAILED!"