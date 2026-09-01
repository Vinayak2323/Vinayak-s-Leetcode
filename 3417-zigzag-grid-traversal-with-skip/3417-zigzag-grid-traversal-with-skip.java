class Solution {
    public List<Integer> zigzagTraversal(int[][] grid) {
        List<Integer> list=new ArrayList<>();
        int j=0;
        int m=grid.length;
        int n=grid[0].length;
        for(int i=0;i<m;i++){
            if(j==0){
                while(j<n){
                    list.add(grid[i][j]);
                    j=j+2;
                }
                if(j>n)
                    j=n-2;
                else
                    j=n-1;
                continue;
            }
            else{
                while(j>=0){
                    list.add(grid[i][j]);
                    j=j-2;
                }
                j=0;
                continue;
            }
        }
        return list;
    }
}