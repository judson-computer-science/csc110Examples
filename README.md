# CSC110 - Programming in C
This repository contains code samples that will be used in class.

## Compiling  & Running C Programs
- `gcc <fileName>`:  compile the `.c` file (fileName) into an executable called `a.out`
- `gcc -o <exeName> <fileName>`: compile the `.c` file (fileName) into an executable called `exeName`
- `./<exeName>`: execute the file named `exeName` (that is in the current directory)

## Linux Command Cheat Sheet
- `man`: view the manual for any linux command
-- `man ls`: view the manual for the `ls command`
- `ls`:  list the contents of the current directory
-- `ls ..`: list the contents of the parent director
-- `ls project1`: list the contents of the directory called `project1` (if it exists)
- `pwd`: print the name of the current directory
- `cd`:  change the current directory
- `mv`:  relocate or rename a file
- `cp`:  make a copy a file or directory
- `rm`:  remove a file

## Git Cheat Sheet
- `git clone`:  clone (make a copy of) a repository to your local machine
- `git pull origin main`: pull the latest code from the remote repo (origin) to your local machine
- `git status`: see the current status of your local repo (which files are changed, staged etc)
- `git add .`: stage changes to the files in the current directory (so they are ready to be committed)
- `git commit -m <comment>`: make a new commit of all staged changes
- `git push origin main`: push the local commits to the remote repository (origin)
