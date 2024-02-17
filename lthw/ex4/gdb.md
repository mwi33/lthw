# Starting gdb

~~~ bash
# when compiling the source code, use the following '-g' flag to include the debugging symbols.  When using gdb with this flag set, the debugger provides source code line numbers, the actual source code and effective backtracing.

CFLAGS="-Wall -g" make ex3

# starts the debugger without loading a source file
gdb

# start the debugger and load a source file.  You need to load the binary not the C source code file.
gdb ./ex3

# this loads the debugger and presents the gdb interface (gdb)

(gdb)

#### gdb quick reference ####

(gdb) run [args]
(gdb) break [file:[function]]
(gdb) bt
(gdb) pring expr
(gdb) continue
(gdb) next
(gdb) step
(gdb) quit
(gdb) help
(gdb) cd
(gdb) pwd
(gdb) make
(gdb) shell
(gdb) info break
(gdb) info watch
(gdb) attach pid
(gdb) detach
(gdb) list


#### gdb tricks
# normally when starting gdb you can provide arguments that are used to influence how gdb runs i.e. the arguments you pass are for gdb.

# you can use the '--args' flag to send these arguments to the source code you are debugging.

# use this command to confugure gdb to provide a backtrace if the application crashes

gdb --batch --ex run --ex bt --ex q --args [ARGS] [ARGS]
gdb --batch --ex run --ex bt --ex q --args ./ex3


~~~