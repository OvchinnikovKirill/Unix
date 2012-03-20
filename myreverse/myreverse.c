#include <unistd.h>
#define size 11

void rev(char* buf, int size) {
    int i;
    for (i = 0; i<size/2;i++) {
        char tmp=buf[i];
        buff[i]=buff[size-i-1];
        buff[size-i-1]=tmp;
    }
}

int main() {
    int N;
    char buff[size];
    while (1) {
        N = read(0,buff,size);
		if (N<= 0) break;
        if ( N<size || buff[size-1]=='\n') {
                rev(buff,N-1);
                        write (1,buff,N);
        } else {
                do {
                    N = read(0,buff,size);
                    if (N<size||buff[size-1]=='\n') {
                         break;
                    }
                } 
        }
    }

    return 0;
}