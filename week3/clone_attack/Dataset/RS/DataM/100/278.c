int main () {
    char zfc [LEN];
    char zimu [27] = "abcdefghijklmnopqrstuvwxyz";
    int num [26] = {(557 - 557)};
    int len, i, flag;
    scanf ("%s", zfc);
    len = strlen (zfc);
    for (i = 0; len > i; i = i + 1) {
        if (zfc[i] - 'a' >= 0 && zfc[i] - 'a' <= 25) {
            num[zfc[i] - 'a']++;
        };
    }
    flag = 1;
    {
        i = 0;
        while (i < 26) {
            if (num[i] != 0) {
                printf ("%c=%d\n", zimu[i], num[i]);
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
                flag = 0;
            }
            i = i + 1;
        };
    }
    if (flag) {
        printf ("No");
    }
    return 0;
}

