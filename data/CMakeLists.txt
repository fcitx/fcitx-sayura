install(FILES sayura.svg DESTINATION share/icons/hicolor/scalable/apps/)
set(sizes 16 24 32 48 64 128 192)
foreach(size ${sizes})
  install(FILES "sayura${size}.png"
    DESTINATION "share/icons/hicolor/${size}x${size}/apps/"
    RENAME fcitx-sayura.png)
endforeach()

install(FILES sayura32.png DESTINATION share/fcitx/skin/default/
  RENAME sayura.png)
install(FILES sayura32.png DESTINATION share/fcitx/imicon/
  RENAME sayura.png)
