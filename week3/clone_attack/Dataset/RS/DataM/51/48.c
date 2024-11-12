int main () {
    char w [1000];
    char uPolqc3bsFiY [1000] [50];
    int U3nvcULxe [1000] = {0};
    int cj8YpvHt354U, nSeYBA40, AqhdN0S8TXI = 0, iqhdYszgB = 0, kgqU7rXic5, wvCQ75LJ4hg;
    gets (w);
    nSeYBA40 = strlen (w);
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
    scanf ("%d", &AqhdN0S8TXI);
    for (kgqU7rXic5 = 0; nSeYBA40 - AqhdN0S8TXI >= kgqU7rXic5; kgqU7rXic5 = kgqU7rXic5 + 1) {
        {
            wvCQ75LJ4hg = 0;
            while (AqhdN0S8TXI > wvCQ75LJ4hg) {
                uPolqc3bsFiY[kgqU7rXic5][wvCQ75LJ4hg] = w[kgqU7rXic5 + wvCQ75LJ4hg];
                wvCQ75LJ4hg = wvCQ75LJ4hg + 1;
            };
        }
        uPolqc3bsFiY[kgqU7rXic5][AqhdN0S8TXI] = '\0';
    }
    for (kgqU7rXic5 = 0; nSeYBA40 - AqhdN0S8TXI >= kgqU7rXic5; kgqU7rXic5 = kgqU7rXic5 + 1) {
        wvCQ75LJ4hg = kgqU7rXic5;
        while (nSeYBA40 - AqhdN0S8TXI >= wvCQ75LJ4hg) {
            if (!(0 != strcmp (uPolqc3bsFiY[kgqU7rXic5], uPolqc3bsFiY[wvCQ75LJ4hg])))
                U3nvcULxe[kgqU7rXic5]++;
            wvCQ75LJ4hg = wvCQ75LJ4hg + 1;
        };
    }
    {
        kgqU7rXic5 = 0;
        while (nSeYBA40 - AqhdN0S8TXI > kgqU7rXic5) {
            if (U3nvcULxe[kgqU7rXic5] > iqhdYszgB)
                iqhdYszgB = U3nvcULxe[kgqU7rXic5];
            kgqU7rXic5++;
        };
    }
    if (iqhdYszgB == 1)
        ;
    else {
        printf ("%d\n", iqhdYszgB);
        for (kgqU7rXic5 = 0; kgqU7rXic5 <= nSeYBA40 - AqhdN0S8TXI; kgqU7rXic5++)
            if (U3nvcULxe[kgqU7rXic5] == iqhdYszgB)
                printf ("%s\n", uPolqc3bsFiY[kgqU7rXic5]);
    }
    getchar ();
    return 0;
}

