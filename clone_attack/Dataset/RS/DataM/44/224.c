int change (int BzxUcaHNY7) {
    int NqZyUbDVeO4;
    int IbgAx2h;
    NqZyUbDVeO4 = 0;
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
    IbgAx2h = 0;
    for (; !(0 == BzxUcaHNY7);) {
        NqZyUbDVeO4 = NqZyUbDVeO4 *10 + BzxUcaHNY7 % 10;
        BzxUcaHNY7 = BzxUcaHNY7 / 10;
        IbgAx2h++;
    }
    return (NqZyUbDVeO4);
}

void  main () {
    int IbgAx2h;
    int KxbYVl3 [6];
    for (IbgAx2h = 0; IbgAx2h < 6; IbgAx2h = IbgAx2h +1)
        scanf ("%d", &KxbYVl3[IbgAx2h]);
    for (IbgAx2h = 0; IbgAx2h < 6; IbgAx2h = IbgAx2h +1)
        printf ("%d\n", change (KxbYVl3[IbgAx2h]));
}

