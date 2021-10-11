// Tarpan Patel
// PS4A
// 03-30-20
// Copyright © 2020 Tarpan Patel. All rights reserved.

#include "RingBuffer.hpp"

RingBuffer::RingBuffer(int capSize) {
    if (capSize == 0) {
        throw std::invalid_argument("capacity must be greater than zero");
    } else {
        this->capSize = capSize;
    }
}

void RingBuffer::enqueue(int16_t buf) {
    if (isFull()) {
        throw std::runtime_error("can't enqueue to a full ring");
    } else {
        buffer.push_back(buf);
    }
}

int16_t RingBuffer::dequeue() {
    int16_t temp;

    if (isEmpty()) {
        throw std::runtime_error("can't dequeue on empty queue");
    } else {
        temp = buffer.at(0);
        buffer.erase(buffer.begin());
    }
    return temp;
}

int16_t RingBuffer::peek() {
    if (isEmpty()) {
        throw std::runtime_error("Failed to peek on empty queue");
    } else {
        return buffer.at(0);
    }
}

void RingBuffer::KarplusStrongAlgorithm() {
    for (int i = 0; i < size()-1; i++) {
       enqueue(.996 * (.5 * (dequeue() + buffer.at(i))));
    }
}

int RingBuffer::size() {
    return buffer.size();
}

bool RingBuffer::isEmpty() {
    return (buffer.size() == 0);
}

bool RingBuffer::isFull() {
    return (buffer.size() == capSize);
}
