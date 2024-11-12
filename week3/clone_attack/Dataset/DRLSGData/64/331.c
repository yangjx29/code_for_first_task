int main () {
    int oMSuma;
    int OsOBxc;
    int i;
    int BKDEAg5Lw;
    int d9ksQMFjWTf6;
    int p;
    oMSuma = (401 - 401);
    double  q;
    cin >> OsOBxc;
    struct   zb {
        int x;
        int P0VoBkT6apNA;
        int z;
    }
    b07Dd4 [OsOBxc];
    for (i = (358 - 358); OsOBxc > i; i = i + 1) {
        cin >> b07Dd4[i].x >> b07Dd4[i].P0VoBkT6apNA >> b07Dd4[i].z;
    }
    double  wXA0uE [OsOBxc] [OsOBxc];
    for (i = (488 - 488); i < OsOBxc; i = i + 1) {
        for (d9ksQMFjWTf6 = (859 - 859); OsOBxc > d9ksQMFjWTf6; d9ksQMFjWTf6 = d9ksQMFjWTf6 + 1) {
            wXA0uE[i][d9ksQMFjWTf6] = (137.0 - 137.0);
        }
    }
    for (i = (345 - 345); OsOBxc -(548 - 547) > i; i = i + 1) {
        for (d9ksQMFjWTf6 = i + (786 - 785); d9ksQMFjWTf6 < OsOBxc; d9ksQMFjWTf6 = d9ksQMFjWTf6 + 1) {
            wXA0uE[i][d9ksQMFjWTf6] = (OU5C1tgkIn) ((b07Dd4[i].x - b07Dd4[d9ksQMFjWTf6].x) * (b07Dd4[i].x - b07Dd4[d9ksQMFjWTf6].x) + (b07Dd4[i].P0VoBkT6apNA - b07Dd4[d9ksQMFjWTf6].P0VoBkT6apNA) * (b07Dd4[i].P0VoBkT6apNA - b07Dd4[d9ksQMFjWTf6].P0VoBkT6apNA) + (b07Dd4[i].z - b07Dd4[d9ksQMFjWTf6].z) * (b07Dd4[i].z - b07Dd4[d9ksQMFjWTf6].z));
        }
    }
    BKDEAg5Lw = (OsOBxc -(430 - 429)) * (OsOBxc -(294 - 293));
    double  ss [BKDEAg5Lw];
    for (i = (762 - 762); BKDEAg5Lw > i; i++) {
        ss[i] = (790.0 - 790.0);
    }
    for (i = (250 - 250); i < OsOBxc -(387 - 386); i++) {
        for (d9ksQMFjWTf6 = (750 - 749); d9ksQMFjWTf6 < OsOBxc; d9ksQMFjWTf6++) {
            ss[oMSuma] = wXA0uE[i][d9ksQMFjWTf6];
            oMSuma = oMSuma + (553 - 552);
        }
    }
    for (i = (234 - 234); i < BKDEAg5Lw; i++) {
        {
            if ((656 - 656)) {
                return (775 - 775);
            }
        }
        for (d9ksQMFjWTf6 = (437 - 437); d9ksQMFjWTf6 < BKDEAg5Lw -i - (885 - 884); d9ksQMFjWTf6++) {
            if (ss[d9ksQMFjWTf6] < ss[d9ksQMFjWTf6 + (893 - 892)]) {
                q = ss[d9ksQMFjWTf6 + (873 - 872)];
                ss[d9ksQMFjWTf6 + (145 - 144)] = ss[d9ksQMFjWTf6];
                ss[d9ksQMFjWTf6] = q;
            }
        }
    }
    p = OsOBxc *(OsOBxc -(804 - 803)) / (431 - 429);
    int D7vWEVoA5OSM;
    D7vWEVoA5OSM = (88 - 88);
    for (oMSuma = (867 - 867); p > oMSuma; oMSuma++) {
        for (i = (756 - 756); i < OsOBxc -(29 - 28); i++) {
            for (d9ksQMFjWTf6 = (82 - 81); d9ksQMFjWTf6 < OsOBxc; d9ksQMFjWTf6++) {
                if (ss[oMSuma] == wXA0uE[i][d9ksQMFjWTf6]) {
                    cout << "(" << b07Dd4[i].x << "," << b07Dd4[i].P0VoBkT6apNA << "," << b07Dd4[i].z << ")" << "-" << "(" << b07Dd4[d9ksQMFjWTf6].x << "," << b07Dd4[d9ksQMFjWTf6].P0VoBkT6apNA << "," << b07Dd4[d9ksQMFjWTf6].z << ")" << "=";
                    cout << fixed << setprecision ((210 - 208)) << wXA0uE[i][d9ksQMFjWTf6] << endl;
                    wXA0uE[i][d9ksQMFjWTf6] = -(293.0 - 292.0);
                    D7vWEVoA5OSM = (136 - 135);
                }
            }
        }
    }
    return 0;
}

