#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 5.4/lab5.4.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int k = 1;
			int N = 1;

			Assert::AreEqual(S0(N), 2.41421,0.0001);
		}
	};
}
