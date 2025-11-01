/*Threads – Part A (Thread Creation and Lifecycle)
Topic: Creating and Managing Threads
Objective: To demonstrate thread creation using Thread class and Runnable interface.
Problem Statement:
Write a Java program to:
1. Create threads by implementing the Runnable interface.
2. Use methods like start(), sleep(), join(), and interrupt() to control thread 
execution.
Concepts Covered: Runnable Interface, Thread Lifecycle, Thread Control 
Methods */
// Threads using implementing the Runnable interface

class MyThread_run implements Runnable {
    @Override
    public void run() {
        try {
            // Loop with sleep
            for (int i = 1; i <= 5; i++) {//loop to simulate
                System.out.println(Thread.currentThread().getName() + " is running");
                Thread.sleep(5000); // sleep 5 sec
            }
        } catch (InterruptedException e) {
            System.out.println(Thread.currentThread().getName() + " was interrupted!");
        }
    }
}

public class Mythread_A2 {
    public static void main(String[] args) {
        // Create tasks
        MyThread_run task1 = new MyThread_run();
        MyThread_run task2 = new MyThread_run();

        // Wrap tasks in Thread objects
        Thread t1 = new Thread(task1);
        Thread t2 = new Thread(task2);

        // Start threads
        t1.start();
        t2.start();

        try {
            // Main waits for t1 to finish
            t1.join();
            System.out.println("Main thread waiting...");

            // Interrupt t2 while it may still be running
            t2.interrupt();
        } catch (InterruptedException e) {
            System.out.println("Main thread interrupted!");
        }

        System.out.println("Main thread ends.");
    }
}
