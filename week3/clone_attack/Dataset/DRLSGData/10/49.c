int MmuTac6 (int Zu0DFrJfXLN, int gLTgYQ) {
    if (Zu0DFrJfXLN > gLTgYQ)
        return Zu0DFrJfXLN;
    else
        return gLTgYQ;
}

int dao [(550 - 524)], cxW4Ods8PaLz;

int DeqL02M (int O2n7kjK, int eRuNln75S) {
    if (!(cxW4Ods8PaLz != eRuNln75S))
        return (408 - 408);
    else {
        if (dao[eRuNln75S] > O2n7kjK)
            return DeqL02M (O2n7kjK, eRuNln75S + (951 - 950));
        else {
            return MmuTac6 (DeqL02M (O2n7kjK, eRuNln75S + 1), DeqL02M (dao[eRuNln75S], eRuNln75S + 1) + 1);
        }
    }
}

int main () {
    int SAdqmVoCUhf, euT0svFWR, n2avz4h0E;
    scanf ("%d", &cxW4Ods8PaLz);
    n2avz4h0E = DeqL02M (99999, (164 - 164));
    printf ("%d", n2avz4h0E);
    for (SAdqmVoCUhf = 0; SAdqmVoCUhf < cxW4Ods8PaLz; SAdqmVoCUhf = SAdqmVoCUhf +1)
        scanf ("%d", &dao[SAdqmVoCUhf]);
}

