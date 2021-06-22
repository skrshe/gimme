# Gimme (GIt MetagaME)
gm - a git multitool for creating / doing things to and cloning
repos with only `user/repo` or `repo` specified instead of
`git clone method://domain/user/repo.git && cd repo`

condensing
```console
$ mkdir name
$ cd name
$ git init
$ cp /random/dir/license License
$ edit README.md
$ git submodule add wiki
$ git add -u
$ git commit -m "template shit"
~ web shenanigans
$ git add remote git@domain:user/repo
$ git push origin master
$ cd wiki
$ git add remote git@domain:user/repo.wiki
$ git push origin master
$ cd ..
```
into `gm repo.wiki`

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

# Inspired by
- gh       - <https://github.com/cli/cli>
- hub      - <https://github.com/github/hub>
- gitlab   - <https://github.com/makkes/gitlab-cli>
- plug.vim - <https://github.com/junegunn/vim-plug>

# License
unlicense skrshe 2021. for more info see <https://unlicense.org>
