# CMake generated Testfile for 
# Source directory: C:/Users/C23339461/OneDrive - Technological University Dublin/Documents/Game Lib/GameLibrary
# Build directory: C:/Users/C23339461/OneDrive - Technological University Dublin/Documents/Game Lib/GameLibrary/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
if(CTEST_CONFIGURATION_TYPE MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
  add_test(output_test "C:/Users/C23339461/OneDrive - Technological University Dublin/Documents/Game Lib/GameLibrary/build/Debug/PlaylistManager.exe")
  set_tests_properties(output_test PROPERTIES  PASS_REGULAR_EXPRESSION "YourExpectedOutput" _BACKTRACE_TRIPLES "C:/Users/C23339461/OneDrive - Technological University Dublin/Documents/Game Lib/GameLibrary/CMakeLists.txt;25;add_test;C:/Users/C23339461/OneDrive - Technological University Dublin/Documents/Game Lib/GameLibrary/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
  add_test(output_test "C:/Users/C23339461/OneDrive - Technological University Dublin/Documents/Game Lib/GameLibrary/build/Release/PlaylistManager.exe")
  set_tests_properties(output_test PROPERTIES  PASS_REGULAR_EXPRESSION "YourExpectedOutput" _BACKTRACE_TRIPLES "C:/Users/C23339461/OneDrive - Technological University Dublin/Documents/Game Lib/GameLibrary/CMakeLists.txt;25;add_test;C:/Users/C23339461/OneDrive - Technological University Dublin/Documents/Game Lib/GameLibrary/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
  add_test(output_test "C:/Users/C23339461/OneDrive - Technological University Dublin/Documents/Game Lib/GameLibrary/build/MinSizeRel/PlaylistManager.exe")
  set_tests_properties(output_test PROPERTIES  PASS_REGULAR_EXPRESSION "YourExpectedOutput" _BACKTRACE_TRIPLES "C:/Users/C23339461/OneDrive - Technological University Dublin/Documents/Game Lib/GameLibrary/CMakeLists.txt;25;add_test;C:/Users/C23339461/OneDrive - Technological University Dublin/Documents/Game Lib/GameLibrary/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
  add_test(output_test "C:/Users/C23339461/OneDrive - Technological University Dublin/Documents/Game Lib/GameLibrary/build/RelWithDebInfo/PlaylistManager.exe")
  set_tests_properties(output_test PROPERTIES  PASS_REGULAR_EXPRESSION "YourExpectedOutput" _BACKTRACE_TRIPLES "C:/Users/C23339461/OneDrive - Technological University Dublin/Documents/Game Lib/GameLibrary/CMakeLists.txt;25;add_test;C:/Users/C23339461/OneDrive - Technological University Dublin/Documents/Game Lib/GameLibrary/CMakeLists.txt;0;")
else()
  add_test(output_test NOT_AVAILABLE)
endif()
