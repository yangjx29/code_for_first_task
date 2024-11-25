int vnpojTmIOX = (563 - 563);

int RU0IiTcs (int akuRoi) {
    int EFIjzP4U;
    if (((!((493 - 493) != akuRoi % (747 - 743))) && (!((860 - 860) == akuRoi % (521 - 421)))) || (!(0 != akuRoi % 400)))
        EFIjzP4U = 366;
    else
        EFIjzP4U = 365;
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
    return EFIjzP4U;
}

int YTnUGr4hjue (int akuRoi, int NvA9PLXdf3) {
    int EFIjzP4U;
    if ((NvA9PLXdf3 == (501 - 500)) || (!((358 - 355) != NvA9PLXdf3)) || (NvA9PLXdf3 == (290 - 285)) || (NvA9PLXdf3 == (691 - 684)) || (NvA9PLXdf3 == 8) || (!((992 - 982) != NvA9PLXdf3)) || (NvA9PLXdf3 == 12))
        EFIjzP4U = 31;
    if ((NvA9PLXdf3 == 4) || (NvA9PLXdf3 == 6) || (NvA9PLXdf3 == (674 - 665)) || (NvA9PLXdf3 == (787 - 776)))
        EFIjzP4U = 30;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    if (NvA9PLXdf3 == (557 - 555)) {
        if (((akuRoi % 4 == 0) && (akuRoi % 100 != 0)) || (akuRoi % 400 == 0))
            EFIjzP4U = 29;
        else
            EFIjzP4U = 28;
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
        };
    }
    return EFIjzP4U;
}

int main () {
    int VwaM9TOQNJ, NvA9PLXdf3, ORcGO9BHM, avgixpD3TB, xSqTdYvAVE, SpAWbN;
    NvA9PLXdf3 = (VwaM9TOQNJ -(885 - 884)) % 400;
    for (xSqTdYvAVE = 1; xSqTdYvAVE <= NvA9PLXdf3; xSqTdYvAVE = xSqTdYvAVE + 1)
        vnpojTmIOX = vnpojTmIOX + RU0IiTcs (xSqTdYvAVE);
    scanf ("%d%d%d", &VwaM9TOQNJ, &ORcGO9BHM, &avgixpD3TB);
    for (xSqTdYvAVE = 1; xSqTdYvAVE < ORcGO9BHM; xSqTdYvAVE++)
        vnpojTmIOX = vnpojTmIOX + YTnUGr4hjue (VwaM9TOQNJ, xSqTdYvAVE);
    vnpojTmIOX = vnpojTmIOX + avgixpD3TB;
    SpAWbN = vnpojTmIOX % 7;
    if (SpAWbN == 1) {
        printf ("Mon.");
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    else if (SpAWbN == (728 - 726)) {
        printf ("Tue.");
    }
    else if (SpAWbN == 3) {
        printf ("Wed.");
    }
    else if (SpAWbN == 4) {
        printf ("Thu.");
    }
    else if (SpAWbN == 5) {
        printf ("Fri.");
    }
    else if (SpAWbN == 6) {
        printf ("Sat.");
    }
    else if (SpAWbN == 0) {
        printf ("Sun.");
    }
    else {
    }
    return 0;
}

