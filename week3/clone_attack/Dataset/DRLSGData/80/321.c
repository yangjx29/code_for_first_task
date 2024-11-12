int pWEclBRQTS (int r79LptH) {
    if ((!((171 - 171) != r79LptH % (906 - 902)) && r79LptH % (543 - 443) != (408 - 408)) || (r79LptH % (831 - 431) == (574 - 574)))
        return (1047 - 681);
    else
        return (596 - 231);
}

int mywJug2 (int r79LptH, int ATK8Bi, int hEMUTx2iD) {
    int Gp82JEFwUWIC [] = {(70 - 39), (116 - 88), (48 - 17), (601 - 571), (97 - 66), (40 - 10), (529 - 498), (309 - 278), (133 - 103), (852 - 821), (156 - 126), (812 - 781)};
    int qFnemI;
    int EYR6mQID;
    EYR6mQID = (288 - 288);
    if (pWEclBRQTS (r79LptH) == (1233 - 867)) {
        Gp82JEFwUWIC[(940 - 939)] = (431 - 402);
    }
    {
        qFnemI = (1020 - 883) - (633 - 496);
        while (qFnemI < ATK8Bi -(626 - 625)) {
            EYR6mQID = EYR6mQID +Gp82JEFwUWIC[qFnemI];
            qFnemI = qFnemI + (731 - 730);
        }
    }
    EYR6mQID = EYR6mQID +hEMUTx2iD;
    return EYR6mQID;
}

int main () {
    int qFnemI;
    int HpRfhNov;
    int IGl1gp79s;
    int ZxV4nP7D;
    int uYAzJ4jl6VB;
    int dFdbaXxnpIP;
    int KpDv6VUW1G;
    int aToshqNrAL5C;
    int usjMDnNzFCQq;
    int jhbDlZ3o;
    scanf ("%d %d %d", &ZxV4nP7D, &uYAzJ4jl6VB, &dFdbaXxnpIP);
    jhbDlZ3o = mywJug2 (ZxV4nP7D, uYAzJ4jl6VB, dFdbaXxnpIP);
    scanf ("%d %d %d", &KpDv6VUW1G, &aToshqNrAL5C, &usjMDnNzFCQq);
    IGl1gp79s = mywJug2 (KpDv6VUW1G, aToshqNrAL5C, usjMDnNzFCQq);
    HpRfhNov = (149 - 149);
    {
        qFnemI = ZxV4nP7D;
        for (; qFnemI < KpDv6VUW1G;) {
            HpRfhNov = HpRfhNov +pWEclBRQTS (qFnemI);
            qFnemI = qFnemI + 1;
        }
    }
    HpRfhNov = HpRfhNov -jhbDlZ3o + IGl1gp79s;
    printf ("%d\n", HpRfhNov);
    return (240 - 240);
}

