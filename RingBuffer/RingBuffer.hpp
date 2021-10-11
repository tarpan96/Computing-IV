//// Tarpan Patel
// PS4A
// 03-30-20
// Copyright © 2020 Tarpan Patel. All rights reserved.


#ifndef PS4_RINGBUFFER_H
#define PS4_RINGBUFFER_H

#include <stdint.h>
#include <vector>
#include <stdexcept>
#include <iostream>

class RingBuffer {
 private:
    int capSize, currSize;
    std::vector<int16_t> buffer;

 public:
    RingBuffer(int capSize);
    int size();
    bool isEmpty();
    bool isFull();
    void enqueue(int16_t);
    int16_t dequeue();
    int16_t peek();
    KarplusStrongAlgorithm()
};

#endif