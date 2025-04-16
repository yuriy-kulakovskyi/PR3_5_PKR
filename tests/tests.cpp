#include <gtest/gtest.h>
#include "../functions/functions.h"

TEST(StackTest, PushPop) {
    Elem* stack = nullptr;
    stack = push(stack, 'A');
    stack = push(stack, 'B');
    stack = push(stack, 'C');

    char value;
    stack = pop(stack, value);
    EXPECT_EQ(value, 'C');
    EXPECT_EQ(stack->info, 'B');
}