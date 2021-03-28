#include "pch.h"
#include "CppUnitTest.h"
#include "../2.4 oop/Matrix.h"
#include "../2.4 oop/Matrix.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace My34454
{
	TEST_CLASS(Labtest24)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Matrix A(3);
			Assert::AreEqual(A.GetN(), 3);
		}
	};
}

