/************************************************************** 
 * Author : Yonghwan Yim
 * Title  : Prime number (Sieve of Eratosthenes, Bitmask, i*i)
 * Final update : May 26, 2022                         
 **************************************************************/
import java.util.Scanner;

public class Eratosthenes {
    
    private int N;
    private final static int maxN = 100;
    private char[] sieveOfEratos = new char[(maxN+7)/8];
    Scanner scan = new Scanner(System.in);
    
    Eratosthenes(int N){
        this.N = N;
        for(int i = 0; i < sieveOfEratos.length; i++) { this.sieveOfEratos[i] = 255; }
    }
    
    private void setCompositionToZero(int n) { sieveOfEratos[n>>3] &= ~(1<<(n&7)); }
    
    private boolean isPrimeNumber(int n) {
        if((sieveOfEratos[n>>3] & (1<<(n&7))) > 0) return true;
        else return false;
    }
    
    private void eratos(){
        setCompositionToZero(0);
        setCompositionToZero(1);
        for(int i = 2; i <= N; i++)
            if(isPrimeNumber(i))
                for(int j = i * i; j <= N; j += i)
                    setCompositionToZero(j);
    }
    
    private int numberOfPrimeNumber(int inputNum){
        int count = 0;
        for(int i = 0; i < inputNum; i++)
            if(isPrimeNumber(i))
                count++;
        return count;
    }
    
    public void run(){
        int inputNum = 0;
        eratos();
        System.out.printf("N : ");
        inputNum = scan.nextInt();
        System.out.printf("Result : %d\n", numberOfPrimeNumber(inputNum));
    }
    
    public static void main(String args[]) {
        Scanner scan = new Scanner(System.in);
        Eratosthenes era = new Eratosthenes(100);
        era.run();
        }
}
