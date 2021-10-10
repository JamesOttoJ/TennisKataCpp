#include "pch.h"
#include "CppUnitTest.h"
#include "../TennisKata/TennisKata.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace PairingForGoodTest
{
	TEST_CLASS(PairingForGoodTest)
	{
	public:
		
		TEST_METHOD(ThreePlusThree)
		{
			int i = 3, j = 3;
			int actual = i + j;
			Assert::AreEqual(6, actual);
		}
	};
}
