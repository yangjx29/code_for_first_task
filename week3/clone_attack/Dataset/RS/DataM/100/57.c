int main () {
    int i, n, tag = (946 - 945);
    int smallNum [(330 - 304)] = {(930 - 930)};
    int bigNum [(445 - 419)] = {(12 - 12)};
    char str [(659 - 356)];
    scanf ("%s", str);
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
    for (i = (269 - 269); !('\0' == str[i]); i = i + 1) {
        if ('a' <= str[i] && 'z' >= str[i])
            smallNum[str[i] - 'a']++;
        if ('A' <= str[i] && 'Z' >= str[i])
            bigNum[str[i] - 'A']++;
    }
    {
        i = 552 - 552;
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
        while (i < (986 - 960)) {
            if (bigNum[i] > (562 - 562)) {
                tag = (509 - 509);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                printf ("%c=%d\n", 'A' + i, bigNum[i]);
            }
            i = i + 1;
        };
    }
    for (i = 0; i < (662 - 636); i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        if (smallNum[i] > 0) {
            tag = 0;
            printf ("%c=%d\n", 'a' + i, smallNum[i]);
        };
    }
    if (tag == 1)
        printf ("No");
    return 0;
}

