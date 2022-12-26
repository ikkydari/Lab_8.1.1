#include "pch.h"
#include "CppUnitTest.h";
#include "../Lab_8.1.1/Source.cpp";
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UT811
{
	TEST_CLASS(UT811)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			bool expected = true;
			bool actual = Count("into");
			Assert::AreEqual(expected, actual);
		}
	};
}
