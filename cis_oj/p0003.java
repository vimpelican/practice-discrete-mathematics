package cis_oj;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class p0003 {
    public static void main(String[] args) throws NumberFormatException, IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();

        // 테스트 케이스의 숫자(N)를 저장
        int numberOfInputs = Integer.parseInt(br.readLine());
        int[] tempArr = new int[numberOfInputs];

        // 임시 배열에 \n으로 구분된 입력값을 저장
        for(int i = 0; i < numberOfInputs; i++) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            int input = Integer.parseInt(st.nextToken());
            tempArr[i] = input;
        }

        // 임시 배열의 역순으로 입력값을 저장하고, 결과 형식에 맞게 \n 추가
        for(int j = numberOfInputs - 1; j >= 0; j--) {
            sb.append(tempArr[j]);
            sb.append("\n");
        }

        // 결과 출력
        System.out.print(sb);
    }
}
