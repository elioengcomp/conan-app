#include <iostream>
#include "hello.h"
#include "boost/date_time/gregorian/gregorian.hpp"

void hello(){
    boost::gregorian::date today = boost::gregorian::day_clock::local_day();
    std::cout << "Today is: " << today << std::endl;
    #ifdef NDEBUG
    std::cout << "Hello World Release!" <<std::endl;
    #else
    std::cout << "Hello World Debug!" <<std::endl;
    #endif
}
