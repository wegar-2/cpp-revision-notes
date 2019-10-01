#include <iostream>
#include <boost/random/mersenne_twister.hpp>
#include <boost/random/normal_distribution.hpp>
#include <boost/random/variate_generator.hpp>


using namespace std;

int main()
{
    boost::random::mt19937 mtRngEngine =
        boost::random::mt19937();
    boost::random::normal_distribution<> ndDistribution =
        boost::random::normal_distribution<>(1, 2);
    boost::random::variate_generator<
        boost::random::mt19937,
        boost::random::normal_distribution<>> gaussianRng =
            boost::random::variate_generator<
                boost::random::mt19937,
                boost::random::normal_distribution<>
            >(mtRngEngine, ndDistribution);
    cout << gaussianRng() << endl;
    return 0;
}
