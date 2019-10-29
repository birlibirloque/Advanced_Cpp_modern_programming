Given the following type:

```cpp
template <typename T>
struct point {
    T x,y,z;
};
```

Define a array to store 10 points in such a way that you make sure that there is no point that
crosses processor cache lines.

For simplicity, assume that your processor has a cache line size of 64 bytes.

Write a program that prints the following information for points whose base type is float, double, and long double:

* Size of the floating point type.
* Size of a point for that floating point type.
* Alignment of a point for that floating point type.
* Number of points that would fit in a catch line.
* Size of an array of 10 points without alignment requirements.
* Size of an array of 10 points when alignment requirements are applied.
