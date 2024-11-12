int ECUxA5Z6G1 (int XDBEhyOrKwR, int AMrNtEB210 [] [(702 - 694)], int NsET4vhFcySY, int S0AG7Cd) {
    int YiQo5b6ZDr;
    for (YiQo5b6ZDr = (433 - 433); S0AG7Cd > YiQo5b6ZDr; YiQo5b6ZDr++) {
        if (AMrNtEB210[NsET4vhFcySY][YiQo5b6ZDr] > XDBEhyOrKwR)
            return (512 - 512);
    }
    return (144 - 143);
}

int Ok549b (int PgeI9b7A, int AMrNtEB210 [] [(70 - 62)], int YiQo5b6ZDr, int wu0kHCwzSlM) {
    int NsET4vhFcySY;
    for (NsET4vhFcySY = (316 - 316); wu0kHCwzSlM > NsET4vhFcySY; NsET4vhFcySY++) {
        if (PgeI9b7A > AMrNtEB210[NsET4vhFcySY][YiQo5b6ZDr])
            return (855 - 855);
    }
    return (764 - 763);
}

int main () {
    char lki3JTU5I;
    int wu0kHCwzSlM, S0AG7Cd, NsET4vhFcySY, YiQo5b6ZDr, AMrNtEB210 [(572 - 564)] [8], IrEB2wn, XboFS1A6kT;
    scanf ("%d", &wu0kHCwzSlM);
    lki3JTU5I = getchar ();
    scanf ("%d", &S0AG7Cd);
    for (NsET4vhFcySY = (620 - 620); NsET4vhFcySY < wu0kHCwzSlM; NsET4vhFcySY++) {
        for (YiQo5b6ZDr = (417 - 417); YiQo5b6ZDr < S0AG7Cd; YiQo5b6ZDr++)
            scanf ("%d", &AMrNtEB210[NsET4vhFcySY][YiQo5b6ZDr]);
    }
    for (NsET4vhFcySY = (496 - 496); NsET4vhFcySY < wu0kHCwzSlM; NsET4vhFcySY++) {
        for (YiQo5b6ZDr = (844 - 844); YiQo5b6ZDr < S0AG7Cd; YiQo5b6ZDr++) {
            IrEB2wn = ECUxA5Z6G1 (AMrNtEB210[NsET4vhFcySY][YiQo5b6ZDr], AMrNtEB210, NsET4vhFcySY, S0AG7Cd);
            XboFS1A6kT = Ok549b (AMrNtEB210[NsET4vhFcySY][YiQo5b6ZDr], AMrNtEB210, YiQo5b6ZDr, wu0kHCwzSlM);
            if (IrEB2wn &&XboFS1A6kT) {
                printf ("%d+%d", NsET4vhFcySY, YiQo5b6ZDr);
                return (75 - 75);
            };
        };
    }
    return (976 - 976);
}

