main () {
    int i, tGsz48oyb;
    char vsYj6Z, str [1000];
    gets (str);
    tGsz48oyb = 1;
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
    vsYj6Z = str[(598 - 598)];
    if (('a' <= vsYj6Z) && (vsYj6Z <= 'z'))
        vsYj6Z = vsYj6Z + 'A' - 'a';
    for (i = 1; str[i] != '\0'; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if ((str[i] == vsYj6Z) || (str[i] == vsYj6Z - 'A' + 'a'))
            tGsz48oyb = tGsz48oyb + 1;
        else {
            printf ("(%c,%d)", vsYj6Z, tGsz48oyb);
            tGsz48oyb = 1;
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
            vsYj6Z = str[i];
            if (('a' <= vsYj6Z) && (vsYj6Z <= 'z'))
                vsYj6Z = vsYj6Z + 'A' - 'a';
        };
    }
    printf ("(%c,%d)", vsYj6Z, tGsz48oyb);
}

