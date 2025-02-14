package codeforces;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;
import java.util.Scanner;
import java.util.Set;

public class Partition {

	public static void main(String[] args) throws FileNotFoundException {
		PartitionProcess process = new PartitionProcess();
		//process.fileInitialize();
		process.systemInputInit();
		process.input();
		process.result();

	}
}

class PartitionProcess {

	private int numberOfInteger;
	private Scanner scanner;
	private int positive;
	private int negative;

	public void fileInitialize() throws FileNotFoundException {
		File file = new File("input.txt");
		scanner = new Scanner(file);
	}

	public void systemInputInit() {
		scanner = new Scanner(System.in);

	}

	public void result() {
		System.out.println(positive - negative);
	}

	private void init() {
		positive = 0;
		negative = 0;
	}

	public void input() {
		init();
		numberOfInteger = scanner.nextInt();
		for (int i = 0; i < numberOfInteger; i++) {
			int number = scanner.nextInt();
			if (number < 0)
				negative += number;
			else
				positive += number;
		}
	}
}
