include_directories(${FCITX4_FCITX_INCLUDE_DIRS})
include_directories(${FCITX4_FCITX_CONFIG_INCLUDE_DIRS})
include_directories(${FCITX4_FCITX_UTILS_INCLUDE_DIRS})
include_directories(${PROJECT_BINARY_DIR})
include_directories(${LIBICONV_INCLUDE_DIR})

set(fcitx_sayura_sources
  eim.c
  )
fcitx_add_addon_full(sayura
  SOURCES ${fcitx_sayura_sources}
  CONF_SRC ../data/fcitx-sayura.conf
  IM_CONFIG ../data/sayura.conf
  LINK_LIBS ${LIBICONV_LIBRARIES}
  EXTRA_PO eim.h)
