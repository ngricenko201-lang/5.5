#include "pch.h"
#include "CppUnitTest.h"
#include "../5.5/5.5.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
        TEST_METHOD(TestM0)
        {
            // A(0, n) = n + 1
            int maxDepth = 0;
            Assert::AreEqual(6, A(0, 5, 1, maxDepth));
        }

        TEST_METHOD(TestN0)
        {
            // A(m, 0) = A(m - 1, 1)
            int maxDepth = 0;
            Assert::AreEqual(3, A(2, 0, 1, maxDepth));
        }

        TEST_METHOD(TestKnownValue)
        {
            // A(2, 3) = 9
            int maxDepth = 0;
            Assert::AreEqual(9, A(2, 3, 1, maxDepth));
        }

        TEST_METHOD(TestDepth)
        {
            // A(1, 0) -> A(0, 1): два рівні
            int maxDepth = 0;
            A(1, 0, 1, maxDepth);
            Assert::AreEqual(2, maxDepth);
        }
    };
}