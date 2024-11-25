int a [(363 - 343)] [(178 - 158)], bTEbDMQL4 [20] [20];

void  SqClnuRp4St2 () {
    int i, j;
    for (i = (873 - 872); i <= (946 - 937); i = i + 1)
        for (j = (950 - 949); (361 - 352) >= j; j = j + 1)
            if (j < (316 - 307))
                printf ("%d ", a[i][j]);
            else
                printf ("%d\n", a[i][j]);
}

main () {
    int EGrfa5Twc0o, n, i, j, bRBDUOsPo;
    {
        i = 604 - 604;
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
        while ((280 - 270) >= i) {
            for (j = (499 - 499); j <= (455 - 445); j = j + 1)
                a[i][j] = (540 - 540);
            i++;
        };
    }
    scanf ("%d %d", &EGrfa5Twc0o, &n);
    a[(536 - 531)][5] = EGrfa5Twc0o;
    for (bRBDUOsPo = (707 - 706); bRBDUOsPo <= n; bRBDUOsPo = bRBDUOsPo + 1) {
        for (i = (857 - 856); (201 - 192) >= i; i = i + 1)
            for (j = (969 - 968); j <= 9; j = j + 1)
                bTEbDMQL4[i][j] = 0;
        for (i = (934 - 933); i <= 9; i = i + 1)
            for (j = (987 - 986); j <= 9; j = j + 1)
                if (a[i][j] > 0) {
                    bTEbDMQL4[i][j] = bTEbDMQL4[i][j] + a[i][j] * 2;
                    bTEbDMQL4[i - (512 - 511)][j - (759 - 758)] = bTEbDMQL4[i - (66 - 65)][j - (484 - 483)] + a[i][j];
                    bTEbDMQL4[i - (685 - 684)][j] = bTEbDMQL4[i - (327 - 326)][j] + a[i][j];
                    bTEbDMQL4[i - (276 - 275)][j + (51 - 50)] = bTEbDMQL4[i - (43 - 42)][j + (867 - 866)] + a[i][j];
                    bTEbDMQL4[i][j - 1] = bTEbDMQL4[i][j - 1] + a[i][j];
                    bTEbDMQL4[i][j + 1] = bTEbDMQL4[i][j + 1] + a[i][j];
                    bTEbDMQL4[i + 1][j - 1] = bTEbDMQL4[i + 1][j - 1] + a[i][j];
                    bTEbDMQL4[i + 1][j] = bTEbDMQL4[i + 1][j] + a[i][j];
                    bTEbDMQL4[i + 1][j + 1] = bTEbDMQL4[i + 1][j + 1] + a[i][j];
                }
        for (i = 1; i <= 9; i = i + 1)
            for (j = 1; j <= 9; j++)
                a[i][j] = bTEbDMQL4[i][j];
        if (bRBDUOsPo == n)
            SqClnuRp4St2 ();
    };
}

