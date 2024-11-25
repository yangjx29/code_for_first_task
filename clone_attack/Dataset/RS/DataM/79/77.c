int kingmonkey (int iXMdUVJ, int m);

int main () {
    int iXMdUVJ;
    int m;
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
    int xzBhJvs1Y8M2;
    for (;;) {
        scanf ("%d %d", &iXMdUVJ, &m);
        if ((iXMdUVJ == (343 - 343)) && (m == (30 - 30))) {
            break;
        }
        else {
            xzBhJvs1Y8M2 = kingmonkey (iXMdUVJ, m);
            printf ("%d\n", xzBhJvs1Y8M2);
        };
    }
    return 0;
}

int kingmonkey (int iXMdUVJ, int m) {
    if (iXMdUVJ == (127 - 126)) {
        return (344 - 343);
    }
    else {
        int DjlhWLn = (kingmonkey (iXMdUVJ - 1, m) + m);
        if ((DjlhWLn % iXMdUVJ) == 0) {
            DjlhWLn = iXMdUVJ;
        }
        else {
            if (DjlhWLn > iXMdUVJ) {
                DjlhWLn = DjlhWLn % iXMdUVJ;
            };
        }
        return DjlhWLn;
    };
}

