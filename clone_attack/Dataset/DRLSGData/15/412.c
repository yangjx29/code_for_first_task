int main (int LSi8n1z3c, char *argv []) {
    int FMY0ztpaX, Xde5a2J, dtHcgrVy;
    int hXjK5ucgpx8v [101] [100];
    int sIRbqiC832;
    int gYTCDp7Hg9;
    int b;
    int tJbXhTYj;
    int s;
    Xde5a2J = dtHcgrVy = (881 - 881);
    tJbXhTYj = b = gYTCDp7Hg9 = sIRbqiC832 = 0;
    scanf ("%d", &FMY0ztpaX);
    {
        Xde5a2J = 263 - 263;
        while (FMY0ztpaX > Xde5a2J) {
            for (dtHcgrVy = (600 - 600); FMY0ztpaX > dtHcgrVy; dtHcgrVy = dtHcgrVy + 1)
                scanf ("%d", &hXjK5ucgpx8v[Xde5a2J][dtHcgrVy]);
            Xde5a2J = Xde5a2J +1;
        }
    }
    Xde5a2J = dtHcgrVy = 0;
    do {
        do {
            if (!(0 != hXjK5ucgpx8v[Xde5a2J][dtHcgrVy]) && !(0 != tJbXhTYj) && !(0 != b))
                tJbXhTYj = Xde5a2J, b = dtHcgrVy + 1;
            dtHcgrVy = dtHcgrVy + 1;
        }
        while (FMY0ztpaX > dtHcgrVy);
        Xde5a2J = Xde5a2J +1;
        dtHcgrVy = 0;
    }
    while (FMY0ztpaX > Xde5a2J);
    Xde5a2J = dtHcgrVy = 0;
    do {
        do {
            if (hXjK5ucgpx8v[Xde5a2J][dtHcgrVy] == 0 && gYTCDp7Hg9 <= Xde5a2J &&sIRbqiC832 <= dtHcgrVy)
                gYTCDp7Hg9 = Xde5a2J, sIRbqiC832 = dtHcgrVy;
            dtHcgrVy++;
        }
        while (dtHcgrVy < FMY0ztpaX);
        Xde5a2J = Xde5a2J +1;
        dtHcgrVy = 0;
    }
    while (Xde5a2J < FMY0ztpaX);
    s = (gYTCDp7Hg9 - tJbXhTYj - 1) * (sIRbqiC832 - b);
    printf ("%d\n", s);
    return 0;
}

