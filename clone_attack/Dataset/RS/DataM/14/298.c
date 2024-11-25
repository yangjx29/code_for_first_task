struct   Student {
    int MrUaKsqeGP;
    int T3szRE;
    int RiTMLskj;
    int AapIGr;
};
int main () {
    struct   Student n39Gg4j7NX [100000];
    int Kn78Jwe9RX;
    int QR6UmatgyuQ;
    int Sjpa1lzgXKL;
    int wl3sX90qT7d;
    struct   Student temp;
    scanf ("%d", &wl3sX90qT7d);
    {
        Kn78Jwe9RX = 683 - 683;
        while (wl3sX90qT7d > Kn78Jwe9RX) {
            scanf ("%d", &n39Gg4j7NX[Kn78Jwe9RX].MrUaKsqeGP);
            scanf ("%d", &n39Gg4j7NX[Kn78Jwe9RX].T3szRE);
            scanf ("%d", &n39Gg4j7NX[Kn78Jwe9RX].RiTMLskj);
            n39Gg4j7NX[Kn78Jwe9RX].AapIGr = n39Gg4j7NX[Kn78Jwe9RX].T3szRE + n39Gg4j7NX[Kn78Jwe9RX].RiTMLskj;
            Kn78Jwe9RX++;
        };
    }
    {
        Kn78Jwe9RX = 0;
        while (3 > Kn78Jwe9RX) {
            QR6UmatgyuQ = Kn78Jwe9RX;
            {
                Sjpa1lzgXKL = Kn78Jwe9RX +1;
                while (wl3sX90qT7d > Sjpa1lzgXKL) {
                    if (n39Gg4j7NX[QR6UmatgyuQ].AapIGr < n39Gg4j7NX[Sjpa1lzgXKL].AapIGr)
                        QR6UmatgyuQ = Sjpa1lzgXKL;
                    Sjpa1lzgXKL = Sjpa1lzgXKL +1;
                };
            }
            if (QR6UmatgyuQ != Kn78Jwe9RX) {
                temp = n39Gg4j7NX[Kn78Jwe9RX];
                n39Gg4j7NX[Kn78Jwe9RX] = n39Gg4j7NX[QR6UmatgyuQ];
                n39Gg4j7NX[QR6UmatgyuQ] = temp;
            }
            Kn78Jwe9RX++;
        };
    }
    for (Kn78Jwe9RX = 0; Kn78Jwe9RX < 3; Kn78Jwe9RX++) {
        printf ("%d %d\n", n39Gg4j7NX[Kn78Jwe9RX].MrUaKsqeGP, n39Gg4j7NX[Kn78Jwe9RX].AapIGr);
    }
    return 0;
}

