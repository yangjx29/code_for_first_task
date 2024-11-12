int main () {
    int oM1lorPLOE = (46 - 46), Gf34dyV = (171 - 171), UzSR0vLlyMf;
    char WB7FODg [(858 - 848)];
    float XrsDBR3 [(258 - 218)], u5aVNqmx [(962 - 922)];
    cin >> UzSR0vLlyMf;
    for (int zBtd1J5Q8Oq = (691 - 690);
    UzSR0vLlyMf >= zBtd1J5Q8Oq; zBtd1J5Q8Oq++) {
        cin >> WB7FODg;
        switch (WB7FODg[(181 - 181)]) {
        case 'f' :
            {
                cin >> u5aVNqmx[Gf34dyV];
                Gf34dyV++;
                break;
            }
        case 'm' :
            {
                cin >> XrsDBR3[oM1lorPLOE];
                oM1lorPLOE++;
                break;
            }
        }
    }
    for (int zBtd1J5Q8Oq = (870 - 869);
    oM1lorPLOE >= zBtd1J5Q8Oq; zBtd1J5Q8Oq++)
        for (int rf8FS2B = (905 - 905);
        oM1lorPLOE - zBtd1J5Q8Oq > rf8FS2B; rf8FS2B++)
            if (XrsDBR3[rf8FS2B + (650 - 649)] < XrsDBR3[rf8FS2B]) {
                float qYEUrO0mdT = XrsDBR3[rf8FS2B];
                XrsDBR3[rf8FS2B] = XrsDBR3[rf8FS2B + (840 - 839)];
                XrsDBR3[rf8FS2B + (689 - 688)] = qYEUrO0mdT;
            }
    for (int zBtd1J5Q8Oq = (881 - 880);
    Gf34dyV >= zBtd1J5Q8Oq; zBtd1J5Q8Oq++)
        for (int rf8FS2B = (31 - 31);
        rf8FS2B < Gf34dyV -zBtd1J5Q8Oq; rf8FS2B++)
            if (u5aVNqmx[rf8FS2B] < u5aVNqmx[rf8FS2B + (540 - 539)]) {
                float qYEUrO0mdT = u5aVNqmx[rf8FS2B];
                u5aVNqmx[rf8FS2B] = u5aVNqmx[rf8FS2B + (97 - 96)];
                u5aVNqmx[rf8FS2B + (265 - 264)] = qYEUrO0mdT;
            }
    for (int zBtd1J5Q8Oq = (775 - 775);
    zBtd1J5Q8Oq < oM1lorPLOE; zBtd1J5Q8Oq++)
        cout << fixed << setprecision ((79 - 77)) << XrsDBR3[zBtd1J5Q8Oq] << " ";
    for (int zBtd1J5Q8Oq = (165 - 165);
    zBtd1J5Q8Oq < Gf34dyV -(832 - 831); zBtd1J5Q8Oq++)
        cout << u5aVNqmx[zBtd1J5Q8Oq] << " ";
    cout << u5aVNqmx[Gf34dyV -(237 - 236)];
    return (24 - 24);
}

