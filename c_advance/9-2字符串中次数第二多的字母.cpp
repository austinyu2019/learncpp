#include <iostream>
#include <cctype>
using namespace std;

struct Alphabet
{
	char letter;  // 字母，不区分大小写
	int fisrtShowIndex;  // 第一次出现的index
	int count;  // 字母出现的次数
	bool show; // 字母是否出现
};

int main()
{
	char str[500];
	cin.getline(str, 500);

	// 字母表初始化
	Alphabet alphabet[26];
	for (int i = 0; i < 26; i++)
	{
		//alphabet[i].letter = char(97 + i);
		//alphabet[i].fisrtShowIndex = -1;
		//alphabet[i].count = 0;
		alphabet[i] = { char(97 + i),0,0,false };
	}

	// 处理字符串
	for (int i = 0; str[i] != '\0'; i++)
	{
		str[i] = tolower(str[i]);
		if (isalpha(str[i]))
		{
			int index = str[i] - 'a';
			alphabet[index].count++;
			if (!alphabet[index].show)
			{
				alphabet[index].fisrtShowIndex = i;
				alphabet[index].show = true;
			}
		}
	}

	// 找出第二大且最先出现的字母
	Alphabet max = { 0,0,0 }, second = { 0,501,0 };
	for (int i = 0; i < 26; i++)
	{
		if (alphabet[i].count > max.count)
		{
			max = alphabet[i];
		}
	}
	for (int i = 0; i < 26; i++)
	{
		if (alphabet[i].show && alphabet[i].count < max.count)
		{
			if (alphabet[i].count > second.count)
			{
				second = alphabet[i];
			}
			else if (alphabet[i].count == second.count && alphabet[i].fisrtShowIndex < second.fisrtShowIndex)
			{
				second = alphabet[i];
			}
		}
	}
	cout << (char)toupper(second.letter) << '+' << second.letter << ':' << second.count << endl;
	return 0;
}
