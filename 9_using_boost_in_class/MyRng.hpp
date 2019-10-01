
#include <boost/random/mersenne_twister.hpp>
#include <boost/random/normal_distribution.hpp>
#include <boost/random/variate_generator.hpp>

#ifndef MYRNG_HPP
#define MYRNG_HPP

/* This class generates samples from normal distribution */

class MyRng {
public:

    /* =================    1. CONSTRUCTORS AND DESTRUCTOR     ============== */
    MyRng();
    MyRng(int seed);
    MyRng(int seed, double mu, double sigma);
    ~MyRng();
    MyRng(const MyRng& rhs);

    /* ======================== 2. CLASS METHODS  =========================== */
    int GetSeed() const;
    void SetSeed(in seed);
    unsigned int GetInstanceId() const;
    void PrintObjectInfo() const;

    /* ======================== 3. OPERATORS ================================ */
    // 3.1. assignment operator
    MyRng& operator=(const MyRng& rhs);
    // 3.2. incrementation and decrementation operators
    const MyRng& operator++();
    MyRng operator++(int flag);
    const MyRng& operator--();
    MyRng operator--(int flag);
    // 3.3. dereference operator - access the seed
    int& operator*();
    // 3.4. arrow operator
    boost::random::normal_distribution<>* operator->();
    // 3.5. addition and subtraction operators
    MyRng operator+(const MyRng& rhs);
    MyRng operator-(const MyRng& rhs);
    // 3.6. parentheses operator

    // 3.7. subscript operator

private:
    int* pSeed;
    boost::random::mt19937* pMersenneTwisterRngEngine;
    boost::random::normal_distribution<>* pGaussianRngDistribution;
    boost::random::variate_generator<
        boost::random::mt19937,
        boost::random::normal_distribution<>>* pGaussianRng;
    static unsigned int* instancesCounter;
    unsigned int* pInstanceId;
};

#endif // MYRNG_HPP

