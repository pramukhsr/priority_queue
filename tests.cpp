#include <gtest/gtest.h>
#include "priorityqueue.h"

TEST(priorityqueue, one) {
    map<int, vector<int> > map;

    int n = 9;
    int vals[] = {15, 16, 17, 6, 7, 8, 9, 2, 1};
    int prs[] = {2, 1, 3, 1, 2, 2, 2, 3, 3};
    //int prs[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    priorityqueue<int> pq;
    priorityqueue<int> pq2;
    //priorityqueue<int> pq3;

    for (int i = 0; i < n; i++) {
        pq.enqueue(vals[i], prs[i]);
        map[prs[i]].push_back(vals[i]);
    }
    pq2 = pq;

    EXPECT_EQ(pq.Size(), 9);
    EXPECT_EQ(pq2.Size(), 9);
    stringstream ss;

    for (auto e: map) { 
        int priority = e.first;
        vector <int> values = e.second;
        for (size_t j = 0; j < values.size(); j++){
            ss << priority << " value: " << values[j] << endl;
        }
    }
    pq.toString();
    EXPECT_EQ(pq.toString(), ss.str());
    EXPECT_EQ(pq2.toString(), ss.str());
    
    // if (pq == pq2) {
    //     cout << "good job" << endl;
    // }
    EXPECT_EQ(pq, pq2);
    
    int value = 0;
    int priority = 0;
    
    pq.begin();
    //  while (pq.next(value, priority)) {
    //       cout << priority << " value: " << value << endl;
    //   }
    //   cout << priority << " value: " << value << endl;
    
    // cout << pq2.toString();
     int test = pq2.dequeue();
     EXPECT_EQ(test, 16);
    // cout << pq2.toString();
    // cout << "deque first value is: " << test << endl;
     int test1 = pq2.dequeue();
     EXPECT_EQ(test1, 6);
    // cout << pq2.toString();
    // cout << "deque second value is: " << test1 << endl;
    // int test2 = pq2.dequeue();
    // cout << pq2.toString();
    // cout << "deque third value is: " << test2 << endl;
    // int test3 = pq2.dequeue();
    // cout << pq2.toString();
    // cout << "deque fourth value is: " << test3 << endl;
    // int test4 = pq2.dequeue();
    // cout << pq2.toString();
    // cout << "deque fifth value is: " << test4 << endl;
    // int test5 = pq2.dequeue();
    // cout << pq2.toString();
    // cout << "deque sixth value is: " << test5 << endl;
    // int test6 = pq2.dequeue();
    // cout << pq2.toString();
    // cout << "deque seventh value is: " << test6 << endl;
    // int test7 = pq2.dequeue();
    // cout << pq2.toString();
    // cout << "deque eight value is: " << test7 << endl;
    // int test8 = pq2.dequeue();
    // cout << pq2.toString();
    // cout << "deque ninth value is: " << test8 << endl;
    // int test9 = pq2.dequeue();
    // cout << "empty tree: " << test9 << endl;
    pq.clear();
    pq2.clear();
}

TEST(priorityqueue1, one) {
    map<int, vector<double> > map;

    int n = 9;
    double vals[] = {15.5, 16.5, 17.5, 6.5, 7.5, 8.5, 9.5, 2.5, 1.5};
    int prs[] = {2, 1, 3, 1, 2, 2, 2, 3, 3};

    priorityqueue<double> pq;
    priorityqueue<double> pq2;

    for (int i = 0; i < n; i++) {
        pq.enqueue(vals[i], prs[i]);
        map[prs[i]].push_back(vals[i]);
    }
    pq2 = pq;

    EXPECT_EQ(pq.Size(), 9);
    EXPECT_EQ(pq2.Size(), 9);
    stringstream ss;

    for (auto e: map) { 
        int priority = e.first;
        vector <double> values = e.second;
        for (size_t j = 0; j < values.size(); j++){
            ss << priority << " value: " << values[j] << endl;
        }
    }
    pq.toString();
    EXPECT_EQ(pq.toString(), ss.str());
    EXPECT_EQ(pq2.toString(), ss.str());
    
    pq.begin();

    double test = pq2.dequeue();
    EXPECT_EQ(test, 16.5);
    double test1 = pq2.dequeue();
    EXPECT_EQ(test1, 6.5);

    pq.clear();
    pq2.clear();
}

