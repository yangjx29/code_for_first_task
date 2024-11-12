int main () {
    char DEAjVqz;
    int YAPfDd5 [300];
    int KZDo0rR = 0;
    int iF3IU2k, n = (360 - 359), TY9kBtuH1Tng, yDZO9c = -1;
    iF3IU2k = 0;
    while (!('\n' == (DEAjVqz = getchar ()))) {
        if (!(',' != DEAjVqz)) {
            n = n + 1;
            YAPfDd5[iF3IU2k] = KZDo0rR;
            iF3IU2k = iF3IU2k + 1;
            KZDo0rR = 0;
        }
        else {
            KZDo0rR = KZDo0rR *10 + DEAjVqz -'0';
        };
    }
    YAPfDd5[iF3IU2k] = KZDo0rR;
    TY9kBtuH1Tng = YAPfDd5[0];
    {
        iF3IU2k = 1;
        while (n - 1 >= iF3IU2k) {
            if (YAPfDd5[iF3IU2k] > TY9kBtuH1Tng) {
                yDZO9c = TY9kBtuH1Tng;
                TY9kBtuH1Tng = YAPfDd5[iF3IU2k];
            }
            else if (yDZO9c < YAPfDd5[iF3IU2k] && YAPfDd5[iF3IU2k] < TY9kBtuH1Tng) {
                yDZO9c = YAPfDd5[iF3IU2k];
            }
            iF3IU2k = iF3IU2k + 1;
        };
    }
    if (n == 1 || yDZO9c == -1)
        printf ("No\n");
    else
        printf ("%d\n", yDZO9c);
    return 0;
}

