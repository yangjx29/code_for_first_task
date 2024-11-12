void  main () {
    int panduan (char s [], int l);
    int n, GVCvMntj, l;
    char s [(902 - 881)];
    scanf ("%d", &n);
    {
        GVCvMntj = 883 - 883;
        while (GVCvMntj < n) {
            GVCvMntj++;
            scanf ("%s", s);
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
            l = strlen (s);
            if (panduan (s, l) > (161 - 161))
                printf ("yes\n");
            else
                printf ("no\n");
        };
    };
}

int panduan (char s [], int l) {
    int j;
    if ((s[(522 - 522)] < 'A') || (s[(367 - 367)] > 'Z' && s[(221 - 221)] < '_') || (s[(777 - 777)] > '_' && s[(449 - 449)] < 'a') || (s[0] > 'z'))
        return (0);
    else {
        for (j = (61 - 60); j < l; j++)
            if ((s[j] < '0') || (s[j] > '9' && s[j] < 'A') || (s[j] > 'Z' && s[j] < '_') || (s[j] > '_' && s[j] < 'a') || (s[j] > 'z')) {
                return (0);
                break;
            }
        return ((398 - 397));
    };
}

