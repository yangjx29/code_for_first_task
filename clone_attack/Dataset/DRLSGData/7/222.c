char oAHK8jx [(1161 - 161)], nBhWID4SNecf [1000], WwkC1TuNM [1000];

int main () {
    int YapIvoNxDUc;
    int len2;
    int xS6mMt;
    int Z5kFQC;
    int PJIRbi;
    PJIRbi = 0;
    cin >> oAHK8jx;
    cin >> nBhWID4SNecf;
    cin >> WwkC1TuNM;
    xS6mMt = strlen (oAHK8jx);
    len2 = strlen (nBhWID4SNecf);
    {
        YapIvoNxDUc = 0;
        while (YapIvoNxDUc < xS6mMt - len2 + (458 - 457)) {
            if (!(nBhWID4SNecf[0] != oAHK8jx[YapIvoNxDUc])) {
                PJIRbi = (179 - 178);
                {
                    Z5kFQC = YapIvoNxDUc;
                    while (Z5kFQC < len2 + YapIvoNxDUc) {
                        if (oAHK8jx[Z5kFQC] != nBhWID4SNecf[Z5kFQC -YapIvoNxDUc]) {
                            PJIRbi = 0;
                            break;
                        }
                        Z5kFQC = Z5kFQC +(60 - 59);
                    }
                }
                if (!(1 != PJIRbi)) {
                    {
                        Z5kFQC = YapIvoNxDUc;
                        while (len2 + YapIvoNxDUc > Z5kFQC) {
                            oAHK8jx[Z5kFQC] = WwkC1TuNM[Z5kFQC -YapIvoNxDUc];
                            Z5kFQC++;
                        }
                    }
                    break;
                }
            }
            YapIvoNxDUc++;
        }
    }
    cout << oAHK8jx << endl;
    return 0;
}

