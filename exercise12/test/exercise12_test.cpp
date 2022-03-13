/**
 * @file exercise12_test.hpp
 * @author
 * @brief Exercise 12 test
 * @version 2022.3
 * @date
 *
 * @copyright Copyright (c) 2022
 *
 */
#ifndef CATCH_CONFIG_MAIN
#define CATCH_CONFIG_MAIN
#include "../../catch2/catch.hpp"
#endif

#include "../src/exercise12.hpp"


TEST_CASE ( "Test Array", "[TakeArray]" ) {
    /* Write an assertion here */
    int arr[] = {1, 2, 3, 4, 5};
    CHECK(TakeArray(arr, 5) == 15);
}

TEST_CASE ( "Test Vector", "[TakeVector]" ) {
    /* Write an assertion here */
    vector<string> vect{"I", "like", "c++"};
    CHECK(TakeVector(vect) == "I like c++ ");
}

TEST_CASE ( "Test Deque", "[TakeDeque]" ) {
    /* Write an assertion here */
    deque<int> dq(1, 2);
    deque<int> ndq = TakeDeque(dq, 2);
    CHECK(ndq[0] == 2);
    // CHECK(ndq[1] == 0);
}

TEST_CASE ( "Test List", "[TakeList]" ) {
    /* Write an assertion here */
    list<int> lst;
    for (int i = 0; i < 5; ++i) {
        lst.push_back(i);
    }
    CHECK(TakeList(lst, 2) == 1);
}

TEST_CASE ( "Test Stack", "[TakeStack]" ) {
    /* Write an assertion here */
    string expected = "stack not empty, we have: 3\nstack not empty, we have: 2\nstack not empty, we have: 1\n";
    char fakeoutArr[1024];
    stringstream fakeout(fakeoutArr);

    streambuf *coutbuf = cout.rdbuf();
    cout.rdbuf(fakeout.rdbuf());

    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.pop();
    TakeStack(st);
    CHECK(fakeout.str() == expected);

    cout.rdbuf(coutbuf);
}

TEST_CASE ( "Test Queue", "[TakeQueue]" ) {
    /* Write an assertion here */
    string expected = "front of queue is: str1 and back is: str4\nwhat do you want to do? (add, remove, or stop)\nstopped\n";
    stringstream fakein("stop");
    char fakeoutArr[1024];
    stringstream fakeout(fakeoutArr);

    streambuf *cinbuf = cin.rdbuf();
    cin.rdbuf(fakein.rdbuf());

    streambuf *coutbuf = cout.rdbuf();
    cout.rdbuf(fakeout.rdbuf());

    queue<string> q;
    q.push("str1");
    q.push("str2");
    q.push("str3");
    q.push("str4");
    TakeQueue(q);
    CHECK(fakeout.str() == expected);

    cin.rdbuf(cinbuf);
    cout.rdbuf(coutbuf);

    // auto old_buffer = std::cout.rdbuf(nullptr);
    // queue<string> q;
    // q.push("str1");
    // q.push("str2");
    // q.push("str3");
    // q.push("str4");
    // CHECK(TakeQueue(q) == "str1");
}

TEST_CASE ( "Test Priority Queue", "[TakePQueue]" ) {
    /* Write an assertion here */

    string expected = "prioritized element of queue is: 4\nwhat do you want to do? (add, remove, or stop)\nstopped\n";
    stringstream fakein("stop");
    char fakeoutArr[1024];
    stringstream fakeout(fakeoutArr);

    streambuf *cinbuf = cin.rdbuf();
    cin.rdbuf(fakein.rdbuf());

    streambuf *coutbuf = cout.rdbuf();
    cout.rdbuf(fakeout.rdbuf());

    priority_queue<int> pq;
    pq.push(3);
    pq.push(1);
    pq.push(2);
    pq.push(4);
    TakePQueue(pq);
    CHECK(fakeout.str() == expected);

    cin.rdbuf(cinbuf);
    cout.rdbuf(coutbuf);

    // priority_queue<int> pq;
    // pq.push(3);
    // pq.push(1);
    // pq.push(2);
    // pq.push(4);
    // CHECK(TakePQueue(pq) == 4);
}

TEST_CASE ( "Test Set", "[TakeSet]" ) {
    /* Write an assertion here */

    string expected = "max size is: 461168601842738790\ndo you want to add to the set?\nstopped\n";
    stringstream fakein("no");
    char fakeoutArr[1024];
    stringstream fakeout(fakeoutArr);

    streambuf *cinbuf = cin.rdbuf();
    cin.rdbuf(fakein.rdbuf());

    streambuf *coutbuf = cout.rdbuf();
    cout.rdbuf(fakeout.rdbuf());

    set<int> s;
    s.insert(3);
    s.insert(1);
    s.insert(2);
    s.insert(4);
    TakeSet(s);
    CHECK(fakeout.str() == expected);

    cin.rdbuf(cinbuf);
    cout.rdbuf(coutbuf);
    
    // set<int> s;
    // s.insert(3);
    // s.insert(1);
    // s.insert(2);
    // s.insert(4);
    // set<int> ss = TakeSet(s);
    // CHECK(ss.size() == 4);
}

TEST_CASE ( "Test Map", "[TakeMap]" ) {
    /* Write an assertion here */
    map<string, string> wordsMap;
    wordsMap.insert({"1", "cpp"});
    wordsMap.insert({"2", "253"});
    wordsMap.insert({"3", "Luther"});
    wordsMap.insert({"4", "College"});
    wordsMap.insert({"5", "Iowa"});
    wordsMap.insert({"6", "Decorah"});
    CHECK(TakeMap(2, wordsMap) == "253 Iowa ");
}

TEST_CASE ( "Test Container", "[TakeMultiSet]" ) {
    /* Write an assertion here */

    string expected = "the sentence is: It is nice today \ndo you want to add to the set?\nstopped\n";
    stringstream fakein("no");
    char fakeoutArr[1024];
    stringstream fakeout(fakeoutArr);

    streambuf *cinbuf = cin.rdbuf();
    cin.rdbuf(fakein.rdbuf());

    streambuf *coutbuf = cout.rdbuf();
    cout.rdbuf(fakeout.rdbuf());

    multiset<string> sm;
    sm.insert("It");
    sm.insert("is");
    sm.insert("nice");
    sm.insert("today");
    TakeMultiSet(sm);
    CHECK(fakeout.str() == expected);

    cin.rdbuf(cinbuf);
    cout.rdbuf(coutbuf);

    // multiset<string> sm;
    // sm.insert("It");
    // sm.insert("is");
    // sm.insert("nice");
    // sm.insert("today");
    // CHECK(TakeMultiSet(sm) == 4);
}