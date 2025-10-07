#include <iostream>
#include <string>
int main()
{
	std::string str1;
	std::string str2;
	std::cin>>str1;
	std::cin>>str2;
	int state=0;
	for(int i=0;i<str1.length();i++)
	{
		if(str1[i]!=str2[i]&&(str1[i]!=str2[i]+32)&&(str1[i]!=str2[i]-32))
		{
			if(str1[i]>=97&&str2[i]>=97&&str1[i]<=122&&str2[i]<=122)
			{
				if(str1[i]>str2[i])
				{
					state=1;
				}
				else
				{
					state=-1;
				}
			}
			else if(str1[i]>=65&&str2[i]>=65&&str1[i]<=90&&str2[i]<=90)
			{
				if(str1[i]>str2[i])
				{
					state=1;
				}
				else
				{
					state=-1;
				}
			}
			else if(str1[i]>=65&&str2[i]>=97&&str1[i]<=90&&str2[i]<=122)
			{
				if(str1[i]>str2[i]-32)
				{
					state=1;
				}
				else state=-1;
			}
			else
			{
				if(str1[i]>str2[i]+32)
				{
					state=1;
				}
				else
				{
					state=-1;
				}
			}
			break;
		}
	}
	std::cout<<state;
	return 0;
}