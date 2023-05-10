package cis_oj;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;

public class p2001 {
    private int vertex;
    private LinkedList<Integer> adj[];

    p2001(int v) {
        this.vertex = v;
        adj = new LinkedList[v];
        for(int i = 0; i < v; i++) {
            adj[i] = new LinkedList();
        }
    }

    void addEdge(int v, int w) {
        adj[v].add(w);
    }

    void BFS(int start) {
        boolean visited[] = new boolean[this.vertex];
        LinkedList<Integer> myQueue = new LinkedList();

        visited[start] = true;
        myQueue.add(start);

        while(myQueue.size() != 0) {
            start = myQueue.poll();
            System.out.print(start + 1 + " ");

            Iterator<Integer> i = adj[start].listIterator();
            while (i.hasNext()) {
                int n = i.next();
                if(!visited[n]) {
                    visited[n] = true;
                    myQueue.add(n);
                }
            }
        }
    }

    public static void main(String[] args) throws NumberFormatException, IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        // inputValue[0] : 정점의 수 n
        // inputValue[1] : 간선의 수 m
        // inputValue[2] : 시작 정점 v
        int[] inputValue = new int[3];

        // 입력값을 순서대로 저장
        StringTokenizer st = new StringTokenizer(br.readLine());
        for(int i = 0; i < 3; i++) {
            inputValue[i] = Integer.parseInt(st.nextToken());
        }

        // 정점의 수를 이용해 클래스 생성
        p2001 myGraph = new p2001(inputValue[0]);

        // 간선의 수만큼 반복
        for(int i = 0; i < inputValue[1]; i++) {
            st = new StringTokenizer(br.readLine());
            myGraph.addEdge(Integer.parseInt(st.nextToken()) - 1, Integer.parseInt(st.nextToken()) - 1);
        }

        myGraph.BFS(inputValue[2] - 1);

    }
}