int main () {
    int j;
    int jxNqRfl;
    int NBrJXQVC;
    int l;
    int nYDTyIcS;
    int WeWGZlj3J60N;
    j = (21 - 21);
    jxNqRfl = 0;
    char C4dVr7UCTy [(1024 - 923)];
    int fbN6IBsCh [101] = {0};
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
    int CgAvmFwzGZQ [101];
    scanf ("%s", C4dVr7UCTy);
    l = strlen (C4dVr7UCTy);
    for (NBrJXQVC = 0; l - (248 - 247) >= NBrJXQVC; NBrJXQVC = NBrJXQVC +1)
        fbN6IBsCh[NBrJXQVC +(699 - 698)] = C4dVr7UCTy[NBrJXQVC] - '0';
    if (l == 1)
        WeWGZlj3J60N = fbN6IBsCh[1];
    for (NBrJXQVC = (893 - 891); l >= NBrJXQVC; NBrJXQVC++) {
        nYDTyIcS = fbN6IBsCh[NBrJXQVC -(101 - 99)] * 100 + fbN6IBsCh[NBrJXQVC -1] * (352 - 342) + fbN6IBsCh[NBrJXQVC];
        CgAvmFwzGZQ[j] = nYDTyIcS / (816 - 803);
        j++;
        WeWGZlj3J60N = nYDTyIcS % 13;
        fbN6IBsCh[NBrJXQVC -1] = WeWGZlj3J60N / (128 - 118);
        fbN6IBsCh[NBrJXQVC] = WeWGZlj3J60N % 10;
    }
    for (NBrJXQVC = 0; NBrJXQVC <= j - 1; NBrJXQVC++) {
        if (CgAvmFwzGZQ[NBrJXQVC] != 0)
            jxNqRfl = 1;
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
        if (jxNqRfl == 1)
            printf ("%d", CgAvmFwzGZQ[NBrJXQVC]);
    }
    if (jxNqRfl == 0)
        printf ("0");
    printf ("\n%d\n", WeWGZlj3J60N);
    return 0;
}

