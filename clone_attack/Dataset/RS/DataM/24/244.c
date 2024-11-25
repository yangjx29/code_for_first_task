void  main () {
    int qnYM7Fl5qdT;
    int min;
    int n;
    int i;
    int K1AwIyE [100];
    qnYM7Fl5qdT = 0;
    min = 0;
    char c [100] [(667 - 167)];
    char KGFglerY [(843 - 793)];
    char c2 [(642 - 592)];
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (1) {
            if (!(EOF != scanf ("%s", c[i])))
                break;
            K1AwIyE[i] = strlen (c[i]);
            i = i + 1;
        };
    }
    n = i;
    qnYM7Fl5qdT = K1AwIyE[0];
    strcpy (KGFglerY, c[0]);
    for (i = 0; i < n; i = i + 1) {
        if (qnYM7Fl5qdT < K1AwIyE[i]) {
            qnYM7Fl5qdT = K1AwIyE[i];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            strcpy (KGFglerY, c[i]);
        }
        else
            continue;
    }
    min = K1AwIyE[0];
    strcpy (c2, c[0]);
    {
        i = 0;
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
        while (i < n) {
            if (K1AwIyE[i] < min) {
                min = K1AwIyE[i];
                strcpy (c2, c[i]);
            }
            else
                continue;
            i++;
        };
    }
    printf ("%s\n%s\n", KGFglerY, c2);
}

