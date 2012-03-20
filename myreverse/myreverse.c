#include <unistd.h>
#define size 10

void rev(char* buff, int size) {
    int i;
    for (i = 0; i<size/2;i++) {
        char tmp=buff[i];
        buff[i]=buff[size-i-1];
        buff[size-i-1]=tmp;
    }
}

int main() {
	int N;
	char buff[size];
	int i;
	i=0;
	N = read(0,buff,size);	
	while(1){
	while ((i==N)&&(buff[i]!='\n')&&(i!=size)) {
		N=N+read(0,buff+N,size-N);
	}

		if (i!=size) {	

			if (buff[i]=='\n') {
				rev(buff,i);
        	       		write(1 buff,i+1);
				memmove(buff,buff+i+1,N-i-1);	
				N =N-i-1+read(0,buff+N-i-1,size-N+i+1);	
				i=0;
				continue;
			}
			i=i+1;
			continue;
		}else {
			N = read(0,buff,size);		
			i=0;
			while((i<N)||(i==size)) {
				if (i==size) {
				i=size;
				N=0;
				continue;
				}

				if (buff[i]=='\n') {
					memmove(buff,buff+i+1,N-i-1 );
					N =N-i-1 + read(0,buff+N-i-1,size-N+i+1);
					i=0;	
					continue;
				}
				i++;		
			}	
		}
	continue;		
	}
}