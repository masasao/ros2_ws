# CMake generated Testfile for 
# Source directory: /home/masanao/ros2_ws/src/person_msgs
# Build directory: /home/masanao/ros2_ws/build/person_msgs
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(lint_cmake "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/home/masanao/ros2_ws/build/person_msgs/test_results/person_msgs/lint_cmake.xunit.xml" "--package-name" "person_msgs" "--output-file" "/home/masanao/ros2_ws/build/person_msgs/ament_lint_cmake/lint_cmake.txt" "--command" "/opt/ros/dashing/bin/ament_lint_cmake" "--xunit-file" "/home/masanao/ros2_ws/build/person_msgs/test_results/person_msgs/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/masanao/ros2_ws/src/person_msgs")
add_test(xmllint "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/home/masanao/ros2_ws/build/person_msgs/test_results/person_msgs/xmllint.xunit.xml" "--package-name" "person_msgs" "--output-file" "/home/masanao/ros2_ws/build/person_msgs/ament_xmllint/xmllint.txt" "--command" "/opt/ros/dashing/bin/ament_xmllint" "--xunit-file" "/home/masanao/ros2_ws/build/person_msgs/test_results/person_msgs/xmllint.xunit.xml")
set_tests_properties(xmllint PROPERTIES  LABELS "xmllint;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/masanao/ros2_ws/src/person_msgs")
subdirs("person_msgs__py")
