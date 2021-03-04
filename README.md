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
at this moment running `gm` only prints `hello git` to terminal output.

# Announcement
gimme-0.0.1-linux can now be built and installed

# Functionality
- work like a unix application: only print when when something important is happening
- work with github like REST apis

go to [wiki/options](options.md) for info

# Non goals
- read to the user like their a child
- constantly supply repeating output

# Dependencies
to clone with gimme:
- git

# Build Dependencies
to build gimme:
- make
- gcc
- sudo
- git


to generate docs from the wiki:
- pandoc

___docs are yet to be set up___

# Installation
intall with:
```console
git clone https://github.com/skrshe/gimme
cd gimme/
make
sudo make install
```
remove with:
```console
sudo make uninstall
```

# Inspired by
gh -  https://github.com/cli/cli
hub - https://github.com/github/hub
gitlab - https://github.com/makkes/gitlab-cli

plug.vim
