// This code includes Boost library example code
// Original example: https://www.boost.org/doc/libs/1_82_0/more/getting_started/unix-variants.html
// Copyright (c) 2023 Boost Authors

#include<iostream>
#include"boost/lambda/lambda.hpp"
#include<iterator>
#include<algorithm>


int main()
{

    using namespace boost::lambda;
    typedef std::istream_iterator<int> in;

    std::for_each(
        in(std::cin), in(), std::cout << (_1 * 3) << " " );

    return 0;
}
