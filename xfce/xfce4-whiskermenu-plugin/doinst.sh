
if [ -x /usr/bin/gtk-update-icon-cache ]; then
  if [ -e usr/share/icons/hicolor/icon-theme.cache ]; then
    /usr/bin/gtk-update-icon-cache -f -q usr/share/icons/hicolor > /dev/null 2>&1
  fi
fi
