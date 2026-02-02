file(
    GLOB_RECURSE
        SOURCES
            esp32/source/*.c
)

idf_component_register(
    SRCS ${SOURCES}
    INCLUDE_DIRS
        esp32/include/.
    REQUIRES
)