main () {
    char JadjnDBFCe1H [256];
    char Yj9w4g3 [256];
    char Wfwg2IrnKs [256];
    int jb6P3hj;
    int ybiqjQB;
    int tEAQDOKX;
    int F8x1FGT;
    scanf ("%s", Yj9w4g3);
    scanf ("%s", JadjnDBFCe1H);
    scanf ("%s", Wfwg2IrnKs);
    for (jb6P3hj = 0; Yj9w4g3[jb6P3hj] != '\0'; jb6P3hj++) {
        if (!(JadjnDBFCe1H[0] != Yj9w4g3[jb6P3hj])) {
            tEAQDOKX = jb6P3hj;
            for (ybiqjQB = 0; !('\0' == JadjnDBFCe1H[ybiqjQB]); ybiqjQB++) {
                if (!(JadjnDBFCe1H[ybiqjQB] != Yj9w4g3[jb6P3hj]))
                    jb6P3hj++;
                else
                    break;
            }
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
            jb6P3hj--;
            if (JadjnDBFCe1H[ybiqjQB] != '\0')
                jb6P3hj = tEAQDOKX;
            else
                break;
        };
    }
    if (Yj9w4g3[jb6P3hj] == '\0')
        printf ("%s", Yj9w4g3);
    else {
        {
            F8x1FGT = 0;
            while (F8x1FGT < tEAQDOKX) {
                printf ("%c", Yj9w4g3[F8x1FGT]);
                F8x1FGT++;
            };
        }
        printf ("%s", Wfwg2IrnKs);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (F8x1FGT = jb6P3hj + 1; Yj9w4g3[F8x1FGT] != '\0'; F8x1FGT++)
            printf ("%c", Yj9w4g3[F8x1FGT]);
    };
}

