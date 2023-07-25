## GDBTricks

Here’s a list of simple tricks you can do with GNU Debugger (GDB):
gdb --args Normally, gdb takes arguments you give it and assumes they are
for itself. Using --args passes them to the program.
thread apply all bt Dump a backtrace for all threads. It’s very useful.
gdb --batch --ex r --ex bt --ex q --args Run the program so that if it bombs,
you get a backtrace.

## GD BQuick Reference


run [args] Start your program with [args].
break [file:]function Set a break point at [file:]function. You can also use b.
backtrace Dump a backtrace of the current calling stack. Shorthand is bt.
print expr Print the value of expr. Shorthand is p.
continue Continue running the program. Shorthand is c.
next Next line, but step over function calls. Shorthand is n.
step Next line, but step into function calls. Shorthand is s.
quit Exit GDB.
help List the types of commands. You can then get help on the class of
command as well as the command.
cd, pwd, make This is just like running these commands in your shell.
shell Quickly start a shell so you can do other things.
clear Clear a breakpoint.

-g Give you debugging capabilites
```
(gdb) break main 
Breakpoint 1 at 0x55555555515c: file FormatingPrinting.c, line 5.
(gdb) run 
Starting program: /home/muhammad/To-be-an-automotive-engineer/02-FormatingPrinting/FormatingPrinting 
[Thread debugging using libthread_db enabled]
Using host libthread_db library "/lib/x86_64-linux-gnu/libthread_db.so.1".

Breakpoint 1, main (argc=1, argv=0x7fffffffdf98) at FormatingPrinting.c:5
5		int age = 100;
(gdb) 



```
to go to next step we write 
```
(gdb) step 
6		float hight= 175.5;


```
```
(gdb) step
7		printf("I am  %i years Old.\r\n",argv);

```

GDB Trick 1 
```
gdb --batch --ex r --ex bt --ex q --args ./binary-file 
```

when used on FormatingPrinting 
```
gdb --batch --ex r --ex bt --ex q --args ./FormatingPrinting 

```
it gives  back 
```
This GDB supports auto-downloading debuginfo from the following URLs:
https://debuginfod.ubuntu.com 
Enable debuginfod for this session? (y or [n]) [answered N; input not from terminal]
Debuginfod has been disabled.
To make this setting permanent, add 'set debuginfod enabled off' to .gdbinit.
[Thread debugging using libthread_db enabled]
Using host libthread_db library "/lib/x86_64-linux-gnu/libthread_db.so.1".
I am  -8296 years Old.
I am 175.5 cm tall.
 [Inferior 1 (process 166433) exited normally]
No stack.

