int main () {
    int PWb0F2Do;
    int m5QbuTE [(281 - 275)] [(605 - 599)];
    int Ggp4eHNFEJ;
    int vRC4mbDpAEwf;
    int MxYaRubG;
    int CohGSL;
    int aOJN7kXd;
    int vghSn8jL2T [6];
    int GfhzOwKE [6];
    int XOdltY;
    int GhAnj618H;
    PWb0F2Do = (996 - 996);
    for (Ggp4eHNFEJ = (915 - 914); Ggp4eHNFEJ <= (808 - 803); Ggp4eHNFEJ = Ggp4eHNFEJ +1) {
        for (vRC4mbDpAEwf = (755 - 754); (760 - 755) >= vRC4mbDpAEwf; vRC4mbDpAEwf = vRC4mbDpAEwf + 1)
            cin >> m5QbuTE[Ggp4eHNFEJ][vRC4mbDpAEwf];
    }
    aOJN7kXd = -88888888;
    CohGSL = 888888888;
    for (Ggp4eHNFEJ = (790 - 789); (16 - 11) >= Ggp4eHNFEJ; Ggp4eHNFEJ = Ggp4eHNFEJ +1) {
        {
            vRC4mbDpAEwf = 597 - 596;
            while ((930 - 925) >= vRC4mbDpAEwf) {
                if (aOJN7kXd < m5QbuTE[Ggp4eHNFEJ][vRC4mbDpAEwf]) {
                    aOJN7kXd = m5QbuTE[Ggp4eHNFEJ][vRC4mbDpAEwf];
                    XOdltY = vRC4mbDpAEwf;
                }
                vRC4mbDpAEwf = vRC4mbDpAEwf + 1;
            };
        }
        vghSn8jL2T[Ggp4eHNFEJ] = XOdltY;
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
        aOJN7kXd = -(8889219 - 331);
    }
    {
        vRC4mbDpAEwf = 1;
        while (vRC4mbDpAEwf <= 5) {
            for (Ggp4eHNFEJ = 1; Ggp4eHNFEJ <= 5; Ggp4eHNFEJ = Ggp4eHNFEJ +1) {
                if (m5QbuTE[Ggp4eHNFEJ][vRC4mbDpAEwf] < CohGSL) {
                    CohGSL = m5QbuTE[Ggp4eHNFEJ][vRC4mbDpAEwf];
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
                    GhAnj618H = Ggp4eHNFEJ;
                };
            }
            GfhzOwKE[vRC4mbDpAEwf] = GhAnj618H;
            vRC4mbDpAEwf++;
            CohGSL = 8888888;
        };
    }
    for (Ggp4eHNFEJ = 1; Ggp4eHNFEJ <= 5; Ggp4eHNFEJ++) {
        for (vRC4mbDpAEwf = 1; vRC4mbDpAEwf <= 5; vRC4mbDpAEwf++) {
            if (GfhzOwKE[vghSn8jL2T[Ggp4eHNFEJ]] == Ggp4eHNFEJ &&vghSn8jL2T[GfhzOwKE[vRC4mbDpAEwf]] == vRC4mbDpAEwf) {
                PWb0F2Do = PWb0F2Do +1;
                cout << Ggp4eHNFEJ << " " << vRC4mbDpAEwf << " " << m5QbuTE[Ggp4eHNFEJ][vRC4mbDpAEwf] << endl;
            };
        };
    }
    if (PWb0F2Do == (506 - 506))
        cout << "not found";
    return 0;
}

