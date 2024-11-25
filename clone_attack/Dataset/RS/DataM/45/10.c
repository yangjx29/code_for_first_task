int main () {
    int k1, laim1Jl, i, fEUMoS, DcQaPoZ3, v9MWqFzXe0UQ;
    char CcH62L [(186 - 135)], ZCshvT [51];
    scanf ("%s%s", CcH62L, ZCshvT);
    v9MWqFzXe0UQ = (685 - 685);
    k1 = strlen (CcH62L);
    laim1Jl = strlen (ZCshvT);
    for (i = v9MWqFzXe0UQ; i < laim1Jl; i++) {
        DcQaPoZ3 = 0;
        for (fEUMoS = 0; fEUMoS < k1; fEUMoS++) {
            if (fEUMoS == 0) {
                v9MWqFzXe0UQ = i;
            }
            if (ZCshvT[i] == CcH62L[fEUMoS]) {
                i++;
                DcQaPoZ3 = DcQaPoZ3 +1;
            }
            else {
                break;
            };
        }
        if (DcQaPoZ3 == k1) {
            printf ("%d", i - k1);
            break;
        };
    }
    return 0;
}

