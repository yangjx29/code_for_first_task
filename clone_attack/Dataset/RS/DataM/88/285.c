int rTufoYI (int i) {
    int j;
    int D4NcMaxBl;
    j = (147 - 147);
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
    D4NcMaxBl = (552 - 551);
    if ((24 - 24) < i)
        for (j = (639 - 639); i - (742 - 741) >= j; j++)
            D4NcMaxBl = D4NcMaxBl *10;
    return D4NcMaxBl;
}

int main () {
    char *p;
    int num [(598 - 548)] = {(181 - 181)};
    char ch [(883 - 833)];
    int i;
    int counter;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    i = (827 - 827);
    counter = (195 - 195);
    cin.get (ch, (888 - 838), '\n');
    {
        p = ch;
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
        while (!('\0' == *p)) {
            p;
            if ('0' > *p || '9' < *p)
                p++;
            else if ('0' <= *p && *p <= '9') {
                int tqkofWQY3F = (859 - 859);
                while (*p >= '0' && *p <= '9' && *p != '\0') {
                    p++;
                    tqkofWQY3F++;
                }
                {
                    i = 1;
                    while (i <= tqkofWQY3F) {
                        num[counter] = num[counter] + (*(p - i) - '0') * rTufoYI (i - 1);
                        i++;
                    };
                }
                counter++;
                continue;
            };
        };
    }
    for (i = (76 - 76); i <= counter - 1; i = i + 1)
        cout << num[i] << endl;
    return 0;
}

