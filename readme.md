# Gimme (Git Metagame)
gm - a git multitool for creating, configuring and cloning
repos with only `user/repo` or `repo` needed.

aiming to condensing:

```console
$ mkdir name
$ cd name
$ cp /path/to/license License
$ cp /path/to/readme README.md
$ git init
$ git add *
$ git commit -m "begin repo"
$ cd ..
$ mkdir name wiki
$ cp /path/to/wiki/* .
$ git init
$ git add *
$ git commit -m "begin wiki"
~ web shenanigans
$ cd ../name
$ git add remote git@domain:user/repo
$ git push origin master
$ cd ../name.wiki
$ git add remote git@domain:user/repo.wiki
$ git push --set-upstream origin master
$ cd ../name
```

or

```console
$ git clone git@domain:user/repo.wiki
$ git clone git@domain:user/repo
$ cd repo
```

into `$ gm domain/repo.wiki`

while providing simple access to complex tools

## Inspired by
- gh - <https://github.com/cli/cli>
- hub - <https://github.com/github/hub>
- gitlab - <https://github.com/makkes/gitlab-cli>
- plug.vim - <https://github.com/junegunn/vim-plug>


# Disclaimer
at this moment running `gm` only prints what it will be used for to terminal output.

# Functionality
- only print when when something important is happening
- use github-like REST apis

go to [wiki/options](options.md) for info

# Non goals
- read to the user like their a child
- constantly supply repeating output


# Build Dependencies
- make
- gcc

# License
unlicense skrshe 2021. for more info see <https://unlicense.org>
