/*Threads – Part A (Thread Creation and Lifecycle)
Topic: Creating and Managing Threads
Objective: To demonstrate thread creation using Thread class and Runnable interface.
Problem Statement:
Write a Java program to:
1. Create threads by extending the Thread class.
2. Use methods like start(), sleep(), join(), and interrupt() to control thread 
execution.
Concepts Covered: Thread Class, Thread Lifecycle, Thread Control 
Methods */

// Thread by extending Thread class
class MyThread_extend extends Thread {
    @Override
    public void run() {
        try {
            // Loop to simulate work
            for (int i = 1; i <= 5; i++) {
                System.out.println("Running in: " + Thread.currentThread().getName() + " → step " + i);
                Thread.sleep(5000); // pause for 0.5 sec
            }
            System.out.println(Thread.currentThread().getName() + " finished work.");
        } catch (InterruptedException e) {
            System.out.println(Thread.currentThread().getName() + " was interrupted!");
        }
    }
}

public class Mythread_A1 {
    public static void main(String[] args) {
        // Create threads
        MyThread_extend t1 = new MyThread_extend();
        MyThread_extend t2 = new MyThread_extend();

        // Name the threads
        t1.setName("Thread-1");
        t2.setName("Thread-2");

        // Start threads
        t1.start();
        t2.start();

        try {
            // Main waits for t1 to finish
            t1.join();
            System.out.println("Main thread waited for Worker-1 to finish.");

            // Interrupt t2 while it may still be running
            t2.interrupt();
        } catch (InterruptedException e) {
            System.out.println("Main thread interrupted!");
        }

        System.out.println("Main thread ends.");
    }
}
