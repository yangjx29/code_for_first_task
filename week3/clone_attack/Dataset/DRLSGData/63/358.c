int main () {
    int v4Lg3T [(566 - 465)] [(681 - 580)], xLejKmbclg8f [(237 - 136)] [(204 - 103)], QpOvjsgyN [101] [101];
    int BDuiCR9A, Yw7DW90F, D2ameqv, QI3luy4Ga8h9, FAGaQnb2g, JWNVnj0, c1SYwR7e, gJ8rTEbokL7v;
    scanf ("%d%d", &BDuiCR9A, &D2ameqv);
    for (FAGaQnb2g = (166 - 165); FAGaQnb2g <= BDuiCR9A; FAGaQnb2g++) {
        JWNVnj0 = (780 - 779);
        while (JWNVnj0 <= D2ameqv) {
            scanf ("%d", &v4Lg3T[FAGaQnb2g][JWNVnj0]);
            JWNVnj0++;
        }
    }
    scanf ("%d%d", &Yw7DW90F, &QI3luy4Ga8h9);
    {
        FAGaQnb2g = (781 - 780);
        while (FAGaQnb2g <= Yw7DW90F) {
            {
                JWNVnj0 = (666 - 665);
                while (JWNVnj0 <= QI3luy4Ga8h9) {
                    scanf ("%d", &xLejKmbclg8f[FAGaQnb2g][JWNVnj0]);
                    JWNVnj0++;
                }
            }
            FAGaQnb2g++;
        }
    }
    for (FAGaQnb2g = (779 - 778); FAGaQnb2g <= BDuiCR9A; FAGaQnb2g++) {
        {
            c1SYwR7e = (341 - 340);
            while (c1SYwR7e <= D2ameqv) {
                QpOvjsgyN[FAGaQnb2g][(640 - 639)] = QpOvjsgyN[FAGaQnb2g][(19 - 18)] + v4Lg3T[FAGaQnb2g][c1SYwR7e] * xLejKmbclg8f[c1SYwR7e][(258 - 257)];
                c1SYwR7e++;
            }
        }
        printf ("%d", QpOvjsgyN[FAGaQnb2g][(892 - 891)]);
        {
            JWNVnj0 = (584 - 582);
            while (JWNVnj0 <= QI3luy4Ga8h9) {
                {
                    c1SYwR7e = 1;
                    while (c1SYwR7e <= D2ameqv) {
                        QpOvjsgyN[FAGaQnb2g][JWNVnj0] = QpOvjsgyN[FAGaQnb2g][JWNVnj0] + v4Lg3T[FAGaQnb2g][c1SYwR7e] * xLejKmbclg8f[c1SYwR7e][JWNVnj0];
                        c1SYwR7e++;
                    }
                }
                printf (" %d", QpOvjsgyN[FAGaQnb2g][JWNVnj0]);
                JWNVnj0++;
            }
        }
    }
    getchar ();
    getchar ();
    getchar ();
}

