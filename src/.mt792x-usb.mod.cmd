savedcmd_/home/pi/mt7921e-rpi-6.12.109/mt792x-usb.mod := printf '%s\n'   mt792x_usb.o | awk '!x[$$0]++ { print("/home/pi/mt7921e-rpi-6.12.109/"$$0) }' > /home/pi/mt7921e-rpi-6.12.109/mt792x-usb.mod
