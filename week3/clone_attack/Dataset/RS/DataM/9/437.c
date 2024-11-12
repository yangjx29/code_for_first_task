struct   z9i80yA {
    char r2IdyGLinQNr [10];
    int mSn8L61Xd;
}
pat [(792 - 692)];
int JeOCPxLW (struct   z9i80yA cnlseI9wgFqN [], int num);

int main () {
    int vniI08;
    int X4jR6hQ;
    int iU4px7w;
    int dXDTlLRF5q;
    int max;
    vniI08 = (218 - 218);
    struct   z9i80yA *ppat [100];
    struct   z9i80yA *iuQM9dm7x5;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%d", &dXDTlLRF5q);
    for (X4jR6hQ = 0; X4jR6hQ < dXDTlLRF5q; X4jR6hQ = X4jR6hQ +1)
        scanf ("%s%d", pat[X4jR6hQ].r2IdyGLinQNr, &pat[X4jR6hQ].mSn8L61Xd);
    for (X4jR6hQ = 0; X4jR6hQ < dXDTlLRF5q; X4jR6hQ = X4jR6hQ +1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (pat[X4jR6hQ].mSn8L61Xd >= 60) {
            ppat[vniI08] = pat + X4jR6hQ;
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
            vniI08++;
        };
    }
    for (X4jR6hQ = 0; X4jR6hQ < vniI08 - 1; X4jR6hQ++) {
        for (iU4px7w = 0; iU4px7w < vniI08 - 1 - X4jR6hQ; iU4px7w++) {
            if ((*ppat[iU4px7w]).mSn8L61Xd < (*ppat[iU4px7w + 1]).mSn8L61Xd) {
                iuQM9dm7x5 = ppat[iU4px7w];
                ppat[iU4px7w] = ppat[iU4px7w + 1];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                ppat[iU4px7w + 1] = iuQM9dm7x5;
            };
        };
    }
    for (X4jR6hQ = 0; X4jR6hQ < vniI08; X4jR6hQ++)
        printf ("%s\n", ppat[X4jR6hQ]->r2IdyGLinQNr);
    for (X4jR6hQ = 0; X4jR6hQ < dXDTlLRF5q; X4jR6hQ++) {
        if (pat[X4jR6hQ].mSn8L61Xd < 60)
            printf ("%s\n", pat[X4jR6hQ].r2IdyGLinQNr);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        };
    }
    return 0;
}