TEST(priorityqueue2, one) {
    map<int, vector<string> > map;

    int n = 9;
    string vals[] = {"a", "b", "c", "d", "e", "f", "g", "h", "i"};
    int prs[] = {2, 1, 3, 1, 2, 2, 2, 3, 3};

    priorityqueue<string> pq;
    priorityqueue<string> pq2;

    for (int i = 0; i < n; i++) {
        pq.enqueue(vals[i], prs[i]);
        map[prs[i]].push_back(vals[i]);
    }
    pq2 = pq;

    EXPECT_EQ(pq.Size(), 9);
    EXPECT_EQ(pq2.Size(), 9);
    stringstream ss;

    for (auto e: map) { 
        int priority = e.first;
        vector <string> values = e.second;
        for (size_t j = 0; j < values.size(); j++){
            ss << priority << " value: " << values[j] << endl;
        }
    }
    pq.toString();
    EXPECT_EQ(pq.toString(), ss.str());
    EXPECT_EQ(pq2.toString(), ss.str());
    
    pq.begin();

    string test = pq2.dequeue();
    EXPECT_EQ(test, "b");
    string test1 = pq2.dequeue();
    EXPECT_EQ(test1, "d");

    pq.clear();
    pq2.clear();
}

TEST(priorityqueue3, one) {
    map<int, vector<double> > map;

    int n = 9;
    double vals[] = {3.55, 4.48, 9.42, 8.43, 6.34, 4.12, 7.53, 8.43, 9.54};
    int prs[] = {2, 1, 3, 1, 2, 2, 2, 3, 3};

    priorityqueue<double> pq;
    priorityqueue<double> pq2;

    for (int i = 0; i < n; i++) {
        pq.enqueue(vals[i], prs[i]);
        map[prs[i]].push_back(vals[i]);
    }
    pq2 = pq;

    EXPECT_EQ(pq.Size(), 9);
    EXPECT_EQ(pq2.Size(), 9);
    stringstream ss;

    for (auto e: map) { 
        int priority = e.first;
        vector <double> values = e.second;
        for (size_t j = 0; j < values.size(); j++){
            ss << priority << " value: " << values[j] << endl;
        }
    }
    pq.toString();
    EXPECT_EQ(pq.toString(), ss.str());
    EXPECT_EQ(pq2.toString(), ss.str());
    
    pq.begin();

    double test = pq2.dequeue();
    EXPECT_EQ(test, 4.48);
    double test1 = pq2.dequeue();
    EXPECT_EQ(test1, 8.43);

    pq.clear();
    pq2.clear();
}

TEST(priorityqueue4, one) {
    map<int, vector<string> > map;

    int n = 9;
    string vals[] = {"a", "b", "c", "d", "e", "f", "g", "h", "i"};
    int prs[] = {1, 1, 1, 1, 2, 2, 2, 2, 2};

    priorityqueue<string> pq;
    priorityqueue<string> pq2;

    for (int i = 0; i < n; i++) {
        pq.enqueue(vals[i], prs[i]);
        map[prs[i]].push_back(vals[i]);
    }
    pq2 = pq;

    EXPECT_EQ(pq.Size(), 9);
    EXPECT_EQ(pq2.Size(), 9);
    stringstream ss;

    for (auto e: map) { 
        int priority = e.first;
        vector <string> values = e.second;
        for (size_t j = 0; j < values.size(); j++){
            ss << priority << " value: " << values[j] << endl;
        }
    }
    pq.toString();
    EXPECT_EQ(pq.toString(), ss.str());
    EXPECT_EQ(pq2.toString(), ss.str());
    
    pq.begin();

    string test = pq2.dequeue();
    EXPECT_EQ(test, "a");
    string test1 = pq2.dequeue();
    EXPECT_EQ(test1, "b");

    pq.clear();
    pq2.clear();
}

TEST(priorityqueue5, one) {
    map<int, vector<string> > map;

    int n = 4;
    string vals[] = {"a", "b", "c", "d"};
    int prs[] = {1, 1, 1, 1};

    priorityqueue<string> pq;
    priorityqueue<string> pq2;

    for (int i = 0; i < n; i++) {
        pq.enqueue(vals[i], prs[i]);
        map[prs[i]].push_back(vals[i]);
    }
    pq2 = pq;

    EXPECT_EQ(pq.Size(), 4);
    EXPECT_EQ(pq2.Size(), 4);
    stringstream ss;

    for (auto e: map) { 
        int priority = e.first;
        vector <string> values = e.second;
        for (size_t j = 0; j < values.size(); j++){
            ss << priority << " value: " << values[j] << endl;
        }
    }
    pq.toString();
    EXPECT_EQ(pq.toString(), ss.str());
    EXPECT_EQ(pq2.toString(), ss.str());
    
    pq.begin();

    string test = pq2.dequeue();
    EXPECT_EQ(test, "a");
    string test1 = pq2.dequeue();
    EXPECT_EQ(test1, "b");

    pq.clear();
    pq2.clear();
}

