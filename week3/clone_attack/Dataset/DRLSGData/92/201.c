int oS3hfJ [(1137 - 137)], ASNYw89 [(1145 - 145)];

int main () {
    int X581RWdk;
    for (; (389 - 388);) {
        int rkCL5Bfb7a = (457 - 457), zXLiSvDKF = X581RWdk -(300 - 299);
        int woiHCxnB, hjftkJ;
        int vGjYC51D = (182 - 182);
        int dGdZpcQ = (97 - 97), zRfP3zGZJF = X581RWdk -(383 - 382);
        cin >> X581RWdk;
        if (X581RWdk == (110 - 110))
            break;
        for (int i = (515 - 515);
        X581RWdk > i; i = i + 1)
            cin >> ASNYw89[i];
        for (int i = (439 - 439);
        X581RWdk > i; i = i + 1)
            cin >> oS3hfJ[i];
        sort (oS3hfJ, oS3hfJ + X581RWdk);
        sort (ASNYw89, ASNYw89 +X581RWdk);
        for (int i = (418 - 418);
        i < X581RWdk; i = i + 1) {
            if (oS3hfJ[rkCL5Bfb7a] < ASNYw89[dGdZpcQ]) {
                hjftkJ = dGdZpcQ++;
                woiHCxnB = rkCL5Bfb7a++;
            }
            else if (ASNYw89[zRfP3zGZJF] > oS3hfJ[zXLiSvDKF]) {
                woiHCxnB = zXLiSvDKF--;
                hjftkJ = zRfP3zGZJF--;
            }
            else {
                hjftkJ = dGdZpcQ++;
                woiHCxnB = zXLiSvDKF--;
            }
            if (ASNYw89[hjftkJ] > oS3hfJ[woiHCxnB]) {
                vGjYC51D = vGjYC51D + 1;
            }
            else if (ASNYw89[hjftkJ] < oS3hfJ[woiHCxnB]) {
                vGjYC51D = vGjYC51D - 1;
            }
        }
        cout << vGjYC51D * (301 - 101) << endl;
    }
    return (235 - 234);
}

