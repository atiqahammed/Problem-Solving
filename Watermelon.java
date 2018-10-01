package codeforces;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class Watermelon {

	public static void main(String[] args) throws FileNotFoundException {
		Process process = new Process();
		//process.fileInitialize();
		process.systemInputInit();
		process.input();
		process.result();

	}
}

class Process {

	private int count;
	private Scanner scanner;

	public void fileInitialize() throws FileNotFoundException {
		File file = new File("input.txt");
		scanner = new Scanner(file);
	}

	public void systemInputInit() {
		scanner = new Scanner(System.in);

	}

	public void result() {
		System.out.println((count > 2 && count % 2 == 0 ? "YES" : "NO"));
	}

	public void input() {
		count = scanner.nextInt();
	}
}


