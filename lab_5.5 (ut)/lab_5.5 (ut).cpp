#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_5.5/Source.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace lab55ut
{
	TEST_CLASS(lab55ut)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double temp;
			temp = j(1, 2, 3);
			Assert::AreEqual(temp, 1, 0.000001 );
		}
	};
}
