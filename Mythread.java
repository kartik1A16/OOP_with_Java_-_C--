/*Threads – Part A (Thread Creation and Lifecycle)
Topic: Creating and Managing Threads
Objective: To demonstrate thread creation using Thread class and Runnable interface.
Problem Statement:
Write a Java program to:
1. Create threads by extending the Thread class.
2. Create threads by implementing the Runnable interface.
3. Use methods like start(), sleep(), join(), and interrupt() to control thread 
execution.
Concepts Covered: Thread Class, Runnable Interface, Thread Lifecycle, Thread Control 
Methods */

// Threads using extending the thread class
class MyThread_extend extends Thread {
    public void run() {
        System.out.println("Thread is running..."+Thread.currentThread().getName());
    }
}

// Threads using implementing the Runnable interface
class MyThread_run implements Runnable {
    @Override
    public void run() {
        System.out.println("Task is running in thread: " + Thread.currentThread().getName());
    }
}

public class Mythread{
    public static void main(String[] args) {
        MyThread_extend t1 = new MyThread_extend(); // create thread
        t1.start();                                 // start thread

        MyThread_run t2 = new MyThread_run();       // create task
        Thread thread = new Thread(t2);             // wrap in a Thread
        thread.start();                             // start task
    }
}
