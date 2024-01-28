**README.md**

# Hashing in C++

Welcome to the Hashing in C++ folder within the Data Structures and Algorithms (DSA) Repository! This section is dedicated to exploring and implementing various hashing algorithms using the C++ programming language.

## Introduction

Hashing is a fundamental concept in computer science, providing efficient data retrieval through the transformation of data into fixed-size values. In this folder, we focus on implementing hashing algorithms in C++.

## Using C++ Standard Library (std::unordered_map)

C++ provides a powerful standard library container for hashing known as `std::unordered_map`. It is a key-value pair storage that allows for efficient lookups.

Here's a quick guide on using `std::unordered_map`:

```cpp
// Declare an unordered_map. Specify the data type of the keys and values.
std::unordered_map<int, int> hashMap;

// Initialize with key-value pairs.
std::unordered_map<int, int> hashMap = {{1, 2}, {5, 3}, {7, 2}};

// Check if a key exists.
if (hashMap.find(1) != hashMap.end()) {
    // Key exists.
    // Accessing a value given a key: use square brackets, similar to an array.
    int value = hashMap[1];
    std::cout << "Value for key 1: " << value << std::endl;
} else {
    // Key does not exist.
    std::cout << "Key 1 not found." << std::endl;
}

// Iterate over the key-value pairs.
for (const auto& pair : hashMap) {
    std::cout << "Key: " << pair.first << ", Value: " << pair.second << std::endl;
}

// Add or update a key.
hashMap[5] = 6;

// Delete a key.
hashMap.erase(7);

// Get the size of the unordered_map.
std::cout << "Size of the unordered_map: " << hashMap.size() << std::endl;
