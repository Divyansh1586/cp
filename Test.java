import java.util.*;

class Test{
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[] = new int[n];
        for(int i = 0; i < n;i++){
            arr[i] =sc.nextInt();
        }
        int maxfood = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                int sm = 0;
                for(int k = i; k < j;k++){
                    sm += arr[k];
                }
                if(sm > maxfood) maxfood = sm;
            }
        }
        System.out.println(maxfood);
    }
}