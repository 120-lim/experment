public class water {
	static int max(int a,int b){
		if(a>b){
			return a;
		}else{
			return b;
		}	
	}
	static int min(int a,int b){
		if(a<b){
			return a;
		}else{
			return b;
		}
	}

	public static void main(String[] args){
		System.out.println("unko");
		int a = 100;
		int i,j;
		System.out.println(a);

		//ここからメインの計算
		for(i=0;i<numberi-1;++i){
			for(j=i+1;j<number;++j){
				volume = max((min(b[i],b[j])*(j-i)),volume);
			}
		}
		System.out.println("maximam is" volume);
	}
}
