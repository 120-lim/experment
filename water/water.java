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
		if(args.length < 3){
		   System.out.println("Usage:number of poles,1st pole hight,2ndpole...");
		   System.exit(1);
		}
		int number = Integer.parseInt(args[0]);
		if(args.length != number+1){
		   System.out.println("Number of poles and number you entered differed");
		   System.exit(1);
		}
		int b[] = new int[number+1];
		int i,j;
		int volume=0;
		for(i=1;i<number+1;++i){
			b[i] = Integer.parseInt(args[i]);
		}
		
		//ここからメインの計算
		for(i=1;i<number;++i){
			for(j=i+1;j<number+1;++j){
				volume = max((min(b[i],b[j])*(j-i)),volume);
			}
		}
		System.out.print("maximam is "); 
		System.out.println(volume);

	}
}
