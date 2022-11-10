#include "pch.h"
#include "CppUnitTest.h"
#include "../Laboratorna 6_2/Lab 6_2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestfor62
{
	TEST_CLASS(UnitTestfor62)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t = 0;
			int arr[8] = { 1, -4, 4, 6, 2, 0, -3, -2 };
			int amount = 0;
			double serednie_arif = 0;
			int all_i_elements = 0;
			t = calculate(arr, 8, 0, serednie_arif, all_i_elements, amount);
			Assert::AreEqual(t, 3.6667, 0.0001);
		}
	};
}
