/*
 * main.h
 *
 *  Created on: 2015年4月10日
 *      Author: jzy
 */

#ifndef VECTOR2_MAIN_H_
#define VECTOR2_MAIN_H_
#include <iostream>
#include <string>

#include "../Vector2/Vector.h"
using namespace std;

//测试const reverse迭代器
void print(const Vector<string> &vec)
{
    for(Vector<string>::const_reverse_iterator it = vec.rbegin();
        it != vec.rend();
        ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
}


int hmain()
{
    Vector<string> vec(3, "hello");

    for(Vector<string>::const_iterator it = vec.begin();
        it != vec.end();
        ++it)
    {
        cout << *it << " ";
    }
    cout << endl;

    cout << "size = " << vec.size() << endl;
    cout << "capacity = " << vec.capacity() << endl;
    vec.push_back("foo");
    vec.push_back("bar");

    cout << "size = " << vec.size() << endl;
    cout << "capacity = " << vec.capacity() << endl;

    for(Vector<string>::reverse_iterator it = vec.rbegin();
        it != vec.rend();
        ++it)
    {
        cout << *it << " ";
    }
    cout << endl;


    print(vec);

    Vector<string> vec2;
    vec2.push_back("beijing");
    vec2.push_back("shanghai");
    vec2.push_back("guangzhou");
    print(vec2);

    vec.swap(vec2);
    print(vec);
    print(vec2);

    return 0;

}



#endif /* VECTOR2_MAIN_H_ */
