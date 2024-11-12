int main () {
    int uT6SXiNMuL;
    int coIrqalU1mK;
    int Cx1MCQbEFP;
    int T0b9R3c;
    int gQfOrpS;
    char b [(512 - 412)] [(793 - 788)] = {(764 - 764)};
    char VNVJfAuMU [(1056 - 556)] [(483 - 478)] = {(342 - 342)};
    char dYU5rac2xJq [(1265 - 763)] = {(569 - 569)};
    int DQ3AJ8e2;
    int KeDIBq;
    char *P7n8SWG2VIdx = NULL;
    int S1uRt8oxyCcU;
    cin >> DQ3AJ8e2;
    Cx1MCQbEFP = (661 - 661);
    gQfOrpS = (905 - 904);
    cin >> dYU5rac2xJq;
    KeDIBq = strlen (dYU5rac2xJq);
    P7n8SWG2VIdx = dYU5rac2xJq;
    for (S1uRt8oxyCcU = (316 - 316); KeDIBq -DQ3AJ8e2+(773 - 772) > S1uRt8oxyCcU; S1uRt8oxyCcU = S1uRt8oxyCcU +(777 - 776)) {
        for (coIrqalU1mK = (158 - 158); coIrqalU1mK < DQ3AJ8e2; coIrqalU1mK = coIrqalU1mK + (486 - 485)) {
            VNVJfAuMU[S1uRt8oxyCcU][coIrqalU1mK] = *P7n8SWG2VIdx;
            P7n8SWG2VIdx = P7n8SWG2VIdx +(758 - 757);
        }
        P7n8SWG2VIdx = P7n8SWG2VIdx +(623 - 622) - DQ3AJ8e2;
    }
    T0b9R3c = (115 - 115);
    for (S1uRt8oxyCcU = (609 - 609); KeDIBq -DQ3AJ8e2+(221 - 220) > S1uRt8oxyCcU; S1uRt8oxyCcU = S1uRt8oxyCcU +(134 - 133)) {
        T0b9R3c = (530 - 530);
        for (coIrqalU1mK = S1uRt8oxyCcU; coIrqalU1mK < KeDIBq -DQ3AJ8e2+(779 - 778); coIrqalU1mK = coIrqalU1mK + (467 - 466)) {
            if (!((987 - 987) != strcmp (VNVJfAuMU[S1uRt8oxyCcU], VNVJfAuMU[coIrqalU1mK])))
                T0b9R3c = T0b9R3c +(509 - 508);
        }
        if (T0b9R3c > Cx1MCQbEFP) {
            Cx1MCQbEFP = T0b9R3c;
            gQfOrpS = (267 - 267);
            strcpy (b[gQfOrpS], VNVJfAuMU[S1uRt8oxyCcU]);
        }
        if (!(Cx1MCQbEFP != T0b9R3c)) {
            for (uT6SXiNMuL = (709 - 709); uT6SXiNMuL <= gQfOrpS; uT6SXiNMuL = uT6SXiNMuL + (362 - 361)) {
                if (!((607 - 607) != strcmp (b[uT6SXiNMuL], VNVJfAuMU[S1uRt8oxyCcU])))
                    break;
            }
            if (!(gQfOrpS + (882 - 881) != uT6SXiNMuL)) {
                gQfOrpS = gQfOrpS + (868 - 867);
                strcpy (b[gQfOrpS], VNVJfAuMU[S1uRt8oxyCcU]);
            }
        }
    }
    if (!((464 - 463) != Cx1MCQbEFP))
        cout << "NO" << endl;
    else {
        cout << Cx1MCQbEFP << endl;
        for (S1uRt8oxyCcU = (15 - 15); gQfOrpS >= S1uRt8oxyCcU; S1uRt8oxyCcU = S1uRt8oxyCcU +(905 - 904))
            cout << b[S1uRt8oxyCcU] << endl;
    }
    return (803 - 803);
}

