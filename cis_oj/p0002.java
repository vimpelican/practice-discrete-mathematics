package cis_oj;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class p0002 {
    public static void main(String[] args) throws NumberFormatException, IOException {

        // Scanner, System.out.println()를 반복해 사용하는 대신 BufferedReader,StringBuilder 사용
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();

        // 공백으로 입력된 두 정수를 각각 저장
        StringTokenizer st = new StringTokenizer(br.readLine());
        int first = Integer.parseInt(st.nextToken());
        int second = Integer.parseInt(st.nextToken());

        // 출력하기 위한 sb 변수에 저장 후 출력
        sb.append(first + second);
        System.out.print(sb);
    }
}
