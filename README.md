# get_next_line

## Summary
```
This project is about programming a function that returns a line read from a file descriptor.
```
## About the project

```
You will understand how files are opened, read and closed in an OS and how they are interpreted by a programming
language for further analysis.
This task is crucial to understand for a future programmer since much of the time is based on manipulating files
for data management and persistence.
This project consists of coding a function that returns one line at a time from a text file.
```

## Usage

```make``` to compile the funtion without bonus

```make bonus``` to compile the funtion without bonus


#### 1. Using it in your code

To use the function in your code, simply include its header:
```
#include "get_next_line.h"
```

When compiling your code, add the source files and the required flag:
```
get_next_line.c get_next_line_utils.c -D BUFFER_SIZE=<size>
```
