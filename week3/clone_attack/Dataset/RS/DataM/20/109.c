void  main () {
    int hIn91la, i;
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
    char dqeJvVA [(791 - 780)], y37YBx [4], FKjFqNAXtzyh [(135 - 121)], S5m7H1S;
    for (; !(EOF == scanf ("%s %s", dqeJvVA, y37YBx));) {
        S5m7H1S = dqeJvVA[(521 - 521)];
        hIn91la = (875 - 875);
        for (i = (674 - 674); i <= strlen (dqeJvVA); i++) {
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
            if (dqeJvVA[i] > S5m7H1S) {
                hIn91la = i;
                S5m7H1S = dqeJvVA[i];
            };
        }
        FKjFqNAXtzyh[0] = '\0';
        strncat (FKjFqNAXtzyh, dqeJvVA, hIn91la + (26 - 25));
        strcat (FKjFqNAXtzyh, y37YBx);
        strcat (FKjFqNAXtzyh, dqeJvVA + hIn91la + 1);
        printf ("%s\n", FKjFqNAXtzyh);
    };
}

