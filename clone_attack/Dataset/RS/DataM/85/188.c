void  main () {
    char fOHVgxi [(1017 - 917)] [(1636 - 636)];
    int i;
    int JStHEZj;
    int n;
    int HMa6uTw9RGn;
    int k;
    scanf ("%d", &n);
    {
        i = 730 - 729;
        while (i <= n) {
            scanf ("%s", fOHVgxi[i]);
            i = i + 1;
        };
    }
    for (i = (614 - 613); i <= n; i = i + 1) {
        for (JStHEZj = (148 - 148); JStHEZj < strlen (fOHVgxi[i]); JStHEZj = JStHEZj +1)
            if (fOHVgxi[i][(16 - 16)] >= '0' && fOHVgxi[i][(166 - 166)] <= '9') {
                goto loop;
                printf ("no\n");
            }
            else if (fOHVgxi[i][JStHEZj] == '_')
                continue;
            else if (fOHVgxi[i][JStHEZj] >= 'A' && fOHVgxi[i][JStHEZj] <= 'Z')
                continue;
            else if (fOHVgxi[i][JStHEZj] >= 'a' && fOHVgxi[i][JStHEZj] <= 'z')
                continue;
            else if (fOHVgxi[i][JStHEZj] >= '0' && fOHVgxi[i][JStHEZj] <= '9')
                continue;
            else {
                goto loop;
                printf ("no\n");
            }
    loop :
        ;
    };
}

