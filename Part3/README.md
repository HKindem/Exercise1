# Reasons for concurrency and parallelism


To complete this exercise you will have to use git. Create one or several commits that adds answers to the following questions and push it to your groups repository to complete the task.

When answering the questions, remember to use all the resources at your disposal. Asking the internet isn't a form of "cheating", it's a way of learning.

 ### What is concurrency? What is parallelism? What's the difference?
 > Cuncurrency switches serially between processes to immitate true parallel threads.  Parallelism executes several threads at once on multiple cores, making the execution independent. 
 
 ### Why have machines become increasingly multicore in the past decade?
 > Power, area and frequency constraints means that increased area  by adding more cores is more efficcient (and doable) than increasing frequency  and transistor density -> power density. 
 
 ### What kinds of problems motivates the need for concurrent execution?
 (Or phrased differently: What problems do concurrency help in solving?)
 > Any problem which can be divided and processed in parallel. This is suitable for any process with is too large for single core processing.
 
 ### Does creating concurrent programs make the programmer's life easier? Harder? Maybe both?
 (Come back to this after you have worked on part 4 of this exercise)
 > Usually harder, as it can increase the complexity by adding timing constraints and interference.
 
 ### What are the differences between processes, threads, green threads, and coroutines?
 > threads perform tasks iwithin a process. Green threads are "user level" threads, scheduled by a VM or runtime libraries. 
 Coroutines are similar to threads but control is left to the programmer, not the OS.
 ### Which one of these do `pthread_create()` (C/POSIX), `threading.Thread()` (Python), `go` (Go) create?
 pthread_create() starts a new thread, as does the threading.Thread() function. "Go" starts a new greeen thread.
 
 ### How does pythons Global Interpreter Lock (GIL) influence the way a python Thread behaves?
 > GIL limits the amount of threads to one thread at a time per process.
 
 ### With this in mind: What is the workaround for the GIL (Hint: it's another module)?
 > It is possible to start threads on several cores. 
 
 ### What does `func GOMAXPROCS(n int) int` change? 
 > This function specifies how many cores to GO code can access. 
