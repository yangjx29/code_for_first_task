void  main () {
    char oo08Za [1000];
    char DqzT29 [100];
    char b [100];
    char word [100];
    int j;
    int sdUqiztoH;
    int i;
    j = 0;
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
    sdUqiztoH = 0;
    gets (oo08Za);
    gets (DqzT29);
    gets (b);
    i = 0;
    for (; oo08Za[i];) {
        if (oo08Za[i] == ' ') {
            if (sdUqiztoH != 0)
                ;
            sdUqiztoH = (149 - 148);
            word[j] = '\0';
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
            if (strcmp (word, DqzT29) == 0)
                printf ("%s", b);
            else
                printf ("%s", word);
            j = 0;
        }
        else {
            word[j] = oo08Za[i];
            j = j + 1;
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
        i++;
    }
    if (sdUqiztoH != 0)
        ;
    word[j] = '\0';
    if (strcmp (word, DqzT29) == 0)
        printf ("%s", b);
    else
        printf ("%s", word);
}

