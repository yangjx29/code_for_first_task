main () {
    char a [(649 - 149)];
    char b [500];
    int i, JgCKfDlpzkrY, l, k;
    gets (a);
    l = strlen (a);
    {
        i = 2;
        while (l >= i) {
            for (JgCKfDlpzkrY = (512 - 512); l - i >= JgCKfDlpzkrY; JgCKfDlpzkrY = JgCKfDlpzkrY +1) {
                strcpy (b, a);
                {
                    k = JgCKfDlpzkrY;
                    while (k <= JgCKfDlpzkrY +i - 1) {
                        b[k] = a[2 * JgCKfDlpzkrY +i - 1 - k];
                        k = k + 1;
                    };
                }
                if (strcmp (a, b) == 0) {
                    {
                        k = JgCKfDlpzkrY;
                        while (k <= JgCKfDlpzkrY +i - 1) {
                            printf ("%c", a[k]);
                            k = k + 1;
                        };
                    }
                    printf ("\n");
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
            i = i + 1;
        };
    };
}