TEST(priorityqueue6, one) {
    map<int, vector<string> > map;

    int n = 9;
    string vals[] = {"a", "b", "c", "d", "e", "f", "g", "two", "one"};
    int prs[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};

    priorityqueue<string> pq;
    priorityqueue<string> pq2;

    for (int i = 0; i < n; i++) {
        pq.enqueue(vals[i], prs[i]);
        map[prs[i]].push_back(vals[i]);
    }
    pq2 = pq;

    EXPECT_EQ(pq.Size(), 9);
    EXPECT_EQ(pq2.Size(), 9);
    stringstream ss;

    for (auto e: map) { 
        int priority = e.first;
        vector <string> values = e.second;
        for (size_t j = 0; j < values.size(); j++){
            ss << priority << " value: " << values[j] << endl;
        }
    }
    pq.toString();
    EXPECT_EQ(pq.toString(), ss.str());
    EXPECT_EQ(pq2.toString(), ss.str());
    
    pq.begin();

    string test = pq2.dequeue();
    EXPECT_EQ(test, "one");
    string test1 = pq2.dequeue();
    EXPECT_EQ(test1, "two");

    pq.clear();
    pq2.clear();
}

TEST(priorityqueue7, one) {
    map<int, vector<string> > map;

    int n = 9;
    string vals[] = {"these", "strings", "are", "now", "longer", "than", "one",
    "character", "test"};
    int prs[] = {1, 1, 1, 1, 2, 2, 2, 2, 2};

    priorityqueue<string> pq;
    priorityqueue<string> pq2;

    for (int i = 0; i < n; i++) {
        pq.enqueue(vals[i], prs[i]);
        map[prs[i]].push_back(vals[i]);
    }
    pq2 = pq;

    EXPECT_EQ(pq.Size(), 9);
    EXPECT_EQ(pq2.Size(), 9);
    stringstream ss;

    for (auto e: map) { 
        int priority = e.first;
        vector <string> values = e.second;
        for (size_t j = 0; j < values.size(); j++){
            ss << priority << " value: " << values[j] << endl;
        }
    }
    pq.toString();
    EXPECT_EQ(pq.toString(), ss.str());
    EXPECT_EQ(pq2.toString(), ss.str());
    
    pq.begin();

    string test = pq2.dequeue();
    EXPECT_EQ(test, "these");
    string test1 = pq2.dequeue();
    EXPECT_EQ(test1, "strings");

    pq.clear();
    pq2.clear();
}

TEST(priorityqueue8, one) {
    map<int, vector<int> > map;

    int n = 9;
    int vals[] = {28934792, 8239048, 893420, 319283120, 843902, 8492308,
    8924308, 4839202, 8239404};
    int prs[] = {1, 1, 3, 3, 2, 2, 2, 2, 2};

    priorityqueue<int> pq;
    priorityqueue<int> pq2;

    for (int i = 0; i < n; i++) {
        pq.enqueue(vals[i], prs[i]);
        map[prs[i]].push_back(vals[i]);
    }
    pq2 = pq;

    EXPECT_EQ(pq.Size(), 9);
    EXPECT_EQ(pq2.Size(), 9);
    stringstream ss;

    for (auto e: map) { 
        int priority = e.first;
        vector <int> values = e.second;
        for (size_t j = 0; j < values.size(); j++){
            ss << priority << " value: " << values[j] << endl;
        }
    }
    pq.toString();
    EXPECT_EQ(pq.toString(), ss.str());
    EXPECT_EQ(pq2.toString(), ss.str());
    
    pq.begin();

    int test = pq2.dequeue();
    EXPECT_EQ(test, 28934792);
    int test1 = pq2.dequeue();
    EXPECT_EQ(test1, 8239048);

    pq.clear();
    pq2.clear();
}

