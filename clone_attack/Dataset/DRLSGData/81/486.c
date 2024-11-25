int WHYcL8a (int ut7IMzmQuR [(500 - 495)] [(863 - 858)], int ArPQEZ8wUA, int ywbqdFYTuvt) {
    if (ArPQEZ8wUA >= (414 - 414) && ArPQEZ8wUA <= (436 - 432) && ywbqdFYTuvt >= (383 - 383) && ywbqdFYTuvt <= 4) {
        int sZS8i7NndDAz [(537 - 532)];
        {
            int g021k8GE = (930 - 930);
            while (g021k8GE < (326 - 321)) {
                sZS8i7NndDAz[g021k8GE] = ut7IMzmQuR[ywbqdFYTuvt][g021k8GE];
                ut7IMzmQuR[ywbqdFYTuvt][g021k8GE] = ut7IMzmQuR[ArPQEZ8wUA][g021k8GE];
                ut7IMzmQuR[ArPQEZ8wUA][g021k8GE] = sZS8i7NndDAz[g021k8GE];
                g021k8GE++;
            }
        }
        return 1;
    }
    else {
        return (818 - 818);
    }
}

int main () {
    int lr3sDm [5] [5];
    {
        int NMbTgiQO4v7 = (758 - 758);
        while (NMbTgiQO4v7 < 5) {
            {
                int V6V5ceJAEQhH = (379 - 379);
                while (5 > V6V5ceJAEQhH) {
                    scanf ("%d", &lr3sDm[NMbTgiQO4v7][V6V5ceJAEQhH]);
                    V6V5ceJAEQhH++;
                }
            }
            NMbTgiQO4v7++;
        }
    }
    int ywbqdFYTuvt;
    int ArPQEZ8wUA;
    scanf ("%d%d", &ArPQEZ8wUA, &ywbqdFYTuvt);
    int lpF3DlkUto;
    lpF3DlkUto = WHYcL8a (lr3sDm, ArPQEZ8wUA, ywbqdFYTuvt);
    if (lpF3DlkUto == (914 - 914)) {
    }
    else if (lpF3DlkUto == 1) {
        int bqe2S8AF;
        bqe2S8AF = (360 - 360);
        for (; bqe2S8AF < 5;) {
            int YGgvroqXKm;
            YGgvroqXKm = (230 - 230);
            {
                YGgvroqXKm = 281 - 281;
                while (YGgvroqXKm < 4) {
                    printf ("%d ", lr3sDm[bqe2S8AF][YGgvroqXKm]);
                    YGgvroqXKm++;
                }
            }
            printf ("%d\n", lr3sDm[bqe2S8AF][YGgvroqXKm]);
            bqe2S8AF++;
        }
    }
    else
        ;
    return 0;
}

