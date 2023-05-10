package cis_oj;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class p2002 {
    public static void main(String[] args) throws NumberFormatException, IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();

        int numberOfInputs = Integer.parseInt(br.readLine());
        int[] tempArr = new int[numberOfInputs];

        for(int i = 0; i < numberOfInputs; i++) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            int input = Integer.parseInt(st.nextToken());
            tempArr[i] = input;
        }

        for(int j = numberOfInputs - 1; j >= 0; j--) {
            sb.append(tempArr[j]);
            sb.append("\n");
        }

        System.out.print(sb);
    }
}
