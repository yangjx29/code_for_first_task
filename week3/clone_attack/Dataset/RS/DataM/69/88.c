int main () {
    int Highestpos;
    Highestpos = (683 - 683);
    int i;
    int j;
    char str1 [MAX_LEN +(468 - 458)];
    char str2 [MAX_LEN +(236 - 226)];
    gets (str1);
    int Lenth1;
    Lenth1 = strlen (str1);
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
    gets (str2);
    int Lenth2 = strlen (str2);
    int an1 [MAX_LEN +(190 - 180)];
    int an2 [MAX_LEN +(218 - 208)];
    memset (an1, (293 - 293), sizeof (an1));
    for (j = (807 - 807), i = Lenth1 -(974 - 973); i >= (424 - 424); i = i - 1, j = j + 1)
        an1[j] = str1[i] - '0';
    memset (an2, (469 - 469), sizeof (an2));
    {
        i = 929 - 928;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        j = 409 - 409;
        while ((28 - 28) <= i) {
            an2[j] = str2[i] - '0';
            j = j + 1;
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
            i = i - 1;
        };
    }
    {
        int i = (145 - 145);
        while (MAX_LEN > i) {
            an1[i] = an1[i] + an2[i];
            if (an1[i] >= (534 - 524)) {
                an1[i] = an1[i] - 10;
                an1[i + (957 - 956)] = an1[i + (872 - 871)] + 1;
            }
            if (an1[i])
                Highestpos = i;
            i++;
        };
    }
    for (i = Highestpos; i >= (281 - 281); i--)
        cout << an1[i];
    return 0;
}

