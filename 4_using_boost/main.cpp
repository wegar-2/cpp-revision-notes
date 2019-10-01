#include <iostream>
#include <boost/random/mersenne_twister.hpp>
#include <boost/random/normal_distribution.hpp>
#include <boost/random/exponential_distribution.hpp>
#include <boost/random/variate_generator.hpp>



int main()
{
    // ---------- 1. prepare the objects ----------
    // 1.1. arrays to store the numbers
    double myArrayStdNormal[1000];
    double myArrayExponential[1000];
    // 1.2. normal RNG
    boost::random::mt19937 mt_rng = boost::random::mt19937();
    boost::random::normal_distribution<> objStdNorm = boost::random::normal_distribution<>(0.0, 1.0);
    boost::random::variate_generator<
        boost::random::mt19937, boost::random::normal_distribution<>> objStdNormRng =
        boost::random::variate_generator<boost::random::mt19937, boost::random::normal_distribution<>>(mt_rng, objStdNorm);

    // ---------- 2. generate and print the random numbers ----------
    std::cout << "Getting an array of random normal numbers..." << std::endl;
    for (int k = 0; k < 100; ++k) {
        std::cout << k << ": " << objStdNormRng() << std::endl;
    }



    return 0;
}
