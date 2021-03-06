/* 
 * File:   factorial.h
 * Author: andre
 *
 * Created on 23 апреля 2021 г., 11:08
 */

#ifndef FACTORIAL_H
#define FACTORIAL_H



template <unsigned int N>
struct fact
{
    enum: long long { value = N * fact<N-1>::value };
};

template <>
struct fact<1>
{
    enum { value = 1 };
};

template <>
struct fact<0>
{
    enum { value = 1 };
};


#endif /* FACTORIAL_H */

