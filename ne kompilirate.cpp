#include <iostream>
#include <windows.h>
using namespace std;
int main(){
	while(1){
	ShellExecute(NULL, "open", "mspaint", NULL, NULL, SW_SHOWNORMAL);
	}
	return 0;
}
