p4 opened	  	   git status
p4 open            git add
p4 diff	           git diff --staged
p4 shelve          git stash -u  , git stash list,   git stash show , git stash apply , git stash drop, git stash pop
                   git log --auther=" Auther Name"" , git log --before="date"
				   git revert [go back to the previous commit]  git log --oneline [get the hash value of last commit and use that value in revert command]  git revert HASH[get this value from the git lot]
				   git revert HEAD [it will revert the last commit]
				   git rebase
				   git log -p  : to view the changes.
				   git show <commit-id>
				   git commit   [give 3 line comment, 1st line informative msg, 2nd line blank and 3rd line Description]
				   git mv $orig $new  : To rename a file.
				   git rm <file>  : to remove a file., 
				   git branch
				   git checkout
				   git commit --amend  --no-edit   : To clean the previous wrong commit.
				   git worktree add quicktree   [to create temporary out of tree work copies], steps: 1 cd quicktree, 2. git branch, 3. git add, git commit etc, 4. cd .., 5. git worktree remove quicktree.]
				   git worktee remove quicktree  [No need to do checkout for worktree, ]
				   
				   
				   