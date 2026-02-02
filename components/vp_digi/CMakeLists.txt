file(
    GLOB_RECURSE
        SOURCES
            source/*.c
            lwfec/*.c
)

idf_component_register(
    SRCS ${SOURCES}
    INCLUDE_DIRS
        .
        ./include
        ./lwfec
    REQUIRES
        port
)