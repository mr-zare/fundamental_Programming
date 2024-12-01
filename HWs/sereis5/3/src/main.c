#include <stdio.h>
#include <string.h>
int main()
{
	int i;
	FILE *a,  *b;
	a=fopen("input.txt","r");
	b=fopen("out.txt","a");
	char line[100];
	while (fgets(line,sizeof line,(FILE*)a)!=NULL)
	{
		for ( i = 0; i <strlen(line); i++)
		{
			if (line[i]=='a' ||line[i]=='A')
			{
				fprintf(b,"%s",".-  ");
			}
			if (line[i] == 'b' || line[i] == 'B')
			{
				fprintf(b,"%s","-... ");
			}
			if (line[i] == 'c' || line[i] == 'C')
			{
				fprintf(b,"%s","-.-. ");
			}
			if (line[i] == 'd' || line[i] == 'D')
			{
				fprintf(b,"%s","-.. ");
			}
			if (line[i] == 'e' || line[i] == 'E')
			{
				fprintf(b,"%s",". ");
			}
			if (line[i] == 'f' || line[i] == 'F')
			{
				fprintf(b,"%s","..-. ");
			}
			if (line[i] == 'g' || line[i] == 'G')
			{
				fprintf(b,"%s","--. ");
			}
			if (line[i] == 'h' || line[i] == 'H')
			{
				fprintf(b,"%s",".... ");
			}
			if (line[i] == 'i' || line[i] == 'I')
			{
				fprintf(b,"%s",".. ");
			}
			if (line[i] == 'j' || line[i] == 'J')
			{
				fprintf(b,"%s",".--- ");
			}
			if (line[i] == 'k' || line[i] == 'K')
			{
				fprintf(b,"%s","-.- ");
			}
			if (line[i] == 'l' || line[i] == 'L')
			{
				fprintf(b,"%s",".-.. ");
			}
			if (line[i] == 'm' || line[i] == 'M')
			{
				fprintf(b,"%s","-- ");
			}
			if (line[i] == 'n' || line[i] == 'N')
			{
				fprintf(b,"%s","-. ");
			}
			if (line[i] == 'o' || line[i] == 'O')
			{
				fprintf(b,"%s","--- ");
			}
			if (line[i] == 'p' || line[i] == 'P')
			{
				fprintf(b,"%s",".--. ");
			}
			if (line[i] == 'q' || line[i] == 'Q')
			{
				fprintf(b, "--.- ");
			}
			if (line[i] == 'r' || line[i] == 'R')
			{
				fprintf(b,"%s",".-. ");
			}
			if (line[i] == 's' || line[i] == 'S')
			{
				fprintf(b,"%s","... ");
			}
			if (line[i] == 't' || line[i] == 'T')
			{
				fprintf(b, "- ");
			}
			if (line[i] == 'u' || line[i] == 'U')
			{
				fprintf(b,"%s","..- ");
			}
			if (line[i] == 'v' || line[i] == 'V')
			{
				fprintf(b,"%s","...- ");
			}
			if (line[i] == 'w' || line[i] == 'W')
			{
				fprintf(b,"%s",".-- ");
			}
			if (line[i] == 'x' || line[i] == 'X')
			{
				fprintf(b,"%s","-..- ");
			}
			if (line[i] == 'y' || line[i] == 'Y')
			{
				fprintf(b,"%s","-.-- ");
			}
			if (line[i] == 'z' || line[i] == 'Z')
			{
				fprintf(b,"%s","--.. ");
			}
			if (line[i] == '1')
			{
				fprintf(b,"%s",".---- ");
			}
			if (line[i] == '2' )
			{
				fprintf(b,"%s","..--- ");
			}
			if (line[i] =='3')
			{
				fprintf(b,"%s","...-- ");
			}
			if (line[i] == '4')
			{
				fprintf(b,"%s","....- ");
			}
			if (line[i] == '5')
			{
				fprintf(b,"%s","..... ");
			}
			if (line[i] == '6')
			{
				fprintf(b,"%s","-.... ");
			}
			if (line[i] == '7');
			{
				fprintf(b,"%s","--... ");
			}
			if (line[i] == '8')
			{
				fprintf(b,"%s","---.. ");
			}
			if (line[i] == '9')
			{
				fprintf(b,"%s","----. ");
			}
			if (line[i] =='0')
			{
				fprintf(b,"%s","----- ");
			}
			if (line[i] == ':')
			{
				fprintf(b,"%s","-..-- ");
			}
			if (line[i] == '-')
			{
				fprintf(b,"%s","-....- ");
			}
			if (line[i] == '.')
			{
				fprintf(b,"%s",".-.-.- ");
			}
			if (line[i] == '?')
			{
				fprintf(b,"%s","..--.. ");
			}
			if (line[i] == '/')
			{
				fprintf(b,"%s","-..-. ");
			}
			if (line[i] == '(')
			{
				fprintf(b,"%s","-.--. ");
			}
			if (line[i] == ')')
			{
				fprintf(b,"%s","-.--.- ");
			}
			if (line[i] == ' ')
			{
				fprintf(b,"%s","/");
			}
		}
		fprintf(b,"\n");
	}
	
	return (0);
}