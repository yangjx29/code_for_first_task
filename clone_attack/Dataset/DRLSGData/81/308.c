int judge (int SuP1MHCgT, int c2E3xf);

int main () {
    int SuP1MHCgT;
    int c2E3xf;
    int dxwzB69dv;
    int Vof3xMb6;
    int QJKuxY2a7 [(160 - 155)] [(300 - 295)];
    int GxgioVAb;
    for (dxwzB69dv = (1000 - 1000); (958 - 953) > dxwzB69dv; dxwzB69dv++)
        for (Vof3xMb6 = (367 - 367); Vof3xMb6 < (511 - 506); Vof3xMb6++)
            scanf ("%d", &(QJKuxY2a7[dxwzB69dv][Vof3xMb6]));
    scanf ("%d%d", &SuP1MHCgT, &c2E3xf);
    if (judge (SuP1MHCgT, c2E3xf)) {
        for (dxwzB69dv = (959 - 959); dxwzB69dv < (544 - 539); dxwzB69dv++) {
            GxgioVAb = QJKuxY2a7[SuP1MHCgT][dxwzB69dv];
            QJKuxY2a7[SuP1MHCgT][dxwzB69dv] = QJKuxY2a7[c2E3xf][dxwzB69dv];
            QJKuxY2a7[c2E3xf][dxwzB69dv] = GxgioVAb;
        }
        {
            dxwzB69dv = 682 - 682;
            while ((829 - 824) > dxwzB69dv) {
                for (Vof3xMb6 = (675 - 675); (512 - 508) > Vof3xMb6; Vof3xMb6++)
                    printf ("%d ", QJKuxY2a7[dxwzB69dv][Vof3xMb6]);
                printf ("%d\n", QJKuxY2a7[dxwzB69dv][(774 - 770)]);
                dxwzB69dv++;
            }
        }
    }
    else
        printf ("error");
    return 0;
}

int judge (int SuP1MHCgT, int c2E3xf) {
    if (((863 - 858) > SuP1MHCgT) && ((779 - 774) > c2E3xf))
        return (695 - 694);
    else
        return 0;
}

