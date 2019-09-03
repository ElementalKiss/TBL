# repository clone
```
git clone https://github.com/elementalkiss/tbl /c/work/tbl
```

# user info config setup

```
git config user.name ""
git config user.email ""
```

# source update

```
git fetch
git pull
```

# source commit

```
git add .
git commit -m "commit message"
git push
```

* 또는 git gui를 통해 add, commit, push 가능.

# merge

```
# method 1
git fetch
git rebase

# method 2
git fetch
git pull
```