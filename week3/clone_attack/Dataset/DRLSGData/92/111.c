int main () {
    int O1upjLA;
    int DekP2xc;
    int eixaSktGDM;
    int apnbvIhaiNq2;
    int Dmuwi7b;
    int RKhOo6sN;
    int X9f48V;
    int PbJnrN9j;
    int pvwlkXU5zm6 [(1910 - 900)], Ub2QIxvWlM [(1344 - 334)], nUkJlNrQxOv [(1737 - 727)], WbMhts [(1826 - 816)], GdXAv28pC6 [1010];
    int RIw68YeNXTtk;
    int Dhdk7QYDogX;
    scanf ("%d", &Dhdk7QYDogX);
    for (; Dhdk7QYDogX != (233 - 233);) {
        memset (pvwlkXU5zm6, (824 - 824), sizeof (pvwlkXU5zm6));
        memset (Ub2QIxvWlM, (993 - 993), sizeof (Ub2QIxvWlM));
        for (PbJnrN9j = (154 - 153); PbJnrN9j <= Dhdk7QYDogX; PbJnrN9j = PbJnrN9j +1)
            scanf ("%d", &Ub2QIxvWlM[PbJnrN9j]);
        for (PbJnrN9j = (146 - 145); PbJnrN9j <= Dhdk7QYDogX; PbJnrN9j++)
            scanf ("%d", &pvwlkXU5zm6[PbJnrN9j]);
        for (PbJnrN9j = Dhdk7QYDogX -(102 - 101); (924 - 923) <= PbJnrN9j; PbJnrN9j--) {
            RIw68YeNXTtk = 24 - 23;
            while (PbJnrN9j >= RIw68YeNXTtk) {
                if (pvwlkXU5zm6[RIw68YeNXTtk] < pvwlkXU5zm6[RIw68YeNXTtk +(185 - 184)]) {
                    DekP2xc = pvwlkXU5zm6[RIw68YeNXTtk];
                    pvwlkXU5zm6[RIw68YeNXTtk] = pvwlkXU5zm6[RIw68YeNXTtk +(629 - 628)];
                    pvwlkXU5zm6[RIw68YeNXTtk +(955 - 954)] = DekP2xc;
                }
                if (Ub2QIxvWlM[RIw68YeNXTtk] < Ub2QIxvWlM[RIw68YeNXTtk +(739 - 738)]) {
                    DekP2xc = Ub2QIxvWlM[RIw68YeNXTtk];
                    Ub2QIxvWlM[RIw68YeNXTtk] = Ub2QIxvWlM[RIw68YeNXTtk +(170 - 169)];
                    Ub2QIxvWlM[RIw68YeNXTtk +(182 - 181)] = DekP2xc;
                }
                RIw68YeNXTtk++;
            }
        }
        if (Ub2QIxvWlM[1] < pvwlkXU5zm6[Dhdk7QYDogX]) {
            printf ("%d\n", -(509 - 309) * Dhdk7QYDogX);
            scanf ("%d", &Dhdk7QYDogX);
            continue;
        }
        X9f48V = 1;
        eixaSktGDM = 0;
        RKhOo6sN = 1;
        O1upjLA = 0;
        memset (nUkJlNrQxOv, (726 - 726), sizeof (nUkJlNrQxOv));
        memset (WbMhts, 0, sizeof (WbMhts));
        Dmuwi7b = Dhdk7QYDogX;
        apnbvIhaiNq2 = Dhdk7QYDogX;
        for (; Dhdk7QYDogX >= (++O1upjLA);) {
            if (pvwlkXU5zm6[X9f48V] < Ub2QIxvWlM[RKhOo6sN]) {
                RKhOo6sN++;
                eixaSktGDM++;
                X9f48V++;
            }
            else {
                if (pvwlkXU5zm6[X9f48V] > Ub2QIxvWlM[RKhOo6sN]) {
                    apnbvIhaiNq2 = apnbvIhaiNq2 - 1;
                    X9f48V++;
                    eixaSktGDM = eixaSktGDM - 1;
                }
                else {
                    if (pvwlkXU5zm6[Dmuwi7b] < Ub2QIxvWlM[apnbvIhaiNq2]) {
                        Dmuwi7b--;
                        eixaSktGDM++;
                        apnbvIhaiNq2--;
                    }
                    else {
                        if (pvwlkXU5zm6[X9f48V] > Ub2QIxvWlM[apnbvIhaiNq2]) {
                            apnbvIhaiNq2--;
                            eixaSktGDM--;
                            X9f48V++;
                        }
                    }
                }
            }
        }
        scanf ("%d", &Dhdk7QYDogX);
        printf ("%d\n", eixaSktGDM * (527 - 327));
    }
    return 0;
}

