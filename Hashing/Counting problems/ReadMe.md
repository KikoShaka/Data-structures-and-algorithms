**Counting with Hash Maps - A Common Pattern**

# Overview

Counting is a prevalent pattern in programming, and hash maps provide an efficient and flexible way to implement counting operations. This involves mapping keys to integers, allowing us to track the frequency of occurrences for various elements. Hash maps are particularly useful when the goal is to count occurrences and keep a record of how many times each element appears.

## How to Count with Hash Maps

1. **Choose Appropriate Keys:**
   - Identify the elements you want to count, and choose them as keys in the hash map.

2. **Initialize the Hash Map:**
   - Create a hash map where the keys are the elements you're counting, and the values are integers to store the frequency.

3. **Update Counts:**
   - Iterate through the data set, and for each element, update its count in the hash map.
   - If the key is not present, add it to the hash map with a count of 1.
   - If the key is already present, increment its count.

4. **Retrieve Counts:**
   - If needed, you can later retrieve the count of a specific element by querying the hash map.

## Example Usage

Let's consider a scenario where you need to count the occurrences of words in a text document.

```cpp
#include <iostream>
#include <unordered_map>
#include <sstream>

int main() {
    std::unordered_map<std::string, int> wordCountMap;
    std::string text;

    // Assume 'text' contains the input text document.
    // Split the text into words.
    std::istringstream iss(text);
    std::string word;

    while (iss >> word) {
        // Update the word count in the hash map.
        wordCountMap[word]++;
    }

    // Print the word counts.
    for (const auto& entry : wordCountMap) {
        std::cout << "Word: " << entry.first << ", Count: " << entry.second << std::endl;
    }

    return 0;
}
