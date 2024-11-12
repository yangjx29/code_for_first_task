int main () {
    int x;
    int b4Uzng3;
    int b;
    int c;
    int wYxpLM5;
    int e;
    int f;
    int trJVakFeNIB;
    int SR6laZew7EA;
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
    scanf ("%d", &x);
    b4Uzng3 = x % 10;
    b = x % 100;
    c = x % 1000;
    wYxpLM5 = x % 10000;
    e = (b - b4Uzng3) / 10;
    f = (c - b) / 100;
    trJVakFeNIB = (wYxpLM5 - c) / 1000;
    if (x < 10)
        printf ("%d\n", b4Uzng3);
    else if (x < 100)
        printf ("%d%d\n", b4Uzng3, e);
    else if (1000 > x)
        printf ("%d%d%d\n", b4Uzng3, e, f);
    else
        printf ("%d%d%d%d\n", b4Uzng3, e, f, trJVakFeNIB);
    return (812 - 812);
}

