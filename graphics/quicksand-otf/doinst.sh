
## Update X font indexes and the font cache:
if [ -x ./usr/bin/mkfontdir ]; then
  chroot . /usr/bin/mkfontscale /usr/share/fonts/OTF
  chroot . /usr/bin/mkfontdir /usr/share/fonts/OTF
fi
if [ -x ./usr/bin/fc-cache ]; then
  chroot . /usr/bin/fc-cache -f /usr/share/fonts/OTF
fi