TEST(priorityqueue9, one) {
    map<int, vector<int> > map;

    int n = 1;
    int vals[] = {28934792};
    int prs[] = {1};

    priorityqueue<int> pq;
    priorityqueue<int> pq2;

    for (int i = 0; i < n; i++) {
        pq.enqueue(vals[i], prs[i]);
        map[prs[i]].push_back(vals[i]);
    }
    pq2 = pq;

    EXPECT_EQ(pq.Size(), 1);
    EXPECT_EQ(pq2.Size(), 1);
    stringstream ss;

    for (auto e: map) { 
        int priority = e.first;
        vector <int> values = e.second;
        for (size_t j = 0; j < values.size(); j++){
            ss << priority << " value: " << values[j] << endl;
        }
    }
    pq.toString();
    EXPECT_EQ(pq.toString(), ss.str());
    EXPECT_EQ(pq2.toString(), ss.str());
    
    pq.begin();
    int test = pq2.dequeue();
    EXPECT_EQ(test, 28934792);
    int test1 = pq2.dequeue();
    EXPECT_EQ(pq2.toString(), "");

    pq.clear();
    pq2.clear();
}

TEST(priorityqueue10, one) {
    map<int, vector<string> > map;

    int n = 1;
    string vals[] = {"hello"};
    int prs[] = {1};

    priorityqueue<string> pq;
    priorityqueue<string> pq2;

    for (int i = 0; i < n; i++) {
        pq.enqueue(vals[i], prs[i]);
        map[prs[i]].push_back(vals[i]);
    }
    pq2 = pq;

    EXPECT_EQ(pq.Size(), 1);
    EXPECT_EQ(pq2.Size(), 1);
    stringstream ss;

    for (auto e: map) { 
        int priority = e.first;
        vector <string> values = e.second;
        for (size_t j = 0; j < values.size(); j++){
            ss << priority << " value: " << values[j] << endl;
        }
    }
    pq.toString();
    EXPECT_EQ(pq.toString(), ss.str());
    EXPECT_EQ(pq2.toString(), ss.str());
    
    pq.begin();
    string test = pq2.dequeue();
    EXPECT_EQ(test, "hello");
    string test1 = pq2.dequeue();
    EXPECT_EQ(pq2.toString(), "");

    pq.clear();
    pq2.clear();
}

TEST(priorityqueue11, one) {
    map<int, vector<char> > map;

    int n = 1;
    char vals[] = {'h'};
    int prs[] = {1};

    priorityqueue<char> pq;
    priorityqueue<char> pq2;

    for (int i = 0; i < n; i++) {
        pq.enqueue(vals[i], prs[i]);
        map[prs[i]].push_back(vals[i]);
    }
    pq2 = pq;

    EXPECT_EQ(pq.Size(), 1);
    EXPECT_EQ(pq2.Size(), 1);
    stringstream ss;

    for (auto e: map) { 
        int priority = e.first;
        vector <char> values = e.second;
        for (size_t j = 0; j < values.size(); j++){
            ss << priority << " value: " << values[j] << endl;
        }
    }
    pq.toString();
    EXPECT_EQ(pq.toString(), ss.str());
    EXPECT_EQ(pq2.toString(), ss.str());
    
    pq.begin();
    char test = pq2.dequeue();
    EXPECT_EQ(test, 'h');
    char test1 = pq2.dequeue();
    EXPECT_EQ(pq2.toString(), "");

    pq.clear();
    pq2.clear();
}

TEST(priorityqueue12, one) {
    map<int, vector<double> > map;

    int n = 1;
    double vals[] = {5.234234};
    int prs[] = {1};

    priorityqueue<double> pq;
    priorityqueue<double> pq2;

    for (int i = 0; i < n; i++) {
        pq.enqueue(vals[i], prs[i]);
        map[prs[i]].push_back(vals[i]);
    }
    pq2 = pq;

    EXPECT_EQ(pq.Size(), 1);
    EXPECT_EQ(pq2.Size(), 1);
    stringstream ss;

    for (auto e: map) { 
        int priority = e.first;
        vector <double> values = e.second;
        for (size_t j = 0; j < values.size(); j++){
            ss << priority << " value: " << values[j] << endl;
        }
    }
    pq.toString();
    EXPECT_EQ(pq.toString(), ss.str());
    EXPECT_EQ(pq2.toString(), ss.str());
    
    pq.begin();
    double test = pq2.dequeue();
    EXPECT_EQ(test, 5.234234);
    double test1 = pq2.dequeue();
    EXPECT_EQ(pq2.toString(), "");

    pq.clear();
    pq2.clear();
}

