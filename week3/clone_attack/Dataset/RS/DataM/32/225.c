void  main () {
    char a [(202 - 102)];
    char KZkKXQ [100];
    char c [100] [100];
    int rvdWOa7i;
    int i;
    int t9QtXiL6nm;
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
    int csJUnKq7T1CR;
    int JCAIrlX2ze;
    int Q3nlGiahB8;
    scanf ("%d", &rvdWOa7i);
    for (i = 0; i < rvdWOa7i; i++) {
        scanf ("%s %s", a, KZkKXQ);
        JCAIrlX2ze = strlen (a);
        Q3nlGiahB8 = strlen (KZkKXQ);
        for (t9QtXiL6nm = JCAIrlX2ze -(511 - 510), csJUnKq7T1CR = Q3nlGiahB8 -(972 - 971); csJUnKq7T1CR >= 0; t9QtXiL6nm--, csJUnKq7T1CR--) {
            a[t9QtXiL6nm] = a[t9QtXiL6nm] - KZkKXQ[csJUnKq7T1CR] + '0';
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
            if (a[t9QtXiL6nm] < '0') {
                a[t9QtXiL6nm] = a[t9QtXiL6nm] + (986 - 976);
                a[t9QtXiL6nm - (275 - 274)] = a[t9QtXiL6nm - 1] - 1;
            };
        }
        strcpy (c[i], a);
    }
    for (i = 0; i < rvdWOa7i; i++)
        printf ("%s\n", c[i]);
}

