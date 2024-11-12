int main () {
    int jEMbdVqSu;
    int HLTORlK7Mh9V;
    int pREjnTo, zYD5IZayunb, gM2U6Pfnaew, XfTstgQekX = 0;
    int h5pzmLXROZy [201], Vc3MXeSdlg [201], ZsYZihF4lz [201];
    char BATahPFwbiG [201] = "0";
    char HCkpgZw7qdTB [201] = "0";
    scanf ("%s %s", BATahPFwbiG, HCkpgZw7qdTB);
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
    pREjnTo = strlen (BATahPFwbiG);
    zYD5IZayunb = strlen (HCkpgZw7qdTB);
    gM2U6Pfnaew = pREjnTo > zYD5IZayunb ? pREjnTo : zYD5IZayunb;
    memset (h5pzmLXROZy, 0, sizeof (h5pzmLXROZy));
    memset (Vc3MXeSdlg, 0, sizeof (Vc3MXeSdlg));
    {
        jEMbdVqSu = 200;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (jEMbdVqSu > 200 - pREjnTo) {
            h5pzmLXROZy[jEMbdVqSu] = BATahPFwbiG[pREjnTo - 201 + jEMbdVqSu] - '0';
            jEMbdVqSu = jEMbdVqSu - 1;
        };
    }
    {
        jEMbdVqSu = 200;
        while (200 - zYD5IZayunb < jEMbdVqSu) {
            Vc3MXeSdlg[jEMbdVqSu] = HCkpgZw7qdTB[zYD5IZayunb - 201 + jEMbdVqSu] - '0';
            jEMbdVqSu = jEMbdVqSu - 1;
        };
    }
    {
        jEMbdVqSu = 200;
        while (jEMbdVqSu > 200 - gM2U6Pfnaew - 1) {
            ZsYZihF4lz[jEMbdVqSu] = (XfTstgQekX +h5pzmLXROZy[jEMbdVqSu] + Vc3MXeSdlg[jEMbdVqSu]) % 10;
            XfTstgQekX = (XfTstgQekX +h5pzmLXROZy[jEMbdVqSu] + Vc3MXeSdlg[jEMbdVqSu]) / 10;
            jEMbdVqSu = jEMbdVqSu - 1;
        };
    }
    {
        jEMbdVqSu = 200 - gM2U6Pfnaew;
        while (jEMbdVqSu <= 200) {
            if (ZsYZihF4lz[jEMbdVqSu] != 0) {
                {
                    HLTORlK7Mh9V = jEMbdVqSu;
                    while (HLTORlK7Mh9V <= 200) {
                        printf ("%d", ZsYZihF4lz[HLTORlK7Mh9V]);
                        HLTORlK7Mh9V++;
                    };
                }
                break;
            }
            else {
                if (jEMbdVqSu == 200)
                    printf ("0\n");
            }
            jEMbdVqSu = jEMbdVqSu + 1;
        };
    };
}

