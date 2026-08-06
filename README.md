## PRACTICAL NUMBER 1 

SUMMARY = This C++ program compares the performance of five popular sorting algorithms: **Bubble Sort, Selection Sort, Insertion Sort, Merge Sort, and Quick Sort**. It generates an array of 1,000 random integers and creates a copy of the same data for each algorithm to ensure a fair comparison. Each sorting algorithm is implemented in a separate function, with Merge Sort and Quick Sort using recursive helper functions (`merge()` and `partition()`) to perform their operations efficiently.

The program measures the execution time of each sorting algorithm using the C++ `<chrono>` library. A helper function named `runBenchmark()` records the start and end times, calculates the elapsed time in microseconds, and displays the result. This allows users to compare the efficiency of different sorting techniques under the same conditions.

Overall, the program demonstrates the practical differences in sorting performance. Simpler algorithms such as Bubble Sort, Selection Sort, and Insertion Sort generally require more time for larger datasets due to their quadratic time complexity, while Merge Sort and Quick Sort are significantly faster because they use more efficient divide-and-conquer strategies with an average time complexity of **O(n log n)**.

COCLUSION = This program successfully implements and benchmarks five different sorting algorithms: Bubble Sort, Selection Sort, Insertion Sort, Merge Sort, and Quick Sort. By measuring the execution time of each algorithm on the same randomly generated dataset, it provides a clear comparison of their performance. The results show that Bubble Sort, Selection Sort, and Insertion Sort are slower for larger arrays because of their **O(n²)** time complexity. In contrast, Merge Sort and Quick Sort perform much faster due to their **O(n log n)** average time complexity, making them more suitable for handling large datasets. Overall, the program demonstrates the importance of selecting an efficient sorting algorithm based on the size and requirements of the data, highlighting why advanced algorithms are preferred in real-world applications.

## PRACTICAL NUMBER 2

 Summary =
This C++ program demonstrates and compares the performance of Linear Search and Binary Search algorithms. It creates a sorted vector of 100,000 elements containing values from 1 to 100,000. The user enters a number to search for, and the program searches for the element using both algorithms separately.
The Linear Search function checks each element one by one until the target is found or the end of the array is reached. The Binary Search function takes advantage of the sorted array by repeatedly dividing the search range in half, making it much faster for large datasets. The program also measures and displays the execution time of each search using the <chrono> library in microseconds, allowing a direct comparison of their performance.

Conclusion =
The program shows that Binary Search is significantly more efficient than Linear Search when working with sorted data. While Linear Search has a time complexity of O(n) because it may need to examine every element, Binary Search has a time complexity of O(log n) by reducing the search space by half in each step. The execution time comparison confirms that Binary Search performs much faster for large arrays. Therefore, Binary Search is the preferred choice for searching in sorted datasets, whereas Linear Search is more suitable for small or unsorted collections.

## PRACTICAL NUMBER 4

Summary =
This C++ program calculates the factorial of a non-negative integer using two different approaches: iterative and recursive. It accepts user input, validates that the number is non-negative, and computes the factorial using both methods. The program also measures and compares the execution time of each approach using the chrono library with nanosecond precision. The iterative method uses a loop and requires constant extra memory, while the recursive method repeatedly calls itself until the base case is reached, consuming additional memory due to the function call stack.

Conclusion =
The program demonstrates that both iterative and recursive methods produce the same factorial result for a valid input. However, the iterative approach is generally more efficient because it uses O(1) space and avoids the overhead of recursive function calls. The recursive approach is simpler and easier to understand conceptually but requires O(n) space due to recursion. Overall, this program effectively compares the performance and memory usage of both techniques while illustrating the concepts of algorithm complexity and execution time measurement.
