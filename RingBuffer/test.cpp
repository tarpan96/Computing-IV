// Tarpan Patel
// PS4A
// 03-30-20
// Copyright © 2020 Tarpan Patel. All rights reserved.

#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE Main
#include <boost/test/unit_test.hpp>

#include <stdint.h>
#include <iostream>
#include <string>
#include <exception>
#include <stdexcept>

#include "RingBuffer.hpp"

BOOST_AUTO_TEST_CASE(Constructor) {
    BOOST_REQUIRE_NO_THROW(RingBuffer(10));

    BOOST_REQUIRE_THROW(RingBuffer(0), std::exception);
    BOOST_REQUIRE_THROW(RingBuffer(0), std::invalid_argument);
}

BOOST_AUTO_TEST_CASE(Dequeue) {
    RingBuffer ringBuffer(5);

    ringBuffer.enqueue(4);
    ringBuffer.enqueue(3);
    ringBuffer.enqueue(2);
    ringBuffer.enqueue(1);
    ringBuffer.enqueue(0);

    BOOST_REQUIRE(ringBuffer.dequeue() == 4);
    BOOST_REQUIRE(ringBuffer.dequeue() == 3);
    BOOST_REQUIRE(ringBuffer.dequeue() == 2);
    BOOST_REQUIRE(ringBuffer.dequeue() == 1);
    BOOST_REQUIRE(ringBuffer.dequeue() == 0);

    BOOST_REQUIRE_THROW(ringBuffer.dequeue() == -1, std::runtime_error);
}

BOOST_AUTO_TEST_CASE(Enqueue) {
    RingBuffer ringBuffer(5);

    ringBuffer.enqueue(10);
    ringBuffer.enqueue(8);
    ringBuffer.enqueue(6);
    ringBuffer.enqueue(4);
    ringBuffer.enqueue(2);

    BOOST_REQUIRE_THROW(ringBuffer.enqueue(0), std::runtime_error);
}

BOOST_AUTO_TEST_CASE(OTHERS) {
    RingBuffer ringBuffer(5);

    ringBuffer.enqueue(15);
    ringBuffer.enqueue(12);
    ringBuffer.enqueue(9);
    ringBuffer.enqueue(6);
    ringBuffer.enqueue(3);

    BOOST_REQUIRE(ringBuffer.peek() == 15);
    BOOST_REQUIRE(ringBuffer.isEmpty() == 0);
    BOOST_REQUIRE(ringBuffer.isFull() == 1);
}
