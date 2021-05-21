# CMake generated Testfile for 
# Source directory: C:/Users/Benjaminas/Documents/GitHub/Pazymiu-skaiciuokle-VU-2/test
# Build directory: C:/Users/Benjaminas/Documents/GitHub/Pazymiu-skaiciuokle-VU-2/build/test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
if("${CTEST_CONFIGURATION_TYPE}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
  add_test([=[Tests]=] "C:/Users/Benjaminas/Documents/GitHub/Pazymiu-skaiciuokle-VU-2/build/test/Debug/Tests.exe")
  set_tests_properties([=[Tests]=] PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/Benjaminas/Documents/GitHub/Pazymiu-skaiciuokle-VU-2/test/CMakeLists.txt;17;add_test;C:/Users/Benjaminas/Documents/GitHub/Pazymiu-skaiciuokle-VU-2/test/CMakeLists.txt;0;")
elseif("${CTEST_CONFIGURATION_TYPE}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
  add_test([=[Tests]=] "C:/Users/Benjaminas/Documents/GitHub/Pazymiu-skaiciuokle-VU-2/build/test/Release/Tests.exe")
  set_tests_properties([=[Tests]=] PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/Benjaminas/Documents/GitHub/Pazymiu-skaiciuokle-VU-2/test/CMakeLists.txt;17;add_test;C:/Users/Benjaminas/Documents/GitHub/Pazymiu-skaiciuokle-VU-2/test/CMakeLists.txt;0;")
elseif("${CTEST_CONFIGURATION_TYPE}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
  add_test([=[Tests]=] "C:/Users/Benjaminas/Documents/GitHub/Pazymiu-skaiciuokle-VU-2/build/test/MinSizeRel/Tests.exe")
  set_tests_properties([=[Tests]=] PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/Benjaminas/Documents/GitHub/Pazymiu-skaiciuokle-VU-2/test/CMakeLists.txt;17;add_test;C:/Users/Benjaminas/Documents/GitHub/Pazymiu-skaiciuokle-VU-2/test/CMakeLists.txt;0;")
elseif("${CTEST_CONFIGURATION_TYPE}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
  add_test([=[Tests]=] "C:/Users/Benjaminas/Documents/GitHub/Pazymiu-skaiciuokle-VU-2/build/test/RelWithDebInfo/Tests.exe")
  set_tests_properties([=[Tests]=] PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/Benjaminas/Documents/GitHub/Pazymiu-skaiciuokle-VU-2/test/CMakeLists.txt;17;add_test;C:/Users/Benjaminas/Documents/GitHub/Pazymiu-skaiciuokle-VU-2/test/CMakeLists.txt;0;")
else()
  add_test([=[Tests]=] NOT_AVAILABLE)
endif()
