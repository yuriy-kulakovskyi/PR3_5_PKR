add_test([=[StackTest.PushPop]=]  [==[/Users/yura_kulakovskyi/Documents/C++/TeamWork/PR3/PR3_5/cmake-build-debug/PR3_5_tests]==] [==[--gtest_filter=StackTest.PushPop]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[StackTest.PushPop]=]  PROPERTIES WORKING_DIRECTORY [==[/Users/yura_kulakovskyi/Documents/C++/TeamWork/PR3/PR3_5/cmake-build-debug]==] SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set(  PR3_5_tests_TESTS StackTest.PushPop)
