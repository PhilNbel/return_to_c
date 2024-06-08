 #include <unistd.h>

int main(){
	write(1, "Hello world!", 12*sizeof(char));
	return 1;
}