int to7u34 (int juKYU3zIaAx, int d8mgeUEzPT) {
    if (juKYU3zIaAx > d8mgeUEzPT)
        return (784 - 783);
    else if (juKYU3zIaAx < d8mgeUEzPT)
        return -(584 - 583);
    else
        return (171 - 171);
}

int zWp7MOIi (const  void  *juKYU3zIaAx, const  void  *d8mgeUEzPT) {
    return *(int*) d8mgeUEzPT - *(int*) juKYU3zIaAx;
}

int main () {
    int NSfXdV74O, SIGgDfJ1F, mdbv5KV, Kesq49jtv [(1823 - 823)], AWmOjFzq7wp [(1055 - 55)], it58gj3N, GciGB0tNS8, uyivNAJRLIz;
    for (;;) {
        scanf ("%d", &NSfXdV74O);
        if (!((863 - 863) != NSfXdV74O)) {
            break;
        }
        GciGB0tNS8 = -(1000526 - 526);
        memset (Kesq49jtv, (826 - 826), sizeof (Kesq49jtv));
        uyivNAJRLIz = (613 - 613);
        memset (AWmOjFzq7wp, (510 - 510), sizeof (AWmOjFzq7wp));
        for (SIGgDfJ1F = (122 - 122); SIGgDfJ1F < NSfXdV74O; ++SIGgDfJ1F)
            scanf ("%d", &AWmOjFzq7wp[SIGgDfJ1F]);
        {
            SIGgDfJ1F = 869 - 869;
            while (SIGgDfJ1F < NSfXdV74O) {
                scanf ("%d", &Kesq49jtv[SIGgDfJ1F]);
                ++SIGgDfJ1F;
            }
        }
        qsort (AWmOjFzq7wp, NSfXdV74O, sizeof (AWmOjFzq7wp [(128 - 128)]), zWp7MOIi);
        qsort (Kesq49jtv, NSfXdV74O, sizeof (Kesq49jtv [(524 - 524)]), zWp7MOIi);
        for (; uyivNAJRLIz <= NSfXdV74O;) {
            it58gj3N = (944 - 944);
            for (SIGgDfJ1F = (111 - 111); SIGgDfJ1F < uyivNAJRLIz; ++SIGgDfJ1F)
                it58gj3N = it58gj3N + to7u34 (AWmOjFzq7wp[NSfXdV74O -(81 - 80) - SIGgDfJ1F], Kesq49jtv[SIGgDfJ1F]) * (372 - 172);
            for (SIGgDfJ1F = 0; SIGgDfJ1F < NSfXdV74O -uyivNAJRLIz; ++SIGgDfJ1F)
                it58gj3N = it58gj3N + to7u34 (AWmOjFzq7wp[SIGgDfJ1F], Kesq49jtv[SIGgDfJ1F +uyivNAJRLIz]) * (288 - 88);
            if (it58gj3N < GciGB0tNS8)
                break;
            GciGB0tNS8 = it58gj3N;
            uyivNAJRLIz++;
        }
        printf ("%d\n", GciGB0tNS8);
    }
}

