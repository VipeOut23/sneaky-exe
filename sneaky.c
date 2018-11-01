/* crack */
/* sip */
#include <stdio.h>
#include <Windows.h>

int main()
{
	FILE *fp;
	char name[150];
	TCHAR infoBuf[150];
	DWORD bufCharCount = 150;
	
	fp = fopen("WAIT_WHAT.txt", "w");
	
	memset(name, 0, 150);
	if( GetUserName( infoBuf, &bufCharCount ) )
		for(int i=0; i<150; i++)
			name[i] = infoBuf[i];
	else
		strcpy(name, "Unknown_User");
	
	fprintf(fp, "Henlo, %s!\n\nSee: https://github.com/VipeOut23/sneaky-exe", name);
	
	fclose(fp);
	
	return 0;
}
