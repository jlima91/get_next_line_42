<h1 align="center">
📖 get_next_line
</h1>

<p align="center">
	<b><i>Reading a line on a fd is way too tedious</i></b><br>
</p>

<p align="center">
	<img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/jlima91/get_next_line_42?color=lightblue" />
	<img alt="Code language count" src="https://img.shields.io/github/languages/count/jlima91/get_next_line_42?color=yellow" />
	<img alt="GitHub top language" src="https://img.shields.io/github/languages/top/jlima91/get_next_line_42?color=blue" />
	<img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/jlima91/get_next_line_42?color=green" />
</p>

## Summary
```
This project is about programming a function that returns a line read from a file descriptor.
```
## 💡 About the project

```
You will understand how files are opened, read and closed in an OS and how they are interpreted by a programming
language for further analysis.
This task is crucial to understand for a future programmer since much of the time is based on manipulating files
for data management and persistence.
This project consists of coding a function that returns one line at a time from a text file.
```
You can read the project subject [here](https://github.com/jlima91/get_next_line_42/blob/master/get_next_line.pdf)


## 🛠️ Usage

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
