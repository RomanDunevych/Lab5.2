#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab5.2/Lab5.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double x = 1;
			double eps = 0.0000001;
			int n = 0;
			double s = 0;
			double expected = exp(pow(x, 2));

			double actual = S(x, eps, n, s);

			Assert::AreEqual(expected, actual, eps);
		}
	};
}
