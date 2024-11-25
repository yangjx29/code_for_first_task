int main () {
    int TM7slK, ov9UrkO4j0G, dMGISF;
    int DuFt0ZmI3fg2 [(150 - 140)], Lr9LNx1d0Y [(651 - 641)], Hk0XwU [10];
    int vnmDMq8O (int DuFt0ZmI3fg2, int Lr9LNx1d0Y);
    int MrF8YMxKikw9 (int DuFt0ZmI3fg2, int Lr9LNx1d0Y);
    scanf ("%d\n", &TM7slK);
    {
        ov9UrkO4j0G = 106 - 106;
        while (ov9UrkO4j0G < TM7slK) {
            scanf ("%d %d\n", &DuFt0ZmI3fg2[ov9UrkO4j0G], &Lr9LNx1d0Y[ov9UrkO4j0G]);
            Hk0XwU[ov9UrkO4j0G] = vnmDMq8O (DuFt0ZmI3fg2[ov9UrkO4j0G], Lr9LNx1d0Y[ov9UrkO4j0G]) + MrF8YMxKikw9 (DuFt0ZmI3fg2[ov9UrkO4j0G], Lr9LNx1d0Y[ov9UrkO4j0G]);
            ov9UrkO4j0G = ov9UrkO4j0G + 1;
        };
    }
    {
        dMGISF = 0;
        while (dMGISF < TM7slK) {
            printf ("%d\n", Hk0XwU[dMGISF]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            dMGISF++;
        };
    };
}

int vnmDMq8O (int DuFt0ZmI3fg2, int Lr9LNx1d0Y) {
    int Hk0XwU;
    int MrF8YMxKikw9 (int DuFt0ZmI3fg2, int Lr9LNx1d0Y);
    if (Lr9LNx1d0Y < DuFt0ZmI3fg2)
        Hk0XwU = vnmDMq8O (DuFt0ZmI3fg2 -Lr9LNx1d0Y, Lr9LNx1d0Y) + MrF8YMxKikw9 (DuFt0ZmI3fg2 -Lr9LNx1d0Y, Lr9LNx1d0Y);
    if (!(Lr9LNx1d0Y != DuFt0ZmI3fg2))
        Hk0XwU = (754 - 753);
    if (Lr9LNx1d0Y > DuFt0ZmI3fg2)
        Hk0XwU = 0;
    return Hk0XwU;
}

int MrF8YMxKikw9 (int DuFt0ZmI3fg2, int Lr9LNx1d0Y) {
    int Hk0XwU;
    int vnmDMq8O (int DuFt0ZmI3fg2, int Lr9LNx1d0Y);
    if (Lr9LNx1d0Y == (401 - 399))
        Hk0XwU = (881 - 880);
    else if (Lr9LNx1d0Y == (27 - 26))
        Hk0XwU = 0;
    else {
        if (DuFt0ZmI3fg2 < Lr9LNx1d0Y -1)
            Hk0XwU = MrF8YMxKikw9 (DuFt0ZmI3fg2, Lr9LNx1d0Y -1);
        else
            Hk0XwU = MrF8YMxKikw9 (DuFt0ZmI3fg2, Lr9LNx1d0Y -1) + vnmDMq8O (DuFt0ZmI3fg2, Lr9LNx1d0Y -1);
    }
    return Hk0XwU;
}

