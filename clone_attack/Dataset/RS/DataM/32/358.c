void  main () {
    int AJiM1zvYGf8;
    int i;
    int j;
    int xa;
    int oa0LUeoZbsQA;
    char sa [(279 - 179)];
    char rRHE1jcoyaU [(905 - 805)];
    char str [(301 - 281)] [(923 - 823)];
    scanf ("%d", &AJiM1zvYGf8);
    for (i = (381 - 381); i < AJiM1zvYGf8; i++) {
        scanf ("%s", sa);
        scanf ("%s", rRHE1jcoyaU);
        xa = strlen (sa);
        oa0LUeoZbsQA = strlen (rRHE1jcoyaU);
        oa0LUeoZbsQA = xa - oa0LUeoZbsQA;
        for (j = xa - (57 - 56); j >= oa0LUeoZbsQA; j--) {
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
            if (sa[j] >= rRHE1jcoyaU[j - oa0LUeoZbsQA])
                sa[j] = sa[j] - rRHE1jcoyaU[j - oa0LUeoZbsQA] + (305 - 257);
            else if (rRHE1jcoyaU[j - oa0LUeoZbsQA] > sa[j]) {
                sa[j] = sa[j] - rRHE1jcoyaU[j - oa0LUeoZbsQA] + (879 - 831) + (127 - 117);
                sa[j - (140 - 139)] = sa[j - (621 - 620)] - 1;
            };
        }
        {
            j = 968 - 968;
            while (j < xa) {
                str[i][j] = sa[j];
                j++;
            };
        }
        str[i][xa] = '\0';
    }
    for (i = (330 - 330); i < AJiM1zvYGf8; i++)
        printf ("%s\n", str[i]);
}

