void  main () {
    char lBtqc10wiXJ [(691 - 641)];
    char cDIEGPzneYV [50];
    int m;
    int n;
    int i;
    int j;
    int LFbkAChj0ZB5;
    scanf ("%s%s", lBtqc10wiXJ, cDIEGPzneYV);
    m = strlen (cDIEGPzneYV);
    n = strlen (lBtqc10wiXJ);
    for (i = 0; m > i; i = i + 1) {
        LFbkAChj0ZB5 = i;
        for (j = 0; n > j; j = j + 1, i = i + 1) {
            if (!(cDIEGPzneYV[i] == lBtqc10wiXJ[j]))
                break;
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
        i = LFbkAChj0ZB5;
        if (j == n)
            break;
    }
    printf ("%d\n", i);
}

