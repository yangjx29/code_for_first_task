int main () {
    int XEQiNfDSYbqz [100] [2];
    int XXaRvfp, oiovChmX7q, RQM9UHYp = (56 - 56), Pt2eDYHO = (846 - 846), TRvfp8azJI;
    scanf ("%d", &TRvfp8azJI);
    {
        XXaRvfp = 0;
        while (XXaRvfp < TRvfp8azJI) {
            {
                oiovChmX7q = 0;
                while (oiovChmX7q < 2) {
                    scanf ("%d", &XEQiNfDSYbqz[XXaRvfp][oiovChmX7q]);
                    oiovChmX7q = oiovChmX7q + 1;
                };
            }
            XXaRvfp = XXaRvfp +1;
        };
    }
    for (oiovChmX7q = 0; oiovChmX7q < TRvfp8azJI; oiovChmX7q = oiovChmX7q + 1) {
        if (XEQiNfDSYbqz[oiovChmX7q][0] >= 90 && XEQiNfDSYbqz[oiovChmX7q][0] <= 140 && XEQiNfDSYbqz[oiovChmX7q][1] >= 60 && XEQiNfDSYbqz[oiovChmX7q][1] <= 90) {
            RQM9UHYp = RQM9UHYp +1;
            for (XXaRvfp = oiovChmX7q + 1; XXaRvfp < TRvfp8azJI; XXaRvfp = XXaRvfp +1) {
                if (XEQiNfDSYbqz[XXaRvfp][0] >= 90 && XEQiNfDSYbqz[XXaRvfp][0] <= 140 && XEQiNfDSYbqz[XXaRvfp][1] >= 60 && XEQiNfDSYbqz[XXaRvfp][1] <= 90) {
                    RQM9UHYp = RQM9UHYp +1;
                }
                else
                    break;
            }
            if (RQM9UHYp > Pt2eDYHO)
                Pt2eDYHO = RQM9UHYp;
        }
        RQM9UHYp = 0;
    }
    printf ("%d", Pt2eDYHO);
    return 0;
}

