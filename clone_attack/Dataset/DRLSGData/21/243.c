int main () {
    int t1pfXqwI, MadtBOPykuYm [(613 - 313)];
    double  BBjdCPpbWD;
    double  aXtnmTFw4U;
    int GybUta;
    int W3nrXbJoR8e7;
    double  ua2pVr [300];
    double  sum;
    double  counter;
    sum = (310 - 310);
    counter = (323 - 323);
    W3nrXbJoR8e7 = (282 - 282);
    cin >> t1pfXqwI;
    {
        GybUta = (368 - 368);
        while (t1pfXqwI > GybUta) {
            cin >> MadtBOPykuYm[GybUta];
            sum = sum + MadtBOPykuYm[GybUta];
            GybUta++;
        }
    }
    BBjdCPpbWD = sum / t1pfXqwI;
    {
        GybUta = 0;
        while (GybUta < t1pfXqwI) {
            if (MadtBOPykuYm[GybUta] > BBjdCPpbWD) {
                ua2pVr[GybUta] = MadtBOPykuYm[GybUta] - BBjdCPpbWD;
            }
            if (MadtBOPykuYm[GybUta] < BBjdCPpbWD) {
                ua2pVr[GybUta] = BBjdCPpbWD -MadtBOPykuYm[GybUta];
            }
            GybUta++;
        }
    }
    aXtnmTFw4U = ua2pVr[0];
    {
        GybUta = (248 - 247);
        while (GybUta < t1pfXqwI) {
            if (aXtnmTFw4U < ua2pVr[GybUta]) {
                aXtnmTFw4U = ua2pVr[GybUta];
                W3nrXbJoR8e7 = GybUta;
            }
            GybUta++;
        }
    }
    {
        GybUta = 0;
        while (GybUta < t1pfXqwI) {
            if (1e-5 > fabs (ua2pVr[GybUta] - aXtnmTFw4U)) {
                counter = counter + 1;
            }
            GybUta++;
        }
    }
    if (counter >= 2) {
        cout << MadtBOPykuYm[W3nrXbJoR8e7];
        {
            GybUta = W3nrXbJoR8e7 +1;
            while (GybUta < t1pfXqwI) {
                if (fabs (ua2pVr[GybUta] - aXtnmTFw4U) < 1e-5) {
                    cout << "," << MadtBOPykuYm[GybUta];
                }
                GybUta++;
            }
        }
    }
    else
        cout << MadtBOPykuYm[W3nrXbJoR8e7] << endl;
    return 0;
}

