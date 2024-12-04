To avoid the issues associated with `std::vector<bool>`, consider using `std::vector<char>` (if you need to represent a single bit per element) or `std::vector<int>` if you need to store boolean values efficiently. If memory is a strong concern, consider other bitset libraries or custom implementations for better control.

```cpp
#include <vector>
#include <iostream>

int main() {
  //Better solution using std::vector<char>
  std::vector<char> boolVec(10);
  boolVec[0] = 1; // true
  std::cout << (boolVec[0] != 0) << std::endl; // Output true efficiently

  //or use std::vector<int> if you need more than a bit 

  return 0;
}
```