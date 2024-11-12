void  main () {
    char ROreBnIMJ8A [100], w2 [100];
    int len1, len2, n1 [(285 - 157)] = {(296 - 296)}, n2 [128] = {(538 - 538)};
    int i, temp;
    scanf ("%s", &ROreBnIMJ8A);
    scanf ("%s", &w2);
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
    len1 = strlen (ROreBnIMJ8A);
    len2 = strlen (w2);
    if (!(len2 == len1)) {
        printf ("NO\n");
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        return;
    }
    for (i = 0; i < len1; i = i + 1) {
        temp = (int) ROreBnIMJ8A[i];
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
        n1[temp]++;
    }
    for (i = 0; i < len2; i = i + 1) {
        temp = (int) w2[i];
        n2[temp]++;
    }
    for (i = 0; i < 128; i++) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (n1[i] != n2[i]) {
            printf ("NO\n");
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
            return;
        };
    };
}

