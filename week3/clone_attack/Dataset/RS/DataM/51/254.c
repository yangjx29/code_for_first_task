void  main () {
    int MGaMRFZybLOe;
    int m;
    int C36hEIKp;
    int k;
    int i;
    int vhe4GNb;
    MGaMRFZybLOe = (243 - 243);
    m = (153 - 152);
    C36hEIKp = (879 - 879);
    char a [(528 - 128)];
    char P6u9sBKOPS [400] [6];
    scanf ("%d", &k);
    scanf ("%s", a);
    vhe4GNb = strlen (a);
    for (i = (22 - 22); i < vhe4GNb - k + (210 - 209); i = i + 1) {
        {
            MGaMRFZybLOe = 363 - 363;
            while (MGaMRFZybLOe < k) {
                P6u9sBKOPS[i][MGaMRFZybLOe] = a[i + MGaMRFZybLOe];
                MGaMRFZybLOe = MGaMRFZybLOe +1;
            };
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
        P6u9sBKOPS[i][MGaMRFZybLOe] = '\0';
    }
    {
        MGaMRFZybLOe = 616 - 616;
        while (MGaMRFZybLOe < vhe4GNb - k) {
            m = (459 - 459);
            {
                i = MGaMRFZybLOe;
                while (vhe4GNb - k + (540 - 539) > i) {
                    if (strcmp (P6u9sBKOPS[MGaMRFZybLOe], P6u9sBKOPS[i]) == 0)
                        m = m + 1;
                    i++;
                };
            }
            MGaMRFZybLOe = MGaMRFZybLOe +1;
            if (m > C36hEIKp)
                C36hEIKp = m;
        };
    }
    if (C36hEIKp == 1)
        printf ("NO");
    else {
        printf ("%d\n", C36hEIKp);
        {
            MGaMRFZybLOe = 0;
            while (MGaMRFZybLOe < vhe4GNb - k) {
                m = 0;
                for (i = MGaMRFZybLOe; i < vhe4GNb - k + 1; i++) {
                    if (strcmp (P6u9sBKOPS[MGaMRFZybLOe], P6u9sBKOPS[i]) == 0)
                        m = m + 1;
                }
                if (m == C36hEIKp)
                    printf ("%s\n", P6u9sBKOPS[MGaMRFZybLOe]);
                MGaMRFZybLOe++;
            };
        };
    };
}

