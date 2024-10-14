#include "pch.h"
#include "CppUnitTest.h"
#include "..\PR6.3(rec).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

extern void reverseArray(int arr[], int size);

namespace UnitTest
{
    TEST_CLASS(ReverseArrayTests)
    {
    public:

        TEST_METHOD(TestReverseArray)
        {
            // Тестування з непарною кількістю елементів
            {
                int arr[] = { 1, 2, 3, 4, 5 };
                int expected[] = { 5, 4, 3, 2, 1 };
                int size = sizeof(arr) / sizeof(arr[0]);

                reverseArray(arr, size);

                for (int i = 0; i < size; i++) {
                    Assert::AreEqual(expected[i], arr[i]);
                }
            }

            // Тестування з парною кількістю елементів
            {
                int arr[] = { 1, 2, 3, 4, 5, 6 };
                int expected[] = { 6, 5, 4, 3, 2, 1 };
                int size = sizeof(arr) / sizeof(arr[0]);

                reverseArray(arr, size);

                for (int i = 0; i < size; i++) {
                    Assert::AreEqual(expected[i], arr[i]);
                }
            }

            // Тестування з одного елемента
            {
                int arr[] = { 1 };
                int expected[] = { 1 };
                int size = sizeof(arr) / sizeof(arr[0]);

                reverseArray(arr, size);

                for (int i = 0; i < size; i++) {
                    Assert::AreEqual(expected[i], arr[i]);
                }
            }
        }
    };
};