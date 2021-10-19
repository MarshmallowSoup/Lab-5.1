#include "pch.h"
#include "CppUnitTest.h"
#include "..\Lab_5-1\lab_5-1.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab51
{
	TEST_CLASS(UnitTestLab51)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			t = f(0, 0, 1);
			Assert::AreEqual(1., t);
		}
	}; 
}
