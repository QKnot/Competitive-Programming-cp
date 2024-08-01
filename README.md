# Interested Community for Competitive Programming (ICCP) - CISC

The Interested Community for Competitive Programming (ICCP) at the Northern University of Business and Technology Khulna is a dynamic and enthusiastic group of students dedicated to mastering the art of competitive programming.

## Table of Contents

1. [Competitive Programming Online Judge](#online-judges)
2. [Competitive Programming set-up](#repository)
3. [Competitive Programming Books](#books)
4. [Programming Language for Competitive Programming](#programming-language)
5. [Basic of C++](#C++)
    - [Hello World](#helloWorld)

## সব থেকে জনপ্রিয় Competitive Programming Online Judge গুলো <a name="online-judges"></a>

- [Codeforces](https://codeforces.com)
- [CSES](https://cses.fi)
- [CodeChef](https://www.codechef.com)
- [AtCoder](https://atcoder.jp)
- [TopCoder](https://www.topcoder.com)
- [HackerRank](https://www.hackerrank.com)
- [HackerEarth](https://www.hackerearth.com)
- [SPOJ](https://www.spoj.com)

## Competitive Programming set-up
- Competitive Programming set-up এর জন্য এই [repository](https://github.com/nxtsourav7/Compitative-Programming-Setup.git) টি check করতে পারেন। <a name="repository"></a>
## Competitive Programming জন্য সেরা বইগুলি <a name="books"></a>

- প্রথম সেমিস্টারের শিক্ষার্থীদের জন্য অথবা যারা কম্পিউটার প্রোগ্রামিং-এর সাথে পরিচিত নন, তারা তামিম শাহরিয়ার সুবিন স্যারের [কম্পিউটার প্রোগ্রামিং ১](cpResources/cProgramming/CP_ComputerProgrammingTamimShariarSubeen.pdf) বইটি পড়তে পারেন।
- [Competitive Programming Handbook](cpResources/cpBooks/CompetitiveProgrammersHandbook.pdf)
- [Competitive Programming 4 Part 1](cpResources/cpBooks/CompetitiveProgramming4Book1.pdf)
- [Competitive Programming 4 Part 2](cpResources/cpBooks/CompetitiveProgramming4Book2.pdf)
- [Introduction to Algorithm 4'th edition](cpResources/cpBooks/IntroductiontoAlgorithms4th.pdf)

`Competitive Programming শুরু করার জন্য প্রথমে একটি Programming Language এর মৌলিক বিষয়গুলো সুন্দরভাবে শেখা প্রয়োজন। 🌟`

## Competitive Programming এর জন্য কোন Programming Language শেখা উচিৎ? <a name="programming-language"></a>

- ৯৫% Competitive Programmers C++ ব্যবহার করে থাকেন। কারণ C++ এ STL (Standard Template Library) রয়েছে এবং এটি low-level data নিয়ে কাজ করার জন্য অত্যন্ত কার্যকর।
- Python ও অন্যান্য ভাষা যেমন Java, Rust এবং Kotlinও competitive programming এ ব্যবহৃত হয়। Python এর সহজ syntax এবং শক্তিশালী libraries যেমন NumPy এবং pandas, বিভিন্ন সমস্যার সমাধানে সুবিধা প্রদান করে।
## Basic of C++<a name="C++"></a>
C++ শেখার আগে আমাদের কিছু বিষয় সম্পর্কে জানা খুবই গুরুত্বপূর্ণ।মানুষ  ভাষা ব্যবহার করে থাকে একে অন্যের সাথে যোগাযোগ করার জন্য। তেমনই কম্পিটার সাথে যোগাযোগ করার জন্য আমাদের কম্পিউটারের বোধগম্য ভাষার প্রয়োজন। আসলে কম্পিউটার কোনো ভাষাই বুঝতে পারে না একটা হাদারাম; কিন্তু কোনো কাজ বুঝিয়ে দিতে পারলে চোখের পলকে করে দিতে পারে। কম্পিউটার শুধু বুঝতে পারে বিদ্যুৎ এর উপস্থিতি(১) এবং অনুপস্থিতি(০)। এর জন্য আমাদের প্রয়োজন একজন traslator যে এই ভাষা translate করে কম্পিউটারকে বুঝিয়ে দিতে পারে। এই translator কে আমরা বলি compiler। এখন সব ভাষা সরাসরি ০ অথবা ১ এ রূপান্তর করে না। এর বিভিন্ন প্রকারভেদ আছে যেমনঃ 
- compiled language(C, C++, Rust, Go) সরাসরি code কে  `machine code or binary code(0 or 1)` translate করতে পারে।
- Interpreted language(Python, JavaScript, PHP, Ruby) সরাসরি code কে  `machine code or binary code(0 or 1)` translate করতে পারে না।
- Hybrid language(Java, C#) এটা সরাসরি code কে  `machine code or binary code(0 or 1)` translate না করে প্রথমে bytecode এ রূপান্তর করে। তারপর কোনো Interpreter সেটা কে `machine code or binary code(0 or 1)` translate করে। <br>
### 5.1 Hello World <a name="helloWorld"></a>
যেকোনো programming language শেখার প্রথমে সাধারণত Hello world print করে শুরু করা হয়। আমরা সেটা দিয়েই শুরু করব।
```cpp
#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Hello, World" << '\n';
    return 0;
}
```
``#include<bits/stdc++.h>`` এটা আবার কী?<br>
এটা কে বলে header file। এখন প্রশ্ন আসে header file জিনিসটা আবার কী?<br>
Header file হলো function, variable, class এবং অন্যান্য উপাদান এর ঘোষণা।<br>
সহজ কথাই বলতে গেলে এটা বলে দেয় তুমি কি কি function, class নিয়ে কাজ করতে পারবা। কিন্তু ঐ function বা class এর পুরো কোড header file এ সধারনত থাকে না। এই কোড আমাদের sourch file এ লেখা লিখতে হয়। এই বিষয় নিয়ে আরও জানতে চাইলে এই [লিংক](https://en.cppreference.com/w/cpp/header) টা দেখতে পারো।<br>
এখন [``#include<bits/stdc++.h>``](https://gist.github.com/Einstrasse/ac0fe7d7450621a39364ed3b05cacd11) কোনো ``#include<iostream>`` বা ``#include<string>`` এর মতো standard header file না। এটা competitive programming মাথায় রেখে তৈরি করা। এটা অনেক গুলো standard header file এর সমন্বয়ে তৈরি। যাতে করে বার বার আমাদের header file ঘোষণা করার মতো ঝামেলায় না পরতে হয়। কারণ competitive programming এ সময় খুবই গুরুত্বপূর্ণ বিষয়। 


