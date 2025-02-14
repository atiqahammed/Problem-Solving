package codeforces;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class ProtectSheep {

	public static void main(String[] args) throws FileNotFoundException {
		ProtectSheepProcess process = new ProtectSheepProcess();
		//process.fileInitialize();
		process.systemInputInit();
		process.input();
		process.result();// TODO Auto-generated method stub

	}

}

class ProtectSheepProcess {

	Scanner scanner;
	private int row, col;
	String area[];

	public void fileInitialize() throws FileNotFoundException {
		File file = new File("input.txt");
		scanner = new Scanner(file);
	}

	public void systemInputInit() {
		scanner = new Scanner(System.in);

	}

	public void result() {
		addDog();
		if(primaryTest())
			System.out.println("No");
		else {
			System.out.println("Yes");
			for (int i = 0; i < area.length; i++)
				System.out.println(area[i]);
		}
	}



	private boolean primaryTest() {
		for (int i = 0; i < area.length; i++) {
			for (int j = 0; j < col; j++) {
				if(area[i].charAt(j) != 'W')
					continue;
				if(j  < col -1) {
					if(area[i].charAt(j+1) == 'S') return true;
				}

				if(j  > 0) {
					if(area[i].charAt(j-1) == 'S') return true;
				}
				if(i  < row -1) {
					if(area[i + 1].charAt(j) == 'S') return true;
				}
				if(i  > 0) {
					if(area[i-1].charAt(j) == 'S') return true;
				}

			}
		}
		return false;
	}

	private void addDog() {
		for (int i = 0; i < area.length; i++)
			area[i] = area[i].replace('.', 'D');
	}



	public void input() {
		row = scanner.nextInt();
		col = scanner.nextInt();
		String dummy = scanner.nextLine();
		init();

		for(int i = 0; i < row; i++)
			area[i] = scanner.nextLine();
	}

	private void init() {
		area = new String[row];

	}
}
