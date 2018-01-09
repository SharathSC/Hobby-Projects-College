//Main.java
import java.util.Random;

public class Main {
	
	public static boolean arrayContainsNum(int[] arr, int currLength, int num){
		for(int i = 0; i < currLength; i++ ){
			if ( arr[i] == num ){
				return true;
			}
		}
		return false;
	}
	public static int[] createAddresses(int numElems){
		int[] arr = new int[numElems];
		for(int i = 0; i < numElems; i++ ){
			int num = rand.nextInt();
			while ( num < 0 || num % 32 != 0 || arrayContainsNum(arr, i, num) ){
				num = rand.nextInt();
			}
			arr[i] = num;
		}
		
		return arr;
	}
	
	public static int insertElements(int[] addressesToHash, LinearProbedHashTable table) throws TableFullException {
		int totalCollisions = 0;
		for(int i = 0; i < addressesToHash.length; i++) {
			int collisions = table.insert(addressesToHash[i]);
			System.out.format("Number collisions inserting %d: %d\n", addressesToHash[i], collisions);
			totalCollisions += collisions;
			System.out.println(table.toString());
		}
			
		System.out.format("Total number of collisions: %d\n", totalCollisions);
		return totalCollisions;
	}
	
	
	public static void main(String[] args){
		try {
			int[] addressesToHash = createAddresses(8);
			LinearProbedHashTable table = new LinearProbedHashTable(addressesToHash.length);
			
			
			int collisions = insertElements(addressesToHash, table);
			

			for(int i = 0; i < addressesToHash.length; i++){
				if ( ! Answer.contains(table, addressesToHash[i]) ){
					System.out.format("Element %d was not found in the table!\n", addressesToHash[i]);
				} 
			}

		} catch (IndexOutOfBoundsException| TableFullException ex){
			System.out.println(ex.getMessage());
			ex.printStackTrace();
			System.out.println("System error. This exception shouldn't occur. Please contact the site administrator.");
			System.exit(1);
		} catch (Exception ex) {
			System.out.println(ex.getMessage());
			ex.printStackTrace();
			System.exit(1);
		}
	}
	
	private static Random rand = new Random();
}
