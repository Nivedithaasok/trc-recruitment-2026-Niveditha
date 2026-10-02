I completed levels 1-10 on git exercises.

# What each exercise taught me:

1. Master
   This exercise taught me about the fundamentals of the platform. I learnt to start the exercise using 'git start' and to check my answer using 'git verify'.
2. commit-one-file
   I learnt the git tracks and saves only the files I choose. Hence, I staged one file (file A) with 'git add' and left the other file (file B) as untracked.
3. commit-one-file-staged
   In this exercise, both files were staged. Hence, I had to un-stage one file before committing. I learnt that 'git restore -- staged' is the command used to 
   un-stage a file without deleting it.
4. ignore-them
   I learned how 'gitignore' tells Git which files to skip. I wrote patterns like '*.exe' for a file type and 'libraries/' for a whole folder.
5. chase-branch
   A branch is just a pointer to a commit. Since my pointer was directly behind 'escaped', I used the command 'git merge' to fast forward and moved my branch ahead.
6. merge-conflict
   A conflict occurs when two branches change the same line. Hence, I opened the file, removed the  conflict markers, kept the correct content, then used 'git add' and 'git commit' to save my changes and finish the merge
7. save-your-work
   I learnt to shelve unfinished work with 'git stash', fix an urgent bug, and bring the work back with 'git stash pop'.
8. change-branch-history
   I used 'git rebase' to move my commit on top of the bug fix. This makes the history a straight line instead of two branches.      
9. remove-ignored
    I used 'git rm --cached' to stop tracking a file while keeping it on my computer.
10. case-sensitive-filename
    Windows treats 'File.txt' and 'file.txt' as the same name, so a direct rename isn't noticed. I renamed the file in two steps through a temporary name using 'git mv'.

# Commands I learned
1. git status: shows which files are untracked, staged or modified
2. git add <file>: stages a file for the next commit
3. git commit -m "message"`: saves the staged files with a message
4. git commit --amend: adds changes to the last commit instead of making a new one
5. git merge <branch>`: brings another branch's commits into the current branch
6. git rebase <branch>: replays my commits on top of another branch
7. git stash and git stash pop: shelve unfinished work and bring it back
8. git rm --cached <file>: stops tracking a file but keeps it on disk
9. git mv <old> <new>: renames a file and records it in Git

# Challenges Faced

1.  Conflict markers in nano were confusing at first, so I rewrote the file's line from the command line.
2.  In 'save-your-work', only one of two files was staged, so the commit was incomplete. I fixed it with 'git add' and 'git commit --amend'.
3.  In 'case-sensitive-filename', I only did the first of the two renames. Both steps are needed to get the lowercase name.
