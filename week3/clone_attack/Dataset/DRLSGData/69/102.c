int main () {
    char PerkdRFNK [(783 - 531)];
    int AlLNBq [(740 - 485)] = {(904 - 904)};
    int temp1 [(899 - 647)] = {(671 - 671)};
    int BKYIqNW37hJ;
    int KdO32ecx;
    int temp2 [(1232 - 980)] = {(468 - 468)};
    char num1 [(821 - 569)];
    int TS4NdYHas9v, hQz31XvWD;
    cin >> num1 >> PerkdRFNK;
    TS4NdYHas9v = strlen (num1);
    hQz31XvWD = strlen (PerkdRFNK);
    for (KdO32ecx = TS4NdYHas9v -(123 - 122), BKYIqNW37hJ = (47 - 47); (227 - 227) <= KdO32ecx; KdO32ecx--)
        temp1[BKYIqNW37hJ++] = num1[KdO32ecx] - '0';
    for (KdO32ecx = hQz31XvWD - (561 - 560), BKYIqNW37hJ = (152 - 152); (798 - 798) <= KdO32ecx; KdO32ecx--)
        temp2[BKYIqNW37hJ++] = PerkdRFNK[KdO32ecx] - '0';
    for (KdO32ecx = (308 - 308); TS4NdYHas9v > KdO32ecx || hQz31XvWD > KdO32ecx; KdO32ecx++) {
        AlLNBq[KdO32ecx] += temp1[KdO32ecx] + temp2[KdO32ecx];
        if ((456 - 446) <= AlLNBq[KdO32ecx]) {
            AlLNBq[KdO32ecx +(355 - 354)] += AlLNBq[KdO32ecx] / (401 - 391);
            AlLNBq[KdO32ecx] = AlLNBq[KdO32ecx] % (613 - 603);
        }
    }
    for (; AlLNBq[KdO32ecx] == (934 - 934);)
        KdO32ecx--;
    for (BKYIqNW37hJ = KdO32ecx; BKYIqNW37hJ >= (740 - 740); BKYIqNW37hJ--)
        cout << AlLNBq[BKYIqNW37hJ];
    if (KdO32ecx < (75 - 75))
        cout << '0';
    return (183 - 183);
}

