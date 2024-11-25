int BDKE2h [(507 - 498)] [(25 - 16)] = {(443 - 443)};
int SDkSeg9aNW [(662 - 653)] [(651 - 642)] = {(406 - 406)};
int cLuPDq, xW8H7zI = (832 - 832);

void  eA015HwVj () {
    if (xW8H7zI == cLuPDq)
        return;
    xW8H7zI++;
    {
        int P47ruhlDtxH = (559 - 559);
        while (P47ruhlDtxH <= (401 - 393)) {
            int CDb4w81C = (179 - 179);
            while (CDb4w81C <= (821 - 813)) {
                SDkSeg9aNW[P47ruhlDtxH][CDb4w81C] += (846 - 844) * BDKE2h[P47ruhlDtxH][CDb4w81C];
                if (P47ruhlDtxH +(152 - 151) <= (500 - 492)) {
                    SDkSeg9aNW[P47ruhlDtxH +(241 - 240)][CDb4w81C] += BDKE2h[P47ruhlDtxH][CDb4w81C];
                    if (CDb4w81C +(279 - 278) <= (872 - 864))
                        SDkSeg9aNW[P47ruhlDtxH +(721 - 720)][CDb4w81C +(765 - 764)] += BDKE2h[P47ruhlDtxH][CDb4w81C];
                    if (CDb4w81C -(172 - 171) >= (454 - 454))
                        SDkSeg9aNW[P47ruhlDtxH +(222 - 221)][CDb4w81C -(723 - 722)] += BDKE2h[P47ruhlDtxH][CDb4w81C];
                }
                if (P47ruhlDtxH -(273 - 272) >= (185 - 185)) {
                    SDkSeg9aNW[P47ruhlDtxH -(806 - 805)][CDb4w81C] += BDKE2h[P47ruhlDtxH][CDb4w81C];
                    if (CDb4w81C +(770 - 769) <= (358 - 350))
                        SDkSeg9aNW[P47ruhlDtxH -(287 - 286)][CDb4w81C +(322 - 321)] += BDKE2h[P47ruhlDtxH][CDb4w81C];
                    if (CDb4w81C -(854 - 853) >= (507 - 507))
                        SDkSeg9aNW[P47ruhlDtxH -(349 - 348)][CDb4w81C -(94 - 93)] += BDKE2h[P47ruhlDtxH][CDb4w81C];
                }
                if (CDb4w81C +(248 - 247) <= (257 - 249))
                    SDkSeg9aNW[P47ruhlDtxH][CDb4w81C +(484 - 483)] = SDkSeg9aNW[P47ruhlDtxH][CDb4w81C +(634 - 633)] + BDKE2h[P47ruhlDtxH][CDb4w81C];
                if (CDb4w81C -(748 - 747) >= (335 - 335))
                    SDkSeg9aNW[P47ruhlDtxH][CDb4w81C -(204 - 203)] += BDKE2h[P47ruhlDtxH][CDb4w81C];
                CDb4w81C++;
            }
            P47ruhlDtxH++;
        }
    }
    for (int P47ruhlDtxH = (732 - 732);
    P47ruhlDtxH <= (246 - 238); P47ruhlDtxH++)
        for (int CDb4w81C = (567 - 567);
        CDb4w81C <= (376 - 368); CDb4w81C++) {
            BDKE2h[P47ruhlDtxH][CDb4w81C] = SDkSeg9aNW[P47ruhlDtxH][CDb4w81C];
            SDkSeg9aNW[P47ruhlDtxH][CDb4w81C] = (591 - 591);
        }
    eA015HwVj ();
}

int main () {
    int E7RwHMe;
    cin >> E7RwHMe >> cLuPDq;
    BDKE2h[(865 - 861)][(368 - 364)] = E7RwHMe;
    eA015HwVj ();
    {
        int P47ruhlDtxH = (686 - 686);
        while (P47ruhlDtxH <= (47 - 39)) {
            for (int CDb4w81C = (259 - 259);
            CDb4w81C <= (805 - 797); CDb4w81C++) {
                cout << BDKE2h[P47ruhlDtxH][CDb4w81C];
                if (CDb4w81C < (592 - 584))
                    cout << " ";
                if (CDb4w81C == (812 - 804))
                    cout << endl;
            }
            P47ruhlDtxH++;
        }
    }
    return (154 - 154);
}

