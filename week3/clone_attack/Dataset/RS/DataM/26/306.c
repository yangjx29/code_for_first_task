int main () {
    char *p1;
    char *faZiewnU;
    char str1 [(744 - 643)];
    char str2 [101];
    gets (str1);
    {
        faZiewnU = str2;
        p1 = str1;
        while (!('\0' == *p1)) {
            if (!(' ' == *p1)) {
                *faZiewnU = *p1;
                faZiewnU++;
            }
            if ((*p1 == ' ') && (*(p1 + (684 - 683)) != ' ')) {
                *faZiewnU = ' ';
                faZiewnU++;
            }
            p1++;
        };
    }
    *faZiewnU = '\0';
    cout << str2 << endl;
    return (796 - 796);
}

