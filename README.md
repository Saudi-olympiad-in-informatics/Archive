# SOI25 Archive
This repository contains an archive of the tasks of *Saudi Olympiad in Informatics 2025*, the structure of the task files is as follows:

## Task file structure
Each task has a folder by the name of the task (hereby refered to as `{task_name}`, **note that the `{task_name}` is titlecased here**) in the root directory. The contents of which are:
### `metadata.json`
This JSON file contains some metadata about the task, the structure of which is:
- `limits`: Dictionary; Describing the limits for this task.
  - `time`: Integer; The time limit of the task, measured in milliseconds.
  - `memory`: Integer; The memory limit of the task, measured in megabytes.

### `Statement.pdf`
This PDF file is a pre-rendered statement for the task.

### `Grader`
This folder contains the grader files for the task, more precisely, it has:
- `{task_name}.h`: Header file, for C++ solutions. **(note that the `{task_name}` is lowercased here)**
- `grader.cpp`: C++ grader for the task.
- `grader.py`: Python grader for the task.

### `Tests`
This folder contains the testcases for the task. This folder doesn't have a consistent structure across all tasks, but generally, each test case has some ID (hereby referred to as `{testcase_id}`), and each testcase has two files: input and output.
- `{testcase_id}.in` or `{testcase_id}.a`: The input data for testcase `{testcase_id}`.
- `{testcase_id}.out` or `{testcase_id}.b`: The output data expected for testcase `{testcase_id}`.

#### Testcase ID Schemas
Testcase IDs for each task are in one of three schemas:
1. `{s:Integer}_{i:Integer}`: In this schema, the ID is two integers (`s` and `i`) separated by an `_`.
   - The integer `s` represents the subtask index within the task; and
   - The integer `i` represents the index of the testcase **globally within the task (i.e. is always an integer in the range [1, `{number_of_testcases}`]).**
3. `{s:Integer}_{i:Integer}`: In this schema, the ID is two integers (`s` and `i`) separated by an `_`.
   - The integer `s` represents the subtask index within the task; and
   - The integer `i` represents the index of the testcase **within its corresponding subtask.**
5. `{i:Integer}`: In this schema, the ID is just a single integer, representing the index of the testcase globally within the task. with zero subtask distinction.

#### Distinguishing between Testcase ID Schemas 1 and 2
ID schemas 1 and 2 are very similar in format, which makes distinguishing between them harder.

One unique property of schema 2 is that it formats the integer `i` with a min width of 2 (i.e. subtask 1 testcase 2 has the ID `1_02` instead of `1_2`). Which means anytime you parse an ID with `i` as a single-digit integer with a leading zero, you can unambiguously conclude that it uses schema 2.

And in this specific case, since we don't have many testcases per subtasks, more percisely, no more than 9 testcases, this method is guaranteed to always work.

### `Assets`
This folder contains additional assets for the task, usually used in statement. It contains some images in `.png` format, with the names:
1. `{task_name}.png`: If there is a single image. **(note that the `{task_name}` is lowercased here)**
2. `{task_name}_{i:Integer}.png`: If there are multiple images, with `i` being the index. **(note that the `{task_name}` is lowercased here)**
