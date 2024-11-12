void  main () {
    char a [100] [20], Mq0SY3J [100] [20], temp1 [4], KAhRKuVcPODL [3];
    int jE2RxCqS0fkY;
    int i;
    int n;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%d", &n);
    {
        i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n >= i) {
            scanf ("%s", a[i]);
            i = i + 1;
        };
    }
    {
        i = 1;
        while (n >= i) {
            jE2RxCqS0fkY = strlen (a[i]);
            temp1[(383 - 383)] = a[i][jE2RxCqS0fkY - 3];
            temp1[1] = a[i][jE2RxCqS0fkY - 2];
            temp1[2] = a[i][jE2RxCqS0fkY - 1];
            KAhRKuVcPODL[(788 - 788)] = a[i][jE2RxCqS0fkY - 2];
            temp1[3] = '\0';
            KAhRKuVcPODL[1] = a[i][jE2RxCqS0fkY - 1];
            KAhRKuVcPODL[2] = '\0';
            if ((strcmp (KAhRKuVcPODL, "er") == 0) || (strcmp (KAhRKuVcPODL, "ly") == 0)) {
                strncpy (Mq0SY3J[i], a[i], jE2RxCqS0fkY - 2);
                Mq0SY3J[i][jE2RxCqS0fkY - 2] = '\0';
            }
            else {
                if (strcmp (temp1, "ing") == 0) {
                    strncpy (Mq0SY3J[i], a[i], jE2RxCqS0fkY - 3);
                    Mq0SY3J[i][jE2RxCqS0fkY - 3] = '\0';
                }
                else
                    strcpy (Mq0SY3J[i], a[i]);
            }
            printf ("%s\n", Mq0SY3J[i]);
            i++;
        };
    };
}

