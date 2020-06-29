# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "service_example: 0 messages, 1 services")

set(MSG_I_FLAGS "-Istd_msgs:/opt/ros/kinetic/share/std_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(geneus REQUIRED)
find_package(genlisp REQUIRED)
find_package(gennodejs REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(service_example_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/home/xu/dogkin_ws/src/service_example/srv/AddTwoInts.srv" NAME_WE)
add_custom_target(_service_example_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "service_example" "/home/xu/dogkin_ws/src/service_example/srv/AddTwoInts.srv" ""
)

#
#  langs = gencpp;geneus;genlisp;gennodejs;genpy
#

### Section generating for lang: gencpp
### Generating Messages

### Generating Services
_generate_srv_cpp(service_example
  "/home/xu/dogkin_ws/src/service_example/srv/AddTwoInts.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/service_example
)

### Generating Module File
_generate_module_cpp(service_example
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/service_example
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(service_example_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(service_example_generate_messages service_example_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/xu/dogkin_ws/src/service_example/srv/AddTwoInts.srv" NAME_WE)
add_dependencies(service_example_generate_messages_cpp _service_example_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(service_example_gencpp)
add_dependencies(service_example_gencpp service_example_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS service_example_generate_messages_cpp)

### Section generating for lang: geneus
### Generating Messages

### Generating Services
_generate_srv_eus(service_example
  "/home/xu/dogkin_ws/src/service_example/srv/AddTwoInts.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/service_example
)

### Generating Module File
_generate_module_eus(service_example
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/service_example
  "${ALL_GEN_OUTPUT_FILES_eus}"
)

add_custom_target(service_example_generate_messages_eus
  DEPENDS ${ALL_GEN_OUTPUT_FILES_eus}
)
add_dependencies(service_example_generate_messages service_example_generate_messages_eus)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/xu/dogkin_ws/src/service_example/srv/AddTwoInts.srv" NAME_WE)
add_dependencies(service_example_generate_messages_eus _service_example_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(service_example_geneus)
add_dependencies(service_example_geneus service_example_generate_messages_eus)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS service_example_generate_messages_eus)

### Section generating for lang: genlisp
### Generating Messages

### Generating Services
_generate_srv_lisp(service_example
  "/home/xu/dogkin_ws/src/service_example/srv/AddTwoInts.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/service_example
)

### Generating Module File
_generate_module_lisp(service_example
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/service_example
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(service_example_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(service_example_generate_messages service_example_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/xu/dogkin_ws/src/service_example/srv/AddTwoInts.srv" NAME_WE)
add_dependencies(service_example_generate_messages_lisp _service_example_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(service_example_genlisp)
add_dependencies(service_example_genlisp service_example_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS service_example_generate_messages_lisp)

### Section generating for lang: gennodejs
### Generating Messages

### Generating Services
_generate_srv_nodejs(service_example
  "/home/xu/dogkin_ws/src/service_example/srv/AddTwoInts.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/service_example
)

### Generating Module File
_generate_module_nodejs(service_example
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/service_example
  "${ALL_GEN_OUTPUT_FILES_nodejs}"
)

add_custom_target(service_example_generate_messages_nodejs
  DEPENDS ${ALL_GEN_OUTPUT_FILES_nodejs}
)
add_dependencies(service_example_generate_messages service_example_generate_messages_nodejs)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/xu/dogkin_ws/src/service_example/srv/AddTwoInts.srv" NAME_WE)
add_dependencies(service_example_generate_messages_nodejs _service_example_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(service_example_gennodejs)
add_dependencies(service_example_gennodejs service_example_generate_messages_nodejs)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS service_example_generate_messages_nodejs)

### Section generating for lang: genpy
### Generating Messages

### Generating Services
_generate_srv_py(service_example
  "/home/xu/dogkin_ws/src/service_example/srv/AddTwoInts.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/service_example
)

### Generating Module File
_generate_module_py(service_example
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/service_example
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(service_example_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(service_example_generate_messages service_example_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/xu/dogkin_ws/src/service_example/srv/AddTwoInts.srv" NAME_WE)
add_dependencies(service_example_generate_messages_py _service_example_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(service_example_genpy)
add_dependencies(service_example_genpy service_example_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS service_example_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/service_example)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/service_example
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_cpp)
  add_dependencies(service_example_generate_messages_cpp std_msgs_generate_messages_cpp)
endif()

if(geneus_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/service_example)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/service_example
    DESTINATION ${geneus_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_eus)
  add_dependencies(service_example_generate_messages_eus std_msgs_generate_messages_eus)
endif()

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/service_example)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/service_example
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_lisp)
  add_dependencies(service_example_generate_messages_lisp std_msgs_generate_messages_lisp)
endif()

if(gennodejs_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/service_example)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/service_example
    DESTINATION ${gennodejs_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_nodejs)
  add_dependencies(service_example_generate_messages_nodejs std_msgs_generate_messages_nodejs)
endif()

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/service_example)
  install(CODE "execute_process(COMMAND \"/usr/bin/python\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/service_example\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/service_example
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_py)
  add_dependencies(service_example_generate_messages_py std_msgs_generate_messages_py)
endif()
