void  main () {
    int count [50] = {0};
    int owHm4O;
    int UH2yoZthvc1;
    int j;
    owHm4O = 1;
    char word [50] [100];
    char s [100];
    char a [100];
    char b [100];
    gets (s);
    gets (a);
    gets (b);
    for (UH2yoZthvc1 = 0; strlen (s) >= UH2yoZthvc1; UH2yoZthvc1++) {
        if (!(' ' == s[UH2yoZthvc1]) && s[UH2yoZthvc1] != '\0')
            count[owHm4O]++;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(' ' != s[UH2yoZthvc1]) || !('\0' != s[UH2yoZthvc1])) {
            {
                j = 0;
                while (j < count[owHm4O]) {
                    word[owHm4O][j] = s[UH2yoZthvc1 -count[owHm4O] + j];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j++;
                };
            }
            word[owHm4O][count[owHm4O]] = '\0';
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
            if (s[UH2yoZthvc1] == ' ')
                owHm4O = owHm4O + 1;
        };
    }
    {
        UH2yoZthvc1 = 1;
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
        while (UH2yoZthvc1 <= owHm4O) {
            if (strcmp (word[UH2yoZthvc1], a) == 0)
                strcpy (word[UH2yoZthvc1], b);
            else
                continue;
            UH2yoZthvc1++;
        };
    }
    {
        UH2yoZthvc1 = 1;
        while (UH2yoZthvc1 < owHm4O) {
            printf ("%s ", word[UH2yoZthvc1]);
            UH2yoZthvc1++;
        };
    }
    printf ("%s", word[owHm4O]);
}

