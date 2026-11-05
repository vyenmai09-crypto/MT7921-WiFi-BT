savedcmd_/home/pi/mt7921e-rpi-6.12.109/mt76-usb.mod := printf '%s\n'   usb.o usb_trace.o | awk '!x[$$0]++ { print("/home/pi/mt7921e-rpi-6.12.109/"$$0) }' > /home/pi/mt7921e-rpi-6.12.109/mt76-usb.mod
