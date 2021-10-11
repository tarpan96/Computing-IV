#include <iostream>
#include <string>
#include "FibLFSR.hpp"


#define BOOST_TEST_MODULE FibLFSR
#include </usr/include/boost/test/included/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(FibLFSR_test)

BOOST_AUTO_TEST_CASE(LFSRtest1)
{
	FibLFSR byte1("1011011000110110");

	BOOST_CHECK(byte1.step() == 1);

	FibLFSR byte2("1011011000110110");

	BOOST_REQUIRE(byte2.generate(5) == 3);
	
}


BOOST_AUTO_TEST_SUITE_END()
