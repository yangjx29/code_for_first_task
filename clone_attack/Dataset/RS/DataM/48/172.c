int main () {
    int a [9] [9] = {0}, etoiAPb [9] [9] = {0}, fsSNFXOGL, Vhsr4azZc, joXDY0P16, pENj3qSxM, n, a6gOwxVuX, SjANxmWn6, eg8xT1CJ, lRsd2TSKOv9e;
    cin >> pENj3qSxM;
    a[4][4] = pENj3qSxM;
    cin >> n;
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
    for (fsSNFXOGL = 0; fsSNFXOGL < n; fsSNFXOGL = fsSNFXOGL + 1) {
        for (eg8xT1CJ = 0; eg8xT1CJ <= 8; eg8xT1CJ = eg8xT1CJ + 1)
            for (lRsd2TSKOv9e = 0; 8 >= lRsd2TSKOv9e; lRsd2TSKOv9e = lRsd2TSKOv9e + 1)
                etoiAPb[eg8xT1CJ][lRsd2TSKOv9e] = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (Vhsr4azZc = 4 - fsSNFXOGL; (4 + fsSNFXOGL) >= Vhsr4azZc; Vhsr4azZc = Vhsr4azZc +1) {
            joXDY0P16 = 4 - fsSNFXOGL;
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
            while ((4 + fsSNFXOGL) >= joXDY0P16) {
                etoiAPb[Vhsr4azZc -1][joXDY0P16 - 1] = etoiAPb[Vhsr4azZc -1][joXDY0P16 - 1] + a[Vhsr4azZc][joXDY0P16];
                etoiAPb[Vhsr4azZc -1][joXDY0P16] = etoiAPb[Vhsr4azZc -1][joXDY0P16] + a[Vhsr4azZc][joXDY0P16];
                etoiAPb[Vhsr4azZc -1][joXDY0P16 + 1] = etoiAPb[Vhsr4azZc -1][joXDY0P16 + 1] + a[Vhsr4azZc][joXDY0P16];
                etoiAPb[Vhsr4azZc][joXDY0P16 - 1] = etoiAPb[Vhsr4azZc][joXDY0P16 - 1] + a[Vhsr4azZc][joXDY0P16];
                etoiAPb[Vhsr4azZc][joXDY0P16 + 1] = etoiAPb[Vhsr4azZc][joXDY0P16 + 1] + a[Vhsr4azZc][joXDY0P16];
                etoiAPb[Vhsr4azZc +1][joXDY0P16 - 1] = etoiAPb[Vhsr4azZc +1][joXDY0P16 - 1] + a[Vhsr4azZc][joXDY0P16];
                etoiAPb[Vhsr4azZc +1][joXDY0P16] = etoiAPb[Vhsr4azZc +1][joXDY0P16] + a[Vhsr4azZc][joXDY0P16];
                etoiAPb[Vhsr4azZc +1][joXDY0P16 + 1] = etoiAPb[Vhsr4azZc +1][joXDY0P16 + 1] + a[Vhsr4azZc][joXDY0P16];
                joXDY0P16 = joXDY0P16 + 1;
            };
        }
        for (a6gOwxVuX = 3 - fsSNFXOGL; a6gOwxVuX <= (5 + fsSNFXOGL); a6gOwxVuX = a6gOwxVuX + 1) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            for (SjANxmWn6 = 3 - fsSNFXOGL; SjANxmWn6 <= (5 + fsSNFXOGL); SjANxmWn6 = SjANxmWn6 +1) {
                a[a6gOwxVuX][SjANxmWn6] = 2 * a[a6gOwxVuX][SjANxmWn6] + etoiAPb[a6gOwxVuX][SjANxmWn6];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            };
        };
    }
    {
        fsSNFXOGL = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (fsSNFXOGL <= 8) {
            for (Vhsr4azZc = 0; Vhsr4azZc <= 7; Vhsr4azZc++) {
                cout << a[fsSNFXOGL][Vhsr4azZc] << " ";
            }
            cout << a[fsSNFXOGL][8] << endl;
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
            fsSNFXOGL = fsSNFXOGL + 1;
        };
    }
    return 0;
}