TEST(priorityqueue13, one) {
    map<int, vector<string> > map;

    int n = 9;
    string vals[] = {"some", "strings", "that", "are", "just", "place",
    "holders", "to", "test"};
    int prs[] = {2, 1, 1, 1, 1, 1, 1, 1, 1};

    priorityqueue<string> pq;
    priorityqueue<string> pq2;

    for (int i = 0; i < n; i++) {
        pq.enqueue(vals[i], prs[i]);
        map[prs[i]].push_back(vals[i]);
    }
    pq2 = pq;

    EXPECT_EQ(pq.Size(), 9);
    EXPECT_EQ(pq2.Size(), 9);
    stringstream ss;

    for (auto e: map) { 
        int priority = e.first;
        vector <string> values = e.second;
        for (size_t j = 0; j < values.size(); j++){
            ss << priority << " value: " << values[j] << endl;
        }
    }
    pq.toString();
    EXPECT_EQ(pq.toString(), ss.str());
    EXPECT_EQ(pq2.toString(), ss.str());
    
    pq.begin();

    string test = pq2.dequeue();
    EXPECT_EQ(test, "strings");
    string test1 = pq2.dequeue();
    EXPECT_EQ(test1, "that");

    pq.clear();
    pq2.clear();
}

TEST(priorityqueue14, one) {
    map<int, vector<string> > map;

    int n = 9;
    string vals[] = {"some", "strings", "that", "are", "just", "place",
    "holders", "to", "test"};
    int prs[] = {2, 1, 1, 1, 1, 1, 1, 1, 1};

    priorityqueue<string> pq;
    priorityqueue<string> pq2;

    for (int i = 0; i < n; i++) {
        pq.enqueue(vals[i], prs[i]);
        map[prs[i]].push_back(vals[i]);
    }
    pq2 = pq;

    EXPECT_EQ(pq.Size(), 9);
    EXPECT_EQ(pq2.Size(), 9);
    stringstream ss;

    for (auto e: map) { 
        int priority = e.first;
        vector <string> values = e.second;
        for (size_t j = 0; j < values.size(); j++){
            ss << priority << " value: " << values[j] << endl;
        }
    }
    pq.toString();
    EXPECT_EQ(pq.toString(), ss.str());
    EXPECT_EQ(pq2.toString(), ss.str());
    
    pq.begin();

    string test = pq2.dequeue();
    EXPECT_EQ(test, "strings");
    string test1 = pq2.dequeue();
    EXPECT_EQ(test1, "that");

    pq.clear();
    pq2.clear();
}

TEST(priorityqueue15, one) {
    map<int, vector<int> > map;

    int n = 9;
    int vals[] = {15, 14, 13, 12, 11, 10, 9, 8, 7};
    int prs[] = {15, 14, 13, 12, 11, 10, 9, 8, 7};

    priorityqueue<int> pq;
    priorityqueue<int> pq2;

    for (int i = 0; i < n; i++) {
        pq.enqueue(vals[i], prs[i]);
        map[prs[i]].push_back(vals[i]);
    }
    pq2 = pq;

    EXPECT_EQ(pq.Size(), 9);
    EXPECT_EQ(pq2.Size(), 9);
    stringstream ss;

    for (auto e: map) { 
        int priority = e.first;
        vector <int> values = e.second;
        for (size_t j = 0; j < values.size(); j++){
            ss << priority << " value: " << values[j] << endl;
        }
    }
    pq.toString();
    EXPECT_EQ(pq.toString(), ss.str());
    EXPECT_EQ(pq2.toString(), ss.str());
    
    pq.begin();

    int test = pq2.dequeue();
    EXPECT_EQ(test, 7);
    int test1 = pq2.dequeue();
    EXPECT_EQ(test1, 8);

    pq.clear();
    pq2.clear();
}

