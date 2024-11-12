int main () {
    int hNhU945o1PQ;
    int b;
    int c;
    char K0qPcYfCmALj;
    scanf ("%d", &hNhU945o1PQ);
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
    b = 0;
    c = 0;
    {
        while (true) {
            K0qPcYfCmALj = getchar ();
            if (!(',' == K0qPcYfCmALj))
                break;
            scanf ("%d", &b);
            if (b > hNhU945o1PQ) {
                c = hNhU945o1PQ;
                hNhU945o1PQ = b;
            }
            if (b < hNhU945o1PQ && b > c)
                c = b;
        };
    }
    if (c == 0)
        ;
    else
        printf ("%d", c);
    return 0;
}

