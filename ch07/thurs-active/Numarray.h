// #ifndef NUMARRAY_H
// #define NUMARRAY_H
// class Numarray
// {
//     private:
//     float numbers[];
//     int size;

//     public:
//     Numarray(int);
//     ~Numarray();
//     void addNumber(int);
//     float getNumber(int);
//     float getLargestNumber();
//     float getSmallestNumber();
//     float getAverage();
// };
#ifndef DFA_H
#define DFA_H
class DFA
{
  private:
    float * ptr;
    int index;

  public:
    DFA(int size) : index(size) { ptr = new float[size]; }
    ~DFA() { delete ptr; }
    void setI(int, float);
    float getI(int);
    float getHi();
    float getLow();
    float getAvg();
};
#endif