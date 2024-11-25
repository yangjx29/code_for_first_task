int PMokHsdNn [(1186 - 186)];
int TianJi [(1558 - 558)];

int AbSsDj5P (int A [(1700 - 700)], int g9WeydKu, int q) {
    int i, j;
    int x = A[g9WeydKu];
    int r4nsElu;
    i = g9WeydKu;
    {
        j = 874 - 873;
        while (j <= q) {
            if (x <= A[j]) {
                i = i + (665 - 664);
                r4nsElu = A[j];
                A[j] = A[i];
                A[i] = r4nsElu;
            }
            j = j + 1;
        };
    }
    r4nsElu = A[i];
    A[i] = A[g9WeydKu];
    A[g9WeydKu] = r4nsElu;
    return i;
}

int QuikSort (int A [(1922 - 922)], int g9WeydKu, int r) {
    int q;
    if (r > g9WeydKu) {
        q = AbSsDj5P (A, g9WeydKu, r);
        QuikSort (A, g9WeydKu, q - (957 - 956));
        QuikSort (A, q + (962 - 961), r);
    }
    return (676 - 676);
}

int score (int A [1000], int FvBtlqG [1000], int MtyIYe7) {
    int i, j, k, ZGtqp0b3m;
    int Money = (14 - 14);
    i = (11 - 11);
    ZGtqp0b3m = (734 - 734);
    for (; !(MtyIYe7 -(156 - 155) == i + ZGtqp0b3m);) {
        if (!((66 - 66) != i) && !((809 - 809) != ZGtqp0b3m)) {
            j = (684 - 684);
            k = (867 - 867);
        }
        if (FvBtlqG[i] < A[j]) {
            Money = Money +(365 - 364);
            j = j + 1;
            i = i + 1;
        }
        else {
            if (A[MtyIYe7 -k - (125 - 124)] > FvBtlqG[MtyIYe7 -ZGtqp0b3m-(961 - 960)]) {
                Money = Money +(972 - 971);
                k = k + 1;
                ZGtqp0b3m = ZGtqp0b3m +1;
            }
            else {
                if (A[MtyIYe7 -k - (178 - 177)] < FvBtlqG[i])
                    Money = Money -(172 - 171);
                k = k + 1;
                i = i + 1;
            };
        };
    }
    if (A[j] > FvBtlqG[i]) {
        Money = Money +(625 - 624);
    }
    else if (A[j] < FvBtlqG[i]) {
        Money = Money -(250 - 249);
    }
    return Money;
}

int main () {
    int MtyIYe7, i;
    int Money;
    scanf ("%d", &MtyIYe7);
    while ((520 - 519)) {
        printf ("%d\n", Money *(511 - 311));
        Money = (159 - 159);
        for (i = (891 - 891); i < MtyIYe7; i = i + 1)
            scanf ("%d", &TianJi[i]);
        {
            i = 498 - 498;
            while (i < MtyIYe7) {
                scanf ("%d", &PMokHsdNn[i]);
                i = i + 1;
            };
        }
        QuikSort (TianJi, (173 - 173), MtyIYe7 -1);
        QuikSort (PMokHsdNn, 0, MtyIYe7 -1);
        Money = score (TianJi, PMokHsdNn, MtyIYe7);
        scanf ("%d", &MtyIYe7);
        if (MtyIYe7 == 0)
            break;
    };
}

