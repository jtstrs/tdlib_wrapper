set(src td_lib_wrapper.c)
set(test_src main.c)

set(DEPS_DIR ../deps)

include_directories(${DEPS_DIR}/td/td)
link_directories(${DEPS_DIR}/td/td_build/)

add_library(${PROJECT_NAME} SHARED ${src})
target_link_libraries(${PROJECT_NAME} tdjson)

if(BUILD_EXAMPLE)
    add_executable(${PROJECT_NAME}_test ${test_src})
    target_link_libraries(${PROJECT_NAME}_test tdjson)
endif()
