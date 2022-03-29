/*
用scanf可以将字符串读入字符数组
scanf会自动添加结尾的'\0'
scanf读入到空格为止
char line[100];
scanf("%s",line); //注意，不是 &line
printf("%s",line);
*/

/*
在数组长度不足的情况下，scanf可能导致数组越界
char line[5];
scanf("%s",line); 
若输入"12345"，则数组越界！
cin输入字符串的情况和scanf相同
char line[5];
cin >> line; //若输入"12345"，则数组越界！
*/

/*
char line[10];
cin.getline(line, sizeof(line));
//或 cin.getline(line,10); 读入最多9个字符到 line
cout << line;
*/

/*
gets(char buf[]); 
读入一行，自动添加'\0'
回车换行符不会写入buf,但是会从输入流中去掉。可能导致数组越界！
char s[10];
while( gets(s) ) {
printf("%s\n",s);
}
*/
