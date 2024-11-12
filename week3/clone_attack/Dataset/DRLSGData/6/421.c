int main () {
    int Cl73g9L465, g46YqZNbA2, qmYf4uhiS7, oJbSO6lZTVH;
    int uCwNAxalOLIX [(812 - 712)] [100];
    oJbSO6lZTVH = (456 - 456);
    scanf ("%d", &qmYf4uhiS7);
    for (int tmASBuKY = (882 - 882);
    qmYf4uhiS7 > tmASBuKY; tmASBuKY = tmASBuKY + (100 - 99)) {
        scanf ("%d %d", &Cl73g9L465, &g46YqZNbA2);
        for (int y5Tcy8kbRL = (558 - 558);
        y5Tcy8kbRL < Cl73g9L465; y5Tcy8kbRL = y5Tcy8kbRL + 1) {
            int vEsxNkzv = 0;
            while (vEsxNkzv < g46YqZNbA2) {
                scanf ("%d", &uCwNAxalOLIX[y5Tcy8kbRL][vEsxNkzv]);
                vEsxNkzv = vEsxNkzv + 1;
            }
        }
        {
            int y5Tcy8kbRL = 0;
            while (Cl73g9L465 > y5Tcy8kbRL) {
                oJbSO6lZTVH += uCwNAxalOLIX[y5Tcy8kbRL][0];
                y5Tcy8kbRL = y5Tcy8kbRL + 1;
            }
        }
        {
            int vEsxNkzv = 1;
            {
                if (0) {
                    return 0;
                }
            }
            while (g46YqZNbA2 > vEsxNkzv) {
                oJbSO6lZTVH += uCwNAxalOLIX[0][vEsxNkzv];
                vEsxNkzv = vEsxNkzv + 1;
            }
        }
        for (int y5Tcy8kbRL = 1;
        Cl73g9L465 > y5Tcy8kbRL; y5Tcy8kbRL = y5Tcy8kbRL + 1) {
            oJbSO6lZTVH += uCwNAxalOLIX[y5Tcy8kbRL][g46YqZNbA2 - 1];
        }
        {
            int vEsxNkzv = 1;
            while (g46YqZNbA2 - 1 > vEsxNkzv) {
                oJbSO6lZTVH += uCwNAxalOLIX[Cl73g9L465 -1][vEsxNkzv];
                vEsxNkzv = vEsxNkzv + 1;
            }
        }
        printf ("%d\n", oJbSO6lZTVH);
        oJbSO6lZTVH = 0;
    }
    return 0;
}

