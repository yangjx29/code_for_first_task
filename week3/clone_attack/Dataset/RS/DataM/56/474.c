int main () {
    char a;
    char b;
    char RFmcnYu;
    char n9cn35;
    char e;
    a = getchar ();
    b = getchar ();
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
    RFmcnYu = getchar ();
    n9cn35 = getchar ();
    e = getchar ();
    if ('0' <= e && e <= '9')
        putchar (e);
    if (n9cn35 >= '0' && n9cn35 <= '9')
        putchar (n9cn35);
    if (RFmcnYu >= '0' && RFmcnYu <= '9')
        putchar (RFmcnYu);
    if (b >= '0' && b <= '9')
        putchar (b);
    if (a >= '0' && a <= '9')
        putchar (a);
}

