import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.LinkedList;
import java.util.Queue;

public class BOJ2606 {
	private static int n, t;
	private static int[][] computer;
	private static boolean[] visit;
	
	public static void main(String[] args) {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		try {
			n = Integer.parseInt(br.readLine());
			t = Integer.parseInt(br.readLine());
			computer = new int[n+1][n+1];
			visit = new boolean[n+1];
			
			while(t-->0) {
				String[] temp = br.readLine().trim().split(" ");
				int a = Integer.parseInt(temp[0]);
				int b = Integer.parseInt(temp[1]);
				
				computer[a][b] = computer[b][a] = 1;
			}
			System.out.println(bfs(1));
		}
		catch (Exception e){
			System.out.println(e.getMessage());
		}
		
	}
	
	public static int bfs(int k) {
		int count = 0;
		Queue<Integer> q = new LinkedList<Integer>();
		q.offer(k);
		
		while(!q.isEmpty()) {
			int x = q.poll();
			visit[x] = true;
			
			for(int i = 0; i <= n; i++) {
				if(computer[x][i] == 1 && !visit[i]) {
					q.offer(i);
					visit[i] = true;
					count++;
				}
				
			}
		}
		
		
		
		
		return count;
	}
	
	
	
}
