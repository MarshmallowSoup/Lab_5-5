﻿#include "pch.h"
#include "CppUnitTest.h"
#include "..\Lab_5-5\Lab_5-5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(TestMethod1)
		{
			int k = f(0);
			Assert::AreEqual(-1, k);
		}
	};
}
