package codeforces;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Scanner;

public class ProducingSnow {

	public static void main(String[] args) throws FileNotFoundException {
		ProducingSnowProcess process = new ProducingSnowProcess();
		process.fileInitialize();
		//process.systemInputInit();
		process.input();
		process.result();

	}
}

class ProducingSnowProcess {
	private Scanner scanner;
	int n;
	ArrayList<Integer> arrayList = new ArrayList<>();
	ArrayList<Integer> v = new ArrayList<>();


	public void fileInitialize() throws FileNotFoundException {
		File file = new File("input.txt");
		scanner = new Scanner(file);
	}

	public void systemInputInit() {
		scanner = new Scanner(System.in);

	}

	public void result() {
		//System.out.println((count > 2 && count % 2 == 0 ? "YES" : "NO"));
	}

	public void input() {
		n = scanner.nextInt();
		//System.out.println(n);

		for (int i = 0; i < n; i++) {
			int k = scanner.nextInt();
			v.add(k);
		}
/*
		for (int i = 0; i < v.size(); i++) {
			System.out.println(v.get(i));
		}
*/


		for(int i = 0; i < n; i++) {
			int temp = scanner.nextInt();
			int count = 0;
			for(int j = 0; j < arrayList.size(); j++) {
				int x= arrayList.get(j);
				count += Math.min(temp, x);
				x -= temp;
				if(x <= 0) arrayList.remove(j);
				else arrayList.add(j, x);
			}

			count += Math.min(v.get(i), temp);
			int x = v.get(i);
			x -= temp;
			if (x > 0) {
				arrayList.add(x);
			}

			System.out.print(count+" ");

		}
		//count = scanner.nextInt();
	}
}