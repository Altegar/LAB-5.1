#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB-5.1/LAB-5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			t = (pow(g(8, 4 * 4 + 1), 2) * g(8, 4 * 4 + 1) + g(1, 8 * 8 + 4)) / (1 + pow(g(1, 8 * 4), 2) * g(1, 8 * 4));
			Assert::AreEqual(t, 0.013069);
		}
	};
}