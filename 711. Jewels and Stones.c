int numJewelsInStones(char* jewels, char* stones) {
    int i, j, sum=0;
        for(i=0;jewels[i];i++){
            for(j=0;stones[j];j++){
                if(jewels[i]==stones[j]){
                    sum+=1;
                }
            }
        }
    return sum;
}
