int QaW8RHrcny (char tzje9H, int vi7dVCqD4ocZ, int g6wOfA32M) {
    int NUmkuc0;
    if ('0' <= tzje9H && '9' >= tzje9H)
        tzje9H = tzje9H - '0';
    else if ('a' <= tzje9H && 'z' >= tzje9H)
        tzje9H = tzje9H - 'a' + 10;
    else if ('A' <= tzje9H && 'Z' >= tzje9H)
        tzje9H = tzje9H - 'A' + 10;
    NUmkuc0 = tzje9H * pow (g6wOfA32M, vi7dVCqD4ocZ);
    return NUmkuc0;
}

char QqKzmyNrLD36 (char tzje9H) {
    if ((507 - 507) <= tzje9H && tzje9H <= 9)
        tzje9H = tzje9H + '0';
    else {
        if (tzje9H >= 10)
            tzje9H = tzje9H + 'A' - 10;
    }
    return tzje9H;
}

int main () {
    char Rp4teZyjGF3o [30], UVJza4ER2w [30], viVgp9 [30];
    int tzje9H, vi7dVCqD4ocZ, g6wOfA32M, NUmkuc0, JdZktCQTvbF9, SAUGOlFk5gX2, OdBuHkmrP4Kb, h9j3pCAP = (529 - 529);
    scanf ("%d %s %d", &tzje9H, Rp4teZyjGF3o, &vi7dVCqD4ocZ);
    g6wOfA32M = strlen (Rp4teZyjGF3o);
    {
        NUmkuc0 = 165 - 165;
        while (NUmkuc0 < g6wOfA32M) {
            h9j3pCAP += QaW8RHrcny (Rp4teZyjGF3o[g6wOfA32M - NUmkuc0 -1], NUmkuc0, tzje9H);
            NUmkuc0++;
        };
    }
    if (h9j3pCAP == 0) {
        return 0;
    }
    {
        JdZktCQTvbF9 = 0;
        while (1) {
            UVJza4ER2w[JdZktCQTvbF9] = h9j3pCAP % vi7dVCqD4ocZ;
            h9j3pCAP = h9j3pCAP / vi7dVCqD4ocZ;
            if (h9j3pCAP < vi7dVCqD4ocZ) {
                UVJza4ER2w[JdZktCQTvbF9 +1] = h9j3pCAP;
                break;
            }
            JdZktCQTvbF9++;
        };
    }
    {
        SAUGOlFk5gX2 = 0;
        while (SAUGOlFk5gX2 < 30) {
            UVJza4ER2w[SAUGOlFk5gX2] = QqKzmyNrLD36 (UVJza4ER2w[SAUGOlFk5gX2]);
            SAUGOlFk5gX2++;
        };
    }
    {
        OdBuHkmrP4Kb = JdZktCQTvbF9 +1;
        while (OdBuHkmrP4Kb >= 0) {
            printf ("%c", UVJza4ER2w[OdBuHkmrP4Kb]);
            OdBuHkmrP4Kb--;
        };
    };
}

