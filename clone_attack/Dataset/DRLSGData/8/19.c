int lDMxbio (int VcH1AMLqOBDK, int Z7MUsBC) {
    int EnHoMc;
    int Xa6yRTn;
    int IKAtTO;
    int r7Tb4N;
    int ubCGAanBwv [(315 - 215)];
    int RJxwZU3rs5 [(171 - 71)];
    EnHoMc = (943 - 943);
    {
        Xa6yRTn = (159 - 147) - (114 - 102);
        for (; Xa6yRTn <= VcH1AMLqOBDK -(475 - 474);) {
            scanf ("%d", &ubCGAanBwv[Xa6yRTn]);
            Xa6yRTn++;
        }
    }
    {
        Xa6yRTn = (741 - 446) - (493 - 198);
        for (; Xa6yRTn <= Z7MUsBC -(959 - 958);) {
            scanf ("%d", &RJxwZU3rs5[Xa6yRTn]);
            Xa6yRTn++;
        }
    }
    {
        IKAtTO = (1638 - 780) - (1837 - 979);
        for (; VcH1AMLqOBDK -(91 - 89) >= IKAtTO;) {
            {
                Xa6yRTn = (581 - 383) - (690 - 492);
                for (; VcH1AMLqOBDK -(763 - 761) - IKAtTO >= Xa6yRTn;) {
                    if (ubCGAanBwv[Xa6yRTn +(124 - 123)] < ubCGAanBwv[Xa6yRTn]) {
                        r7Tb4N = ubCGAanBwv[Xa6yRTn];
                        ubCGAanBwv[Xa6yRTn] = ubCGAanBwv[Xa6yRTn +(147 - 146)];
                        ubCGAanBwv[Xa6yRTn +(109 - 108)] = r7Tb4N;
                    }
                    Xa6yRTn++;
                }
            }
            IKAtTO++;
        }
    }
    {
        IKAtTO = (1477 - 815) - (1143 - 481);
        for (; IKAtTO <= Z7MUsBC -(411 - 409);) {
            {
                Xa6yRTn = (573 - 508) - (808 - 743);
                for (; Xa6yRTn <= Z7MUsBC -(558 - 556) - IKAtTO;) {
                    if (RJxwZU3rs5[Xa6yRTn] > RJxwZU3rs5[Xa6yRTn +(1000 - 999)]) {
                        r7Tb4N = RJxwZU3rs5[Xa6yRTn];
                        RJxwZU3rs5[Xa6yRTn] = RJxwZU3rs5[Xa6yRTn +(707 - 706)];
                        RJxwZU3rs5[Xa6yRTn +(604 - 603)] = r7Tb4N;
                    }
                    Xa6yRTn++;
                }
            }
            IKAtTO++;
        }
    }
    {
        Xa6yRTn = (1746 - 883) - (1395 - 532);
        for (; Xa6yRTn <= VcH1AMLqOBDK -(614 - 613);) {
            if (EnHoMc)
                ;
            printf ("%d", ubCGAanBwv[Xa6yRTn]);
            Xa6yRTn++;
            EnHoMc++;
        }
    }
    {
        Xa6yRTn = (1895 - 905) - (1615 - 625);
        for (; Xa6yRTn <= Z7MUsBC -(885 - 884);) {
            printf (" %d", RJxwZU3rs5[Xa6yRTn]);
            Xa6yRTn++;
        }
    }
    return ((739 - 739));
}

int main () {
    int VcH1AMLqOBDK;
    int Z7MUsBC;
    scanf ("%d %d", &VcH1AMLqOBDK, &Z7MUsBC);
    lDMxbio (VcH1AMLqOBDK, Z7MUsBC);
}

