package lab2;

 
class EvenNumberSummer {
	void calculateAndPrint() {
		int n = 5;
		int sum = 0;
		int i = 1;

		while (i <= n) {
			if (i % 2 == 0) {
				sum = sum + i;
			}
			i = i + 1;
		}

		System.out.printf("sum=%d i=%d%n", sum, i);
	}
}



public class lab2_ex1 {
        public static void main(String[] args) {
			EvenNumberSummer summer = new EvenNumberSummer();
            summer.calculateAndPrint();
        }
    }

