int main () {
    int i, PjVEX2np9NG, kNRgWTZG;
    int rxgCvc;
    int OYA3TW1k [100];
    int r4mZ7F [100];
    cin >> rxgCvc;
    memset (OYA3TW1k, (177 - 177), sizeof (OYA3TW1k));
    memset (r4mZ7F, (736 - 736), sizeof (r4mZ7F));
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
    r4mZ7F[0] = 1;
    {
        i = 0;
        while (i < rxgCvc) {
            PjVEX2np9NG = 0;
            {
                kNRgWTZG = 0;
                while (kNRgWTZG < 100) {
                    OYA3TW1k[PjVEX2np9NG++] = r4mZ7F[kNRgWTZG];
                    kNRgWTZG = kNRgWTZG + 1;
                };
            }
            memset (r4mZ7F, 0, sizeof (r4mZ7F));
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            {
                PjVEX2np9NG = 0;
                while (PjVEX2np9NG < 100) {
                    r4mZ7F[PjVEX2np9NG] = 2 * OYA3TW1k[PjVEX2np9NG];
                    PjVEX2np9NG = PjVEX2np9NG +1;
                };
            }
            {
                PjVEX2np9NG = 0;
                while (PjVEX2np9NG < 100) {
                    if (r4mZ7F[PjVEX2np9NG] >= 10) {
                        r4mZ7F[PjVEX2np9NG +1] += r4mZ7F[PjVEX2np9NG] / 10;
                        r4mZ7F[PjVEX2np9NG] %= 10;
                    }
                    PjVEX2np9NG++;
                };
            }
            i = i + 1;
        };
    }
    PjVEX2np9NG = 99;
    while (r4mZ7F[PjVEX2np9NG] == 0)
        PjVEX2np9NG--;
    for (; PjVEX2np9NG >= 0; PjVEX2np9NG--)
        cout << r4mZ7F[PjVEX2np9NG];
    cout << endl;
    return 0;
}

