# CSC110 - Programming in C
This repository contains code samples that will be used in class.

## Compiling  & Running C Programs
- `gcc <fileName>`:  compile the `.c` file (fileName) into an executable called `a.out`
- `gcc -o <exeName> <fileName>`: compile the `.c` file (fileName) into an executable called `exeName`
- `./<exeName>`: execute the file named `exeName` (that is in the current directory)

## Linux Command Cheat Sheet
The following list are some of the more common Linux command that you will need for this class. Under each main bullet point, the sub-bullets provide examples of how the command can be used.
### "man" command
view the official manual for any linux command
````
Example: view the manual for the 'ls' command
	man ls
````



- `ls`:  list the contents of the current directory
  - `ls ..`: list the contents of the parent director
  - `ls project1`: list the contents of the directory called `project1` (if it exists)
- `pwd`: print the name of the current directory
- `cd`:  change the current directory
  - `cd ..`: change to the parent directory
  - `cd -`: change to the previous directory
  - `cd /home/judson/repos/test`: change to the directory called `test`, found within the `/home/judson/repos` directory
- `mv`:  relocate or rename a file
  - `mv file1.txt dir1`:  move `file1.txt` into the directory called `dir1`
  - `mv file1.txt file2.txt`: rename `file1.txt` to `file2.txt` (overwrites `file2.txt` if it already exists)
- `cp`:  make a copy a file or directory
  - `cp file1.txt file2.txt`: make a copy of `file1.txt` called `file2.txt` (overwrites `file2.txt` if it already exists)
  - `cp -r dir1 ../dir2`: copy the directory called `dir1` and all of its contents into the parent directory with the new name `dir2`. This assumes that the target directory (`dir2`) does not already exist in that location
- `rm`:  remove a file (be careful because there is no recovering from this)
  - `rm file1.txt`:  permanently delete `file1.txt`
  - `rm -r dir1`: permanently remove the directory called `dir1` and all of its contents
- `rmdir`: remove an empty directory (to remove a directory that is not empty, use `rm`)
  - `rmdir dir1`: remove the empty directory called `dir1`

## Git Cheat Sheet
- `git clone`:  clone (make a copy of) a repository to your local machine
- `git pull origin main`: pull the latest code from the remote repo (origin) to your local machine
- `git status`: see the current status of your local repo (which files are changed, staged etc)
- `git add .`: stage changes to the files in the current directory (so they are ready to be committed)
- `git commit -m <comment>`: make a new commit of all staged changes
- `git push origin main`: push the local commits to the remote repository (origin)
