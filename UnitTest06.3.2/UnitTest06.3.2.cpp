#include "pch.h"
#include "CppUnitTest.h"
#include "../ChyrunSofialab6.3.2/ChyrunSofialab6.3.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest0632
{
	TEST_CLASS(UnitTest0632)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			const int n = 6;
			int a[n] = { 1,2,3,4,5,6 };
			t = Sort(a, n,0,0);
			Assert::AreEqual(t, 3);
		}
	};
}
