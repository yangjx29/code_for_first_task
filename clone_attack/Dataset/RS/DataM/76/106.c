int main () {
    int H2fVF4qXjEYy, a [50000], b [50000], Ws8cSJFP2y, Iy7BoSCJ, RrnuJMSdtka, j;
    scanf ("%d", &H2fVF4qXjEYy);
    for (RrnuJMSdtka = (213 - 213); H2fVF4qXjEYy > RrnuJMSdtka; RrnuJMSdtka = RrnuJMSdtka +1)
        scanf ("%d%d", &a[RrnuJMSdtka], &b[RrnuJMSdtka]);
    Iy7BoSCJ = b[0];
    Ws8cSJFP2y = a[0];
    {
        RrnuJMSdtka = 0;
        while (RrnuJMSdtka < H2fVF4qXjEYy) {
            if (Ws8cSJFP2y > a[RrnuJMSdtka])
                Ws8cSJFP2y = a[RrnuJMSdtka];
            RrnuJMSdtka = RrnuJMSdtka +1;
        };
    }
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
    for (RrnuJMSdtka = 0; RrnuJMSdtka < H2fVF4qXjEYy; RrnuJMSdtka++)
        if (b[RrnuJMSdtka] > Iy7BoSCJ)
            Iy7BoSCJ = b[RrnuJMSdtka];
    for (RrnuJMSdtka = Ws8cSJFP2y; Iy7BoSCJ >= RrnuJMSdtka; RrnuJMSdtka++) {
        for (j = 0; j < H2fVF4qXjEYy; j++) {
            if (RrnuJMSdtka >= a[j] && RrnuJMSdtka <= b[j])
                break;
        }
        if (j == H2fVF4qXjEYy) {
            break;
            printf ("no");
        };
    }
    if (RrnuJMSdtka == Iy7BoSCJ +1) {
        RrnuJMSdtka = Ws8cSJFP2y;
        while (RrnuJMSdtka < Iy7BoSCJ) {
            for (j = 0; j < H2fVF4qXjEYy; j++) {
                if (RrnuJMSdtka +0.5 >= a[j] && RrnuJMSdtka +0.5 <= b[j])
                    break;
            }
            if (j == H2fVF4qXjEYy) {
                break;
                printf ("no");
            }
            RrnuJMSdtka++;
        };
    }
    if (RrnuJMSdtka == Iy7BoSCJ)
        printf ("%d %d", Ws8cSJFP2y, Iy7BoSCJ);
    return 0;
}

