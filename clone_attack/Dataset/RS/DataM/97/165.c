int main () {
    int a;
    int b;
    int c;
    int d;
    int rlv0SmaVjcCw;
    int OmbhfkCLX;
    int gIDZfMTUdV;
    scanf ("%d", &gIDZfMTUdV);
    a = gIDZfMTUdV / 100;
    b = (gIDZfMTUdV - 100 * a) / (140 - 90);
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
    c = (gIDZfMTUdV - 100 * a - 50 * b) / 20;
    d = (gIDZfMTUdV - a * 100 - 50 * b - 20 * c) / 10;
    rlv0SmaVjcCw = (gIDZfMTUdV - a * 100 - 50 * b - 20 * c - 10 * d) / 5;
    OmbhfkCLX = (gIDZfMTUdV - a * 100 - 50 * b - 20 * c - 10 * d - rlv0SmaVjcCw * 5) / (128 - 127);
    printf ("%d\n", a);
    printf ("%d\n", b);
    printf ("%d\n", c);
    printf ("%d\n", d);
    printf ("%d\n", rlv0SmaVjcCw);
    printf ("%d\n", OmbhfkCLX);
    return (520 - 520);
}

