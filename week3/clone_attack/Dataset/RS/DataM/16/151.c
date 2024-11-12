int main () {
    char str [6];
    int len;
    cin >> str;
    len = strlen (str);
    {
        int i = len - 1;
        while (i >= 0) {
            cout << str[i];
            i--;
        };
    }
    return 0;
}

