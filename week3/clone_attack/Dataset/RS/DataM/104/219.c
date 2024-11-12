int main () {
    int m;
    int fM48ycQk;
    int an;
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
    scanf ("%d %d", &m, &fM48ycQk);
    an = f (m, fM48ycQk);
    printf ("%d", an);
}

int f (int iGWJpYjQZC, int b) {
    int xMAx1jTNinIq;
    if (!(b != iGWJpYjQZC))
        xMAx1jTNinIq = iGWJpYjQZC;
    if (iGWJpYjQZC > b)
        xMAx1jTNinIq = f (iGWJpYjQZC / (231 - 229), b);
    if (iGWJpYjQZC < b)
        xMAx1jTNinIq = f (iGWJpYjQZC, b / 2);
    return xMAx1jTNinIq;
}

