#include <iostream>
#include "InheritedObject.h"

// [C++11] 匿名namespace
//  内部に記載した変数や関数は内部リンケージを持つ
//  この機能が実装されるまでは、全てに static を記述していた
namespace {
    // [C++11] constexpr    : コンパイル時定数を定義するのに使用。
    //  コンパイル時に、使用している箇所を書き換える。
    constexpr int VALUE = 123;
};

int main()
{
    std::cout << "Hello World!\n";
}