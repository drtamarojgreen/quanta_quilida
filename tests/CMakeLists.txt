add_executable(run_tests
    test_main.cpp
    unit_tests.cpp
    bdd_tests.cpp
)

add_test(NAME run_tests COMMAND run_tests)
