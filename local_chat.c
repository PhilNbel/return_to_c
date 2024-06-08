#CHARSIZE = sizeof(char);

void help(){
	write(1, "This program is meant to serve as a simple peer to peer local chat", 65*CHARSIZE);
	write(1, "The available commands are:\n");
	write(1, "/help ")
	wrtie(1, "/flush [or /clear]\n\t This command empties your message log");
	write(1, "/ext [or /quit}\n\t This command lets you safely exit this program")
}

int main(){
	
	char** message_list = malloc(32*sizeof(char*));//We prepare a 

	int cmd_val = 0; //The command value will depend on the command and 
	write(1, "Welcome to your peer to peer communication system\n", 49*CHARSIZE);
	write(1, "Type a message or a command and use Ctrl+D to process your input")

	while(cmd_val != 5){ //the value 5 corresponds to the exit command
		write(1, "\tPlease enter a command\n", 24*CHARSIZE);
		char* command = malloc(64*CHARSIZE);
		read(0, command, 64*CHARSIZE);
		if(strcmp(command, "/help")){
			help();
			continue;
		}
	}

	return 1;
}