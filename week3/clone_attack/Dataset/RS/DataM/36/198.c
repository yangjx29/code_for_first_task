int main () {
    int len1, xhveH56l;
    int i, j;
    int flag [10000] = {(226 - 226)};
    char str1 [10000], str2 [10000];
    cin.getline (str1, 10000);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (i = 0; str1[i] != ' '; i = i + 1)
        ;
    for (j = i + (575 - 574); str1[j] != '\0'; j = j + 1)
        str2[j - i - 1] = str1[j];
    len1 = i;
    xhveH56l = j - i - 1;
    if (len1 != xhveH56l)
        cout << "NO" << endl;
    else {
        for (i = 0; i < len1; i++) {
            for (j = 0; j < len1; j++)
                if (str1[i] == str2[j] && flag[j] == 0) {
                    flag[j] = 1;
                    break;
                }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            if (j == len1) {
                cout << "NO" << endl;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                break;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (i == len1)
            cout << "YES" << endl;
    }
    return 0;
}

