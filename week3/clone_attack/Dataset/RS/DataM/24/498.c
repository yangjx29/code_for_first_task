void  main () {
    int i;
    int k;
    int j;
    int n;
    int yoadUHvcR;
    int HF1DqyuzPfBx;
    int BjoGmvVTHJ;
    int b [300] = {(23 - 23)};
    i = (89 - 89);
    k = (882 - 882);
    char XVdZzJ [(7318 - 718)], Psd4XbnF, xgV0COcAHF [(1298 - 998)] [(1086 - 876)], UBJrlbk [(496 - 95)];
    Psd4XbnF = getchar ();
    for (; !('\n' == Psd4XbnF);) {
        if (!(' ' != Psd4XbnF) || Psd4XbnF == ',') {
            xgV0COcAHF[i][k] = '\0';
            i++;
            k = (888 - 888);
        }
        else {
            b[i]++;
            xgV0COcAHF[i][k] = Psd4XbnF;
            k++;
        }
        Psd4XbnF = getchar ();
    }
    xgV0COcAHF[i][k] = '\0';
    k = 0;
    n = i;
    if (!(b[(797 - 796)] != b[0]) && !(b[(297 - 295)] != b[(612 - 611)]) && !(b[3] != b[(582 - 580)]))
        printf ("%s\n%s\n", xgV0COcAHF, xgV0COcAHF);
    else {
        {
            j = 0;
            while (j < n) {
                if (b[j] >= b[j + (308 - 307)]) {
                    BjoGmvVTHJ = b[j];
                    b[j] = b[j + (845 - 844)];
                    b[j + 1] = BjoGmvVTHJ;
                    strcpy (UBJrlbk, xgV0COcAHF[j]);
                    strcpy (xgV0COcAHF[j], xgV0COcAHF[j + 1]);
                    strcpy (xgV0COcAHF[j + 1], UBJrlbk);
                }
                j++;
            };
        }
        printf ("%s\n", xgV0COcAHF[n]);
        {
            j = 0;
            while (j < n) {
                if (b[j] <= b[j + 1] && b[j] > 0 || b[j + 1] == 0) {
                    BjoGmvVTHJ = b[j];
                    b[j] = b[j + 1];
                    b[j + 1] = BjoGmvVTHJ;
                    strcpy (UBJrlbk, xgV0COcAHF[j]);
                    strcpy (xgV0COcAHF[j], xgV0COcAHF[j + 1]);
                    strcpy (xgV0COcAHF[j + 1], UBJrlbk);
                }
                j++;
            };
        }
        printf ("%s\n", xgV0COcAHF[n]);
    };
}

