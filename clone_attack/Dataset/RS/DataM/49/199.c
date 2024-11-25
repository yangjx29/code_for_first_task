int main () {
    int i;
    int j;
    int k;
    int S5AaMStxU;
    int XkocPw;
    char str [500];
    cin.getline (str, 500);
    XkocPw = strlen (str);
    {
        i = 908 - 906;
        while (i <= XkocPw) {
            {
                j = 0;
                while (j <= XkocPw -i) {
                    for (k = j; k < j + i / 2; k = k + 1) {
                        if (str[k] != str[2 * j + i - k - 1]) {
                            break;
                        };
                    }
                    if (k == j + i / 2) {
                        for (S5AaMStxU = j; S5AaMStxU < j + i; S5AaMStxU = S5AaMStxU +1)
                            cout << str[S5AaMStxU];
                        cout << endl;
                    }
                    j++;
                };
            }
            i = i + 1;
        };
    }
    return 0;
}

