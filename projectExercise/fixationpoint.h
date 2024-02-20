/* Author: Yvan Masnel Tefiang
 * Date: February 9, 2024
 * Description: Assignment 1 - Identifying Fixation Points for Eye Trackers
 *
 * Steps to Run the Codes;
 *
 * - cmake .
 * - make
 * - cd bin/
 * - ./practiceExercise
 *
 *
 * Testing Strategy:
 *
 * - Tested on Mac Os and Windows OS using G++ Compiler
 * - I used two files namely; input.txt and output.txt to check whether the program runs accurately
 * - Also, covered a range of test cases, including standard and edge scenarios.
 *
 *
 * Functionality:
 *
 * This program reads scanpaths from input.txt, processes fixation points, and generates an output.txt
 with formatted fixation point data. It ensures that there are no duplicate fixation points.
 *
 *
 * Format of Input and Output:
 *
 * - Input Format:
 * The first line contains an integer N (1 <= N <= 10) indicating the number of test cases.
 * Each test case consists of fixation points with three numbers: fixation point number, x coordinate, and y coordinate.
 * The end of each set is marked by (-1, -1).
 * Fixation points are assumed to be valid with coordinates in the range 0 <= x, y <= 2000.
 * - Output Format:
 * The program outputs my Andrew ID (ytefiang) at the beginning.
 * For each test case, it writes a sequence of three numbers: unique fixation point identification number,
   x coordinate, and y coordinate.
 * No terminating fixation point is included, and there are no duplicate fixation points.
 * Fixation points are listed in ascending order by identification number.
 * Each list is terminated by a line of dashes.
 *
 *
 * Solution Strategy:
 * 1. It figures out how many sets of eye-tracking data there are.
 * 2. For each scanpath:
 *    a) Read fixation points until (-1, -1) is encountered.
 *    b) Process fixation points and remove duplicates.
 *    c) Write formatted fixation points to output.txt.
 * 3. Close input and output files.
 *
 * Pseudo Code for Solution Strategy;
 *
 * For each scanpath in input file:
 *   Initialize an empty set
 *   Read fixation points until (-1, -1):
 *       Read fixation point (number, x, y) from input
 *       If (x, y) is not (-1, -1), add to the set
 *  Write unique fixation points to output file
 *  Write line of dashes as scanpath termination in output file
 *
 *
 *
 * Testing Approach:
 * - I tested it with a small set of data to see if it works for simple cases.
 * - I also tried it with a large set to see if it's good with a lot of information.
 * - I checked to make sure it handles unusual situations well, like when there's no data.
 *
 *
 * Complexity Analysis;
 *
 * The algorithm has a complexity (O(N^2)), indicating that its running time grows with the number of scanpaths (N).
 * The algorithm's structure includes nested operations or loops.
 * For example, line 29 of main.cpp contains a for loop that is nested into another for loop. This explains the time
 * complexity of (O(N^2))
 *
 *
 * How Hard the Program Thinks:
 * - It takes a bit of time and memory to do its thing. The more sets of data and points there are, the longer it takes.
 */


#ifndef FIXATIONPOINT_H
#define FIXATIONPOINT_H

struct FixationPoint {
    int number;
    int x;
    int y;
};

#endif // FIXATIONPOINT_H