TEST(priorityqueue16, one) {
    map<int, vector<char> > map;

    int n = 9;
    char vals[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i'};
    char prs[] = {15, 7, 14, 8, 9, 10, 11, 13, 12};

    priorityqueue<char> pq;
    priorityqueue<char> pq2;

    for (int i = 0; i < n; i++) {
        pq.enqueue(vals[i], prs[i]);
        map[prs[i]].push_back(vals[i]);
    }
    pq2 = pq;

    EXPECT_EQ(pq.Size(), 9);
    EXPECT_EQ(pq2.Size(), 9);
    stringstream ss;

    for (auto e: map) { 
        int priority = e.first;
        vector <char> values = e.second;
        for (size_t j = 0; j < values.size(); j++){
            ss << priority << " value: " << values[j] << endl;
        }
    }
    pq.toString();
    EXPECT_EQ(pq.toString(), ss.str());
    EXPECT_EQ(pq2.toString(), ss.str());
    
    pq.begin();

    char test = pq2.dequeue();
    EXPECT_EQ(test, 'b');
    char test1 = pq2.dequeue();
    EXPECT_EQ(test1, 'd');

    pq.clear();
    pq2.clear();
}

TEST(priorityqueue17, one) {
    map<int, vector<string> > map;

    int n = 9;
    string vals[] = {"a", "b", "c", "d", "e", "f", "g", "h", "i"};
    int prs[] = {15, 7, 14, 8, 9, 10, 11, 13, 12};

    priorityqueue<string> pq;
    priorityqueue<string> pq2;

    for (int i = 0; i < n; i++) {
        pq.enqueue(vals[i], prs[i]);
        map[prs[i]].push_back(vals[i]);
    }
    pq2 = pq;

    EXPECT_EQ(pq.Size(), 9);
    EXPECT_EQ(pq2.Size(), 9);
    stringstream ss;

    for (auto e: map) { 
        int priority = e.first;
        vector <string> values = e.second;
        for (size_t j = 0; j < values.size(); j++){
            ss << priority << " value: " << values[j] << endl;
        }
    }
    pq.toString();
    EXPECT_EQ(pq.toString(), ss.str());
    EXPECT_EQ(pq2.toString(), ss.str());
    
    pq.begin();

    string test = pq2.dequeue();
    EXPECT_EQ(test, "b");
    string test1 = pq2.dequeue();
    EXPECT_EQ(test1, "d");

    pq.clear();
    pq2.clear();
}

TEST(priorityqueue18, one) {
    map<int, vector<string> > map;

    int n = 9;
    string vals[] = {"a", "b", "c", "d", "e", "f", "g", "h", "i"};
    int prs[] = {9, 8, 10, 7, 15, 11, 12, 14, 13};

    priorityqueue<string> pq;
    priorityqueue<string> pq2;

    for (int i = 0; i < n; i++) {
        pq.enqueue(vals[i], prs[i]);
        map[prs[i]].push_back(vals[i]);
    }
    pq2 = pq;

    EXPECT_EQ(pq.Size(), 9);
    EXPECT_EQ(pq2.Size(), 9);
    stringstream ss;

    for (auto e: map) { 
        int priority = e.first;
        vector <string> values = e.second;
        for (size_t j = 0; j < values.size(); j++){
            ss << priority << " value: " << values[j] << endl;
        }
    }
    pq.toString();
    EXPECT_EQ(pq.toString(), ss.str());
    EXPECT_EQ(pq2.toString(), ss.str());
    
    pq.begin();

    string test = pq2.dequeue();
    EXPECT_EQ(test, "d");
    string test1 = pq2.dequeue();
    EXPECT_EQ(test1, "b");

    pq.clear();
    pq2.clear();
}

TEST(priorityqueue19, one) {
    map<int, vector<double> > map;

    int n = 9;
    double vals[] = {43.23423, 32.342, 76.456, 12.123, 13.2432, 54.3241,
    87.432, 95.432, 56.125};
    int prs[] = {9, 8, 10, 7, 15, 11, 12, 14, 13};

    priorityqueue<double> pq;
    priorityqueue<double> pq2;

    for (int i = 0; i < n; i++) {
        pq.enqueue(vals[i], prs[i]);
        map[prs[i]].push_back(vals[i]);
    }
    pq2 = pq;

    EXPECT_EQ(pq.Size(), 9);
    EXPECT_EQ(pq2.Size(), 9);
    stringstream ss;

    for (auto e: map) { 
        int priority = e.first;
        vector <double> values = e.second;
        for (size_t j = 0; j < values.size(); j++){
            ss << priority << " value: " << values[j] << endl;
        }
    }
    pq.toString();
    EXPECT_EQ(pq.toString(), ss.str());
    EXPECT_EQ(pq2.toString(), ss.str());
    
    pq.begin();

    double test = pq2.dequeue();
    EXPECT_EQ(test, 12.123);
    double test1 = pq2.dequeue();
    EXPECT_EQ(test1, 32.342);

    pq.clear();
    pq2.clear();
}
// TO DO: write lots of tests here.
