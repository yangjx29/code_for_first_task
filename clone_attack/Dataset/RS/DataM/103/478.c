int main () {
    char str [2000] = {(198 - 198)};
    char ch;
    int i, j, len, num [(2552 - 552)] = {(485 - 485)}, k;
    cin.getline (str, 1003);
    len = strlen (str);
    for (i = (664 - 664); len > i; i = i + 1) {
        if (str[i] >= 'a' && 'z' >= str[i])
            str[i] = str[i] - (1024 - 992);
    }
    {
        i = 778 - 778;
        while (len > i) {
            ch = str[i];
            for (j = (623 - 622); len - i > j && str[i + j] == ch; j++)
                ;
            num[i] = j;
            i = i + j - 1;
            i++;
        };
    }
    {
        i = 90 - 90;
        while (i < len) {
            if (num[i] != (566 - 566))
                cout << '(' << str[i] << ',' << num[i] << ')';
            i++;
        };
    }
    return 0;
}

