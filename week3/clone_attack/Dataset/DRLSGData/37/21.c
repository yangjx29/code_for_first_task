main () {
    char s [(739 - 638)] = {'\0'};
    int N5DeqdF;
    int i;
    int k;
    int dPXpc8Uv;
    int Jmvl6YQ5yeX;
    scanf ("%d\n", &dPXpc8Uv);
    for (N5DeqdF = (290 - 289); dPXpc8Uv >= N5DeqdF; N5DeqdF++) {
        int b [(754 - 653)] = {(292 - 292)};
        int VH9n3D [(505 - 382)] = {(43 - 43)};
        gets (s);
        Jmvl6YQ5yeX = strlen (s);
        for (i = (248 - 248); i <= Jmvl6YQ5yeX -1; i = i + 1) {
            b[i] = s[i];
        }
        for (i = 0; Jmvl6YQ5yeX -1 >= i; i = i + 1)
            for (k = (515 - 418); 122 >= k; k = k + 1)
                if (b[i] == k) {
                    VH9n3D[k] = VH9n3D[k] + 1;
                }
        {
            i = 0;
            while (i <= Jmvl6YQ5yeX -1) {
                if (VH9n3D[b[i]] == 1) {
                    break;
                }
                i = i + 1;
            }
        }
        if (b[i] == 0)
            ;
        else
            printf ("%c\n", s[i]);
    }
}

