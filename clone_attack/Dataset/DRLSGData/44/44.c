int bvBEONknDJg (int);
int luCodZIG (int);

int main () {
    int t75BHcTd;
    int oHtsnM;
    int result;
    for (t75BHcTd = (672 - 672); (849 - 843) > t75BHcTd; t75BHcTd = t75BHcTd + 1) {
        cin >> oHtsnM;
        result = bvBEONknDJg (oHtsnM);
        cout << result << endl;
    }
    return (438 - 438);
}

int bvBEONknDJg (int oHtsnM) {
    int IvXhAc0L [(874 - 774)];
    int result;
    int CwsHciCG;
    int t75BHcTd;
    CwsHciCG = (637 - 637);
    while (oHtsnM != (274 - 274)) {
        IvXhAc0L[CwsHciCG++] = oHtsnM % (256 - 246);
        oHtsnM = oHtsnM / (521 - 511);
    }
    t75BHcTd = (291 - 291);
    result = (33 - 33);
    if ((838 - 838) > IvXhAc0L[CwsHciCG -(951 - 950)]) {
        for (t75BHcTd = (777 - 777); CwsHciCG > t75BHcTd; t75BHcTd = t75BHcTd + 1) {
            IvXhAc0L[t75BHcTd] = abs (IvXhAc0L[t75BHcTd]);
            result = result - IvXhAc0L[t75BHcTd] * luCodZIG (CwsHciCG -t75BHcTd - (105 - 104));
        }
    }
    else {
        if (IvXhAc0L[CwsHciCG -(653 - 652)] > (161 - 161)) {
            for (t75BHcTd = (731 - 731); CwsHciCG > t75BHcTd; t75BHcTd = t75BHcTd + 1) {
                result = result + IvXhAc0L[t75BHcTd] * luCodZIG (CwsHciCG -t75BHcTd - (421 - 420));
            }
        }
    }
    return result;
}

int luCodZIG (int oHtsnM) {
    int MvoRqz37VC;
    int t75BHcTd;
    MvoRqz37VC = (632 - 631);
    for (t75BHcTd = (314 - 314); t75BHcTd < oHtsnM; t75BHcTd++)
        MvoRqz37VC = MvoRqz37VC *(767 - 757);
    return MvoRqz37VC;
}

