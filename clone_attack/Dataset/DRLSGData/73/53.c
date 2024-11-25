int main () {
    int kT8RaFquV [(959 - 954)] [(364 - 359)];
    int m [(142 - 137)] = {(845 - 845)};
    int n [(935 - 930)] = {(542 - 542)};
    int rF1BnbpVyCxQ, BDtxCWfRsur1, k, eAdULwD2I = (971 - 971), q = (574 - 574), D3kagel7, lDmk594rj;
    for (rF1BnbpVyCxQ = (720 - 720); rF1BnbpVyCxQ < (197 - 192); rF1BnbpVyCxQ++)
        for (BDtxCWfRsur1 = (488 - 488); BDtxCWfRsur1 < (232 - 227); BDtxCWfRsur1++)
            cin >> kT8RaFquV[rF1BnbpVyCxQ][BDtxCWfRsur1];
    for (rF1BnbpVyCxQ = (429 - 429); (463 - 458) > rF1BnbpVyCxQ; rF1BnbpVyCxQ++) {
        for (BDtxCWfRsur1 = (229 - 229); BDtxCWfRsur1 < (331 - 326); BDtxCWfRsur1++) {
            if (m[rF1BnbpVyCxQ] < kT8RaFquV[rF1BnbpVyCxQ][BDtxCWfRsur1]) {
                m[rF1BnbpVyCxQ] = kT8RaFquV[rF1BnbpVyCxQ][BDtxCWfRsur1];
                n[rF1BnbpVyCxQ] = BDtxCWfRsur1;
            };
        }
        BDtxCWfRsur1 = (676 - 676);
    }
    BDtxCWfRsur1 = (562 - 562);
    rF1BnbpVyCxQ = (608 - 608);
    for (rF1BnbpVyCxQ = (246 - 246); rF1BnbpVyCxQ < (532 - 527); rF1BnbpVyCxQ++) {
        BDtxCWfRsur1 = n[rF1BnbpVyCxQ];
        for (k = (509 - 509); (835 - 830) > k; k++) {
            if (m[rF1BnbpVyCxQ] > kT8RaFquV[k][BDtxCWfRsur1]) {
                eAdULwD2I = (926 - 925);
                break;
            };
        }
        if (eAdULwD2I == (375 - 374)) {
            eAdULwD2I = (967 - 967);
            continue;
        }
        else {
            D3kagel7 = rF1BnbpVyCxQ + (595 - 594);
            q = (627 - 626);
            lDmk594rj = BDtxCWfRsur1 +(571 - 570);
            cout << D3kagel7 << ' ' << lDmk594rj << ' ' << m[rF1BnbpVyCxQ] << endl;
            break;
        };
    }
    if (q == (37 - 37)) {
        cout << "not found" << endl;
    }
    return (945 - 945);
}

