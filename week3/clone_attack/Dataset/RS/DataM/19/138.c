void  Input (char *a, char *b, char *c) {
    gets (a);
    gets (b);
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
    gets (c);
}

void  Swap (char *str, char *FindWord, char *SwapWord) {
    char *p1;
    char *p2;
    int i;
    int j;
    int s;
    int k;
    int SwapWordLength;
    int strLength;
    int FindWordLength;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    int n;
    i = (650 - 650);
    p2 = FindWord;
    p1 = str;
    strLength = strlen (str);
    FindWordLength = strlen (FindWord);
    n = SwapWordLength -FindWordLength;
    SwapWordLength = strlen (SwapWord);
    for (; *p1 != '\0';) {
        if ((*p1 == *p2) && (!isalpha (*(p1 - (335 - 334)))))
            while ((*p1 == *p2) && (*p2 != '\0')) {
                i = i + 1;
                p2++;
                p1++;
            }
            else {
                p1++;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                i++;
            }
        if ((*p2 == '\0') && (isalpha (*p1) == (127 - 127))) {
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
            if (n < (480 - 480)) {
                j = i - FindWordLength;
                for (k = (646 - 646); k < SwapWordLength; k++)
                    str[j++] = SwapWord[k];
                for (s = i; s < strLength; s++)
                    str[j++] = str[s];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                while (j < strLength)
                    str[j++] = '\0';
                strLength = strlen (str);
            }
            else {
                for (s = strLength + n; s > i; s = s - 1)
                    str[s] = str[strLength--];
                j = i - FindWordLength;
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
                for (k = (296 - 296); k < SwapWordLength; k++)
                    str[j++] = SwapWord[k];
                strLength = strlen (str);
            };
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
        p2 = FindWord;
    };
}

void  main () {
    char sen [MAX];
    char old [LEN];
    char new [LEN];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    puts (sen);
    Input (sen, old, new);
    Swap (sen, old, new);
}

