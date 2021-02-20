# Gimme
gm - A wrapper around the whole git meta game

# Usage
    gm <flags> <command> <flags> <pattern> <destination>
eg gm -C auto
# Flags
-c --configdir \<configdir\>
    specifies a different configuration direcory for current issue of gm
    <!-- maybe keep configdir location cached at current working directory -->
-C --color=auto
    turn on color output
-l --list-details
    Use a long listing format with file metadata
-v --version
    show version
-V --verbose
    make gm be the bitch you want it to be

# Commands
## editing
spawn <domain/repo>
    spawn repo at domain. this is done by default
        -w --wiki
            spawn wiki for given repo. this is done by default if repo ends
            with .wiki
        -t --template user/repo
            use other repos as a template for this one
        -l --license <license>
            generate license at new repo
modify <repo>
    change a repo settings
    -p --public <bool>
config <domain>
    git config as well as domain account config
gitlog <repo>
    magit style git commit history viewer.
    -h --hash
        show file and branch hash.
    -H --history-count
        how many history items to show. default 7.
    -c --contributer
        show contributer name to the right
    -d --dated <%H%M%S>
    show date to the far right. optionaly supply date format
    -D --direction <direction>
alias
    like github-cli
## viewing
tree
    return a tree of repo
history
    enter a git porcelan environment for repo

# Functionality
dynamicaly shit stuff out

# Examples
gm regex
    1. searches list of defined domains for a match of the input with either user or repo
    2. returns a list and prompts user to select one
    3. if in a git repo output a list branches
gm user/repo
    1. searches list of defined domains  and if not found asks the user to supply a domain
    2. if it gets back more than one domain for specified user/repo it prompts the user to
    select one
    3. if localdir is supplied it clones the specied remote to localdir
gm git@srcht.com:User/repo localdir
    get straight down to busieness
gm user/repo/dir/subdir/file.txt
    fetch a stand alone file or folder from a git repository
gm download repo
    fetch and unpack latest release of repo
gm repo.wiki
    clone/create and clone repo wiki depending on permissions
./log.txt
flow
```
```
# Safety
- if user requests a repo that is really similar to an existing repo in there
database prompt user to confirm spawning of the new repo or cloning of the
original

# See also
