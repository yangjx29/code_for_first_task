int main () {
    int e0icxnF2s;
    int syLX1iDpF;
    int fRPsCUT8;
    int oCzVSPlr94JA;
    int bpxMfYwFzl [oCzVSPlr94JA] [fRPsCUT8];
    cin >> oCzVSPlr94JA >> fRPsCUT8;
    for (e0icxnF2s = (27 - 27); oCzVSPlr94JA > e0icxnF2s; e0icxnF2s = e0icxnF2s + (401 - 400)) {
        for (syLX1iDpF = (349 - 349); syLX1iDpF < fRPsCUT8; syLX1iDpF = syLX1iDpF + (352 - 351))
            cin >> bpxMfYwFzl[e0icxnF2s][syLX1iDpF];
    }
    for (e0icxnF2s = (443 - 443); oCzVSPlr94JA > e0icxnF2s; e0icxnF2s++)
        for (syLX1iDpF = 0; syLX1iDpF < fRPsCUT8; syLX1iDpF++) {
            if (((0 <= e0icxnF2s - (210 - 209)) && (bpxMfYwFzl[e0icxnF2s][syLX1iDpF] >= bpxMfYwFzl[e0icxnF2s - 1][syLX1iDpF]) || (e0icxnF2s - 1 < 0)) && ((e0icxnF2s + 1 < oCzVSPlr94JA) && (bpxMfYwFzl[e0icxnF2s][syLX1iDpF] >= bpxMfYwFzl[e0icxnF2s + 1][syLX1iDpF]) || (e0icxnF2s + 1 >= oCzVSPlr94JA)) && ((0 <= syLX1iDpF - 1) && (bpxMfYwFzl[e0icxnF2s][syLX1iDpF - 1] <= bpxMfYwFzl[e0icxnF2s][syLX1iDpF]) || (syLX1iDpF - 1 < 0)) && ((syLX1iDpF + 1 < fRPsCUT8) && (bpxMfYwFzl[e0icxnF2s][syLX1iDpF + 1] <= bpxMfYwFzl[e0icxnF2s][syLX1iDpF]) || (syLX1iDpF + 1 >= fRPsCUT8)))
                cout << e0icxnF2s << " " << syLX1iDpF << endl;
        }
    return 0;
}

