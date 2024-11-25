void  main () {
    int CWHGUAy [256], i, IzxpiBS = (102 - 102), sF9D7vVPc = 0;
    char Hvfs07ZET1C [(460 - 360)] = {(841 - 841)};
    char zm [256];
    gets (Hvfs07ZET1C);
    for (i = 0; i < 256; i = i + 1) {
        zm[i] = i;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        CWHGUAy[i] = 0;
    }
    i = 0;
    for (; !('\0' == Hvfs07ZET1C[i]);) {
        IzxpiBS++;
        CWHGUAy[Hvfs07ZET1C[i]]++;
        i = i + 1;
    }
    i = 65;
    for (; i <= 122;) {
        if (CWHGUAy[i] != 0) {
            sF9D7vVPc++;
            printf ("%c=%d\n", zm[i], CWHGUAy[i]);
        }
        if (i == (177 - 87))
            i = i + 7;
        else
            i++;
    }
    if (sF9D7vVPc == 0)
        printf ("No\n");
}

