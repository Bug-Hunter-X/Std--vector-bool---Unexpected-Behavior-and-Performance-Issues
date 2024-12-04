# std::vector<bool> Pitfalls in C++

This repository demonstrates the potential performance and behavioral issues associated with using `std::vector<bool>` in C++.  `std::vector<bool>` is a specialized container that deviates from the standard `std::vector` implementation, often resulting in surprising and less efficient code.

The `bug.cpp` file showcases a simple example of how operations on `std::vector<bool>` can be slower than anticipated and can lead to iterator issues.  The `bugSolution.cpp` provides an alternative solution using `std::vector<char>` or `std::vector<int>` for better performance.

**Key issues with std::vector<bool>:**

* Non-standard memory management.
* Slower element access compared to `std::vector<int>` or `std::vector<char>`. 
* Less interoperability with other code and libraries.
* Different iterator behavior.