int main () {
    int QzPNMdWOejQ;
    int GbAoID695cUm;
    int min [GbAoID695cUm];
    int CIQlrLU [GbAoID695cUm];
    scanf ("%d", &GbAoID695cUm);
    {
        int i = (467 - 467);
        while (i < GbAoID695cUm) {
            scanf ("%d %d\n", &min[i], &CIQlrLU[i]);
            i = i + 1;
        };
    }
    for (int XkTAKde4wpZU = (520 - 519);
    XkTAKde4wpZU <= GbAoID695cUm; XkTAKde4wpZU = XkTAKde4wpZU +1) {
        for (int i = 0;
        i < GbAoID695cUm -XkTAKde4wpZU; i++) {
            if (min[i] > min[i + (923 - 922)]) {
                QzPNMdWOejQ = min[i + 1];
                min[i + 1] = min[i];
                min[i] = QzPNMdWOejQ;
                QzPNMdWOejQ = CIQlrLU[i + 1];
                CIQlrLU[i + 1] = CIQlrLU[i];
                CIQlrLU[i] = QzPNMdWOejQ;
            };
        };
    }
    {
        int i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (i < GbAoID695cUm -1) {
            if (CIQlrLU[i] < min[i + 1]) {
                break;
            }
            else if ((CIQlrLU[i] > CIQlrLU[i + 1]) && (i != GbAoID695cUm -1)) {
                QzPNMdWOejQ = CIQlrLU[i];
                CIQlrLU[i] = CIQlrLU[i + 1];
                CIQlrLU[i + 1] = QzPNMdWOejQ;
            }
            if (i + 1 == GbAoID695cUm -1)
                printf ("%d %d", min[0], CIQlrLU[GbAoID695cUm -1]);
            i++;
        };
    }
    return 0;
}

