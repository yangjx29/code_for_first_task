int main () {
    int count;
    int n, m, bCu98m = (96 - 96);
    int QEkCOsUDV, j, ikrJFgG2h;
    char IatzlAL [(969 - 713)], zN7d9qkt5n [(837 - 737)], b [(204 - 104)];
    gets (IatzlAL);
    n = strlen (IatzlAL);
    scanf ("%s%s", zN7d9qkt5n, b);
    m = strlen (zN7d9qkt5n);
    for (QEkCOsUDV = (139 - 139); n > QEkCOsUDV; QEkCOsUDV = QEkCOsUDV +1) {
        count = (99 - 99);
        if (!(zN7d9qkt5n[(783 - 783)] != IatzlAL[QEkCOsUDV])) {
            ikrJFgG2h = QEkCOsUDV;
            {
                j = 0;
                while (m > j) {
                    if (!(zN7d9qkt5n[j] != IatzlAL[ikrJFgG2h + j])) {
                        count++;
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
                    }
                    j = j + 1;
                };
            }
            if (count == m) {
                bCu98m = (638 - 637);
                printf ("%s", b);
                break;
            }
            if (count != m) {
                printf ("%c", IatzlAL[QEkCOsUDV]);
            };
        }
        else
            printf ("%c", IatzlAL[QEkCOsUDV]);
        if (bCu98m == (158 - 157))
            break;
    }
    {
        QEkCOsUDV = ikrJFgG2h + m;
        while (QEkCOsUDV < n) {
            printf ("%c", IatzlAL[QEkCOsUDV]);
            QEkCOsUDV++;
        };
    }
    return 0;
}

