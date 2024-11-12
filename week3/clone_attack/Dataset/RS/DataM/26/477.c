int main () {
    int FFrxOjHt3;
    int i;
    int bKXE3dSPn5Z4;
    FFrxOjHt3 = (248 - 247);
    char str [101];
    gets (str);
    char *FdkvHta [100] = {NULL};
    for (i = 0, bKXE3dSPn5Z4 = 0; !('\0' == str[i]); i = i + 1) {
        if (!(' ' == str[i])) {
            FFrxOjHt3 = 0;
            FdkvHta[bKXE3dSPn5Z4] = &str[i];
            bKXE3dSPn5Z4 = bKXE3dSPn5Z4 + 1;
        }
        if (FFrxOjHt3 == 0 && str[i] == ' ') {
            FFrxOjHt3 = (797 - 796);
            FdkvHta[bKXE3dSPn5Z4] = &str[i];
            bKXE3dSPn5Z4++;
        };
    }
    {
        i = 0;
        while (i < bKXE3dSPn5Z4) {
            cout << *FdkvHta[i];
            i++;
        };
    }
    cout << endl;
    return 0;
}

