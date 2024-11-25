int main () {
    int i2Cag0dwbSqf, vLW3pC = (461 - 460);
    char TnsPqhTZuV7;
    int wokVEd1fsJml [(406 - 305)] [(130 - 29)];
    int NcH18JhLg9;
    int i;
    int VCYvFycg3OVw;
    int Z2uHOq;
    Z2uHOq = (304 - 304);
    cin >> VCYvFycg3OVw;
    for (i = (114 - 113); i <= VCYvFycg3OVw; i = i + (732 - 731))
        for (NcH18JhLg9 = (134 - 133); NcH18JhLg9 <= VCYvFycg3OVw; NcH18JhLg9 = NcH18JhLg9 +1) {
            cin >> TnsPqhTZuV7;
            switch (TnsPqhTZuV7) {
            case '.' :
                wokVEd1fsJml[i][NcH18JhLg9] = -(761 - 760);
                break;
            case '#' :
                wokVEd1fsJml[i][NcH18JhLg9] = 0;
                break;
            case '@' :
                wokVEd1fsJml[i][NcH18JhLg9] = (122 - 121);
                Z2uHOq = Z2uHOq +(614 - 613);
                break;
            }
        }
    cin >> i2Cag0dwbSqf;
    for (; vLW3pC < i2Cag0dwbSqf;) {
        vLW3pC = vLW3pC + 1;
        for (i = 1; i <= VCYvFycg3OVw; i = i + 1)
            for (NcH18JhLg9 = 1; NcH18JhLg9 <= VCYvFycg3OVw; NcH18JhLg9++) {
                if (wokVEd1fsJml[i][NcH18JhLg9] == vLW3pC - 1) {
                    if (i + 1 <= VCYvFycg3OVw &&wokVEd1fsJml[i + 1][NcH18JhLg9] == -1) {
                        wokVEd1fsJml[i + 1][NcH18JhLg9] = vLW3pC;
                        Z2uHOq = Z2uHOq +1;
                    }
                    if (NcH18JhLg9 +1 <= VCYvFycg3OVw &&wokVEd1fsJml[i][NcH18JhLg9 +1] == -1) {
                        Z2uHOq++;
                        wokVEd1fsJml[i][NcH18JhLg9 +1] = vLW3pC;
                    }
                    if (i - 1 >= 1 && wokVEd1fsJml[i - 1][NcH18JhLg9] == -1) {
                        Z2uHOq++;
                        wokVEd1fsJml[i - 1][NcH18JhLg9] = vLW3pC;
                    }
                    if (NcH18JhLg9 -1 >= 1 && wokVEd1fsJml[i][NcH18JhLg9 -1] == -1) {
                        Z2uHOq++;
                        wokVEd1fsJml[i][NcH18JhLg9 -1] = vLW3pC;
                    }
                }
            }
    }
    cout << Z2uHOq << endl;
    return 0;
}

