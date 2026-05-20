<div align="center" class="text-center">
  <h1>42-Pool</h1>
  
  <img alt="last-commit" src="https://img.shields.io/github/last-commit/socallmebertille/42-Pool?style=flat&amp;logo=git&amp;logoColor=white&amp;color=0080ff" class="inline-block mx-1" style="margin: 0px 2px;">
  <img alt="repo-top-language" src="https://img.shields.io/github/languages/top/socallmebertille/42-Pool?style=flat&amp;color=0080ff" class="inline-block mx-1" style="margin: 0px 2px;">
  <img alt="repo-language-count" src="https://img.shields.io/github/languages/count/socallmebertille/42-Pool?style=flat&amp;color=0080ff" class="inline-block mx-1" style="margin: 0px 2px;">
  <p><em>Built with the tools and technologies:</em></p>
  <img alt="Markdown" src="https://img.shields.io/badge/Markdown-000000.svg?style=flat&amp;logo=Markdown&amp;logoColor=white" class="inline-block mx-1" style="margin: 0px 2px;">
  <img alt="GNU%20Bash" src="https://img.shields.io/badge/GNU%20Bash-4EAA25.svg?style=flat&amp;logo=GNU-Bash&amp;logoColor=white" class="inline-block mx-1" style="margin: 0px 2px;">
  <img alt="C" src="https://img.shields.io/badge/Language-2496ED.svg?style=flat&amp;logo=c&amp;logoColor=white" class="inline-block mx-1" style="margin: 0px 2px;">
</div>

<h2>Table of Contents</h2>
<ul class="list-disc pl-4 my-0">
  <li class="my-0"><a href="#overview">Overview</a></li>
  <li class="my-0"><a href="#shell-notions">Shell notions</a></li>
  <li class="my-0"><a href="#c-notions">C notions</a></li>
</ul>

<h2>Overview</h2>

This repository contains my 42 Pool exercises, organized by Shell days (`Shell_00`, `Shell_01`) and C modules (`C_00` to `C_08`).
Each `exXX` folder is an independent drill focused on one core concept.
The goal of these notes is to stay concise but useful: what each block teaches, and what is worth remembering when reviewing.

<h2>Shell notions</h2>

| Notion | Command pattern | Flag / pipeline details | Example | Why it matters |
|---|---|---|---|---|
| User groups | `id -Gn "$FT_USER" \| tr " " "," \| tr -d "\n"` | `-G`: print group IDs as names, `-n`: names instead of numeric IDs. `tr " " ","`: replace spaces with commas. `tr -d "\n"`: remove trailing newline. | `FT_USER=bertille ./print_groups.sh` | Useful when grading expects an exact comma-separated line with no newline differences. |
| Find shell scripts | `find -type f -name "*.sh"` | `-type f`: regular files only. `-name "*.sh"`: glob filter by extension. | `find . -type f -name "*.sh"` | Builds the habit of applying strict filters before running actions. |
| Count entries | `find . \| wc -l` | `find .`: outputs one path per line (including `.`). `wc -l`: counts lines. | `find . \| wc -l` | Quick sanity check for directory size and unexpected files. |
| Extract MAC addresses | `ifconfig \| grep ether \| awk '{print $2}'` | `grep ether`: keep only lines containing MAC data. `awk '{print $2}'`: print the second field. | `./MAC.sh` | Shows how simple Unix tools compose into reliable one-liners. |
| Latest commit SHAs | `git log --format="%H" -5` | `--format="%H"`: output full commit hashes only. `-5`: limit to the five latest commits. | `./git_commit.sh` | Produces machine-checkable output for commit-history exercises. |
| Sorted compact listing | `ls -mpt` | `-m`: comma-separated list, `-p`: add `/` to directories, `-t`: sort by modification time. | `./midLS` | Demonstrates how combining flags shapes output format precisely. |

<h2>C notions</h2>

| Module | Main point | Keys to understand and keep in mind |
|---|---|---|
| C_00 | First contact with C syntax and loops | Output must match expected characters exactly; practice loop boundaries and ASCII reasoning. |
| C_01 | Pointers and array basics | Understand addresses vs values, pointer indirection levels, and in-place array manipulation. |
| C_02 | String manipulation from scratch | Respect null-termination (`'\0'`), avoid out-of-bounds reads, and separate transformation from validation logic. |
| C_03 | Reimplement classic string API behavior | Reproduce libc-like semantics (`strcmp`, `strcat`, `strstr`) with consistent return values and edge-case handling. |
| C_04 | Numeric conversions and formatted output | Handle signs, overflow-sensitive paths, and base validation rules in conversion helpers (`atoi`, `putnbr_base`). |
| C_05 | Iteration vs recursion in math exercises | Define base cases first, then verify recursion depth and termination for factorial, power, fibonacci, and prime checks. |
| C_06 | Program arguments (`argc`/`argv`) | Work directly with argument ordering, lexicographic comparisons, and deterministic printing behavior. |
| C_07 | Dynamic allocation and string splitting | Size allocations correctly, free on failure paths, and keep helper functions small for split/join logic. |
| C_08 | Headers, macros, structs, and data packaging | Keep declarations clean, include guards correct, and structure conversion logic explicit (`strs_to_tab`, `show_tab`). |
