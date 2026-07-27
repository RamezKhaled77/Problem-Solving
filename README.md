# C++ Standard Template Library (STL) Data Structures Cheatsheet

A comprehensive guide to core C++ STL data structures, tailored for competitive programming, quick revision, and technical reference.


## 📌 Table of Contents 
1. [Array (`std::array`)](#1-array-stdarray)
2. [Vector (`std::vector`)](#2-vector-stdvector) 
3. [Pair (`std::pair`)](#3-pair-stdpair) 
4. [Stack (`std::stack`)](#4-stack-stdstack)
5. [Queue (`std::queue`)](#5-queue-stdqueue) 
6. [Deque (`std::deque`)](#6-deque-stddeque) 
7. [Set (`std::set`)](#7-set-stdset)
8. [Map (`std::map`)](#8-map-stdmap) 
9. [List (`std::list`)](#9-list-stdlist)    
 10. [Data Structures Comparison Matrix](#10-data-structures-comparison-matrix) 
 11. [Essential STL Algorithms](#11-essential-stl-algorithms)
    

## 1. Array (`std::array`)

A fixed-size wrapper around a contiguous C-style array. Size must be known at compile time.

-   **Characteristics:** Fixed size, stored on the stack (fast allocation), contiguous memory layout.
    
-   **Pros:** Zero overhead compared to C-arrays; supports iterators, size querying, and boundary checking.
    
-   **Cons:** Cannot be resized dynamically during runtime.
    
-   **Best Used For:** When the maximum size of elements is fixed and known beforehand.
    

### Syntax & Operations

    #include <array>
    
    // Declaration: std::array<Type, Size>
    std::array<int, 5> arr = {10, 20, 30, 40, 50};
    
    // Access elements
    int x = arr[0];       // No bounds checking (Fast: O(1))
    int y = arr.at(1);    // Bounds checking (Throws out_of_range: O(1))
    int first = arr.front();
    int last = arr.back();
    
    // Size operations
    size_t sz = arr.size(); // Returns 5
    bool empty = arr.empty();
    
    // Modifiers
    arr.fill(0); // Fills entire array with 0
## 2. Vector (`std::vector`)

A dynamic array that automatically resizes itself when elements are added or removed.

-   **Characteristics:** Dynamic size, stored on the heap, contiguous memory.
    
-   **Pros:** Fast random access $O(1)$, fast insertion/deletion at the end $O(1)$ amortized.
    
-   **Cons:** Slow insertion/deletion in the middle or front $O(N)$ due to element shifting.
    
-   **Best Used For:** Default go-to container for sequential data and dynamic lists.
    

### Syntax & Operations

    #include <vector>
    
    // Declarations
    std::vector<int> vec;             // Empty vector
    std::vector<int> vec2(5, 100);    // Vector of size 5, filled with 100
    std::vector<int> vec3 = {1, 2, 3};
    
    // Modifiers
    vec.push_back(10);    // Insert at back: O(1)
    vec.pop_back();       // Remove from back: O(1)
    vec.insert(vec.begin() + 1, 25); // Insert at index 1: O(N)
    vec.erase(vec.begin() + 1);      // Erase at index 1: O(N)
    vec.clear();          // Remove all elements
    
    // Access & Capacity
    int val = vec[0];     // Access element: O(1)
    int sz = vec.size();  // Current number of elements
    vec.reserve(1000);    // Pre-allocate memory to avoid reallocations
## 3. Pair (`std::pair`)

A simple structure that couples together two heterogeneous objects (can be of different types).

-   **Characteristics:** Lightweight container holding two values (`first` and `second`).
    
-   **Pros:** Built-in comparison operators (`<`, `==`), making it sortable inside vectors/sets.
    
-   **Cons:** Limited to holding exactly two elements.
    
-   **Best Used For:** Storing key-value pairs, 2D coordinates $(x, y)$, or weighted edges in graphs $(weight, vertex)$.
    

### Syntax & Operations


```
#include <utility> // Included automatically by <vector> or <iostream>

// Declaration
std::pair<int, std::string> p1 = {1, "Alexandria"};
std::pair<int, int> p2 = std::make_pair(10, 20);

// Access members
int id = p1.first;
std::string city = p1.second;

// Comparison (Compares 'first' first, then 'second')
if (p1 < p2) { /* ... */ }

```

## 4. Stack (`std::stack`)

A Container Adaptor operating under the **LIFO** (Last In, First Out) principle.

-   **Characteristics:** Elements are pushed and popped from a single end (top).
    
-   **Pros:** Enforces strict LIFO ordering; prevents arbitrary modifications.
    
-   **Cons:** No random access; cannot iterate over elements.
    
-   **Best Used For:** Parenthesis matching, function call management, backtracking, and DFS.
    

### Syntax & Operations


```
#include <stack>

std::stack<int> st;

st.push(10);       // Add element to top: O(1)
st.push(20);
st.pop();          // Remove top element (returns void): O(1)

int top_val = st.top(); // Read top element: O(1)
bool isEmpty = st.empty(); // Check if empty
size_t sz = st.size();    // Get size

```

## 5. Queue (`std::queue`)

A Container Adaptor operating under the **FIFO** (First In, First Out) principle.

-   **Characteristics:** Elements are inserted at the back and removed from the front.
    
-   **Pros:** Enforces strict FIFO order for sequential processing.
    
-   **Cons:** No random access; cannot iterate over elements.
    
-   **Best Used For:** Breadth-First Search (BFS), task scheduling, and buffering.
    

### Syntax & Operations

```
#include <queue>

std::queue<int> q;

q.push(10);        // Insert at back: O(1)
q.push(20);
q.pop();           // Remove from front: O(1)

int front_val = q.front(); // Access front element: O(1)
int back_val = q.back();   // Access last inserted element: O(1)
bool isEmpty = q.empty();

```

## 6. Deque (`std::deque`)

Double-ended queue that allows fast insertion and deletion at **both** ends.

-   **Characteristics:** Non-contiguous chunked memory buffers; supports random access indexing.
    
-   **Pros:** $O(1)$ insertions/deletions at both front and back; random access `[]`.
    
-   **Cons:** Slightly higher overhead than `vector`; non-contiguous memory blocks.
    
-   **Best Used For:** Sliding window algorithms, double-ended processing, or when `push_front` and `push_back` are both required.
    

### Syntax & Operations

```
#include <deque>

std::deque<int> dq;

dq.push_back(10);   // Insert at back: O(1)
dq.push_front(5);   // Insert at front: O(1)
dq.pop_back();      // Remove from back: O(1)
dq.pop_front();     // Remove from front: O(1)

int val = dq[0];    // Random access: O(1)
int front = dq.front();
int back = dq.back();

```

## 7. Set (`std::set`)

An associative container containing a sorted set of **unique** keys.

-   **Characteristics:** Implemented as a self-balancing Binary Search Tree (Red-Black Tree).
    
-   **Pros:** Automatically sorted, guarantees logarithmic operations $O(\log N)$, no duplicates.
    
-   **Cons:** No direct index access `[]`; extra memory overhead per node.
    
-   **Best Used For:** Eliminating duplicates, maintaining dynamically sorted data, fast lookups.
    

### Syntax & Operations

```
#include <set>

std::set<int> st;

st.insert(30);     // Insert element: O(log N)
st.insert(10);
st.insert(30);     // Duplicate ignored!

st.erase(10);      // Erase by value: O(log N)

// Search & Lower/Upper Bounds
auto it = st.find(30);  // Returns iterator to element, or st.end() if not found
bool exists = (st.count(30) > 0); // 1 if found, 0 if not

// Binary Search Methods
auto lb = st.lower_bound(20); // First element >= 20
auto ub = st.upper_bound(20); // First element > 20

```

## 8. Map (`std::map`)

An associative container containing sorted **key-value pairs** with unique keys.

-   **Characteristics:** Implemented as a self-balancing Binary Search Tree (Red-Black Tree). Keys are sorted automatically.
    
-   **Pros:** Fast key lookup in $O(\log N)$, keys sorted automatically, flexible indexing via `[]`.
    
-   **Cons:** `operator[]` creates a default entry if key does not exist; $O(\log N)$ overhead compared to hash tables.
    
-   **Best Used For:** Frequency counting, dictionary-like lookups, associating attributes with sorted keys.
    

### Syntax & Operations

```
#include <map>

std::map<std::string, int> mp;

// Insert / Update
mp["Alex"] = 100;         // O(log N)
mp.insert({"Cairo", 200});

// Search
if (mp.count("Alex")) {   // Check existence: O(log N)
    int val = mp["Alex"];
}

auto it = mp.find("Cairo"); // Returns iterator to key-value pair
if (it != mp.end()) {
    std::string key = it->first;
    int value = it->second;
}

mp.erase("Alex");         // Erase key: O(log N)

```

## 9. List (`std::list`)

A doubly-linked list allowing non-contiguous storage.

-   **Characteristics:** Nodes connected via forward and backward pointers.
    
-   **Pros:** $O(1)$ insertion and deletion at any known iterator position; efficient splicing.
    
-   **Cons:** No random access `[]` (must traverse sequentially $O(N)$); memory overhead per node.
    
-   **Best Used For:** Frequent insertions and deletions in the middle of sequences without shifting elements.
    

### Syntax & Operations

```
#include <list>

std::list<int> lst = {10, 20, 30};

lst.push_front(5);  // O(1)
lst.push_back(40);  // O(1)

// Insert/Erase at specific iterator
auto it = lst.begin();
std::advance(it, 2); // Move iterator to 3rd element: O(N)
lst.insert(it, 15);  // Insertion at iterator: O(1)
lst.erase(it);       // Erase at iterator: O(1)

lst.remove(20);     // Removes all elements equal to 20: O(N)

```

## 10. Data Structures Comparison Matrix

| **Container** |  **Underlying Structure** | **Random Access** | **Access Time** | **Insertion/Deletion (Ends)** | **Insertion/Deletion (Middle)** | **Search Time** |
| -- | -- | -- | --| --| --| --|
| **`array`** | Static Array | Yes (`[]`) | $O(1)$ | N/A | N/A |$O(N)$ |
| **`vector`** | Dynamic Array | Yes (`[]`) | $O(1)$ | $O(1)$ Back | $O(N)$ | $O(N)$ |
| **`deque`** | Chunked Buffers | Yes (`[]`) | $O(1)$ | $O(1)$ | Front/Back | $O(N)$ | $O(N)$ |
| **`list`**|Doubly Linked List|No|$O(N)$|$O(1)$ Front/Back|$O(1)$|at iterator|$O(N)$|
|**`stack`**|Adaptor (`deque`)|No|Top $O(1)$|$O(1)$ Top|N/A|N/A|**`queue`**|Adaptor (`deque`)|No|Front $O(1)$|$O(1)$|Front/Back|N/A|N/A|
|**`set`**|Red-Black Tree|No|N/A|$O(\log N)$|$O(\log N)$|$O(\log N)$|
|**`map`**|Red-Black Tree|Keys (`[]`)|$O(\log N)$|$O(\log N)$|$O(\log N)$|$O(\log N)$

## 11. Essential STL Algorithms

Common standard library algorithms used alongside containers (from `<algorithm>`):


```
#include <algorithm>
#include <vector>

std::vector<int> v = {4, 1, 3, 2, 5};

// 1. Sorting: O(N log N)
std::sort(v.begin(), v.end());                   // Ascending
std::sort(v.rbegin(), v.rend());                 // Descending

// 2. Binary Search (Requires sorted container)
bool found = std::binary_search(v.begin(), v.end(), 3); // O(log N)

// First element >= 3: O(log N)
auto lb = std::lower_bound(v.begin(), v.end(), 3); 

// First element > 3: O(log N)
auto ub = std::upper_bound(v.begin(), v.end(), 3); 

// Element Count = upper_bound - lower_bound
int count = ub - lb;

// 3. Min / Max / Reverse
int min_val = *std::min_element(v.begin(), v.end()); // O(N)
int max_val = *std::max_element(v.begin(), v.end()); // O(N)
std::reverse(v.begin(), v.end());                    // O(N)
```
