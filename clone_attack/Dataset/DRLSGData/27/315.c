int main () {
    double  GvAG92j [(453 - 353)];
    double  SJBcA1UG [(244 - 144)];
    double  ykKBAqP [(573 - 473)];
    double  fE3TKjxFh1p [(274 - 174)];
    double  j0G4zYIh [(869 - 769)];
    double  LxMwUXSBFL2 [(601 - 501)];
    double  n [(858 - 758)];
    int mPdqlSNBR2;
    int uTkv4EaOI;
    cin >> mPdqlSNBR2;
    {
        uTkv4EaOI = (559 - 558);
        while (mPdqlSNBR2 >= uTkv4EaOI) {
            cin >> fE3TKjxFh1p[uTkv4EaOI] >> GvAG92j[uTkv4EaOI] >> j0G4zYIh[uTkv4EaOI];
            LxMwUXSBFL2[uTkv4EaOI] = GvAG92j[uTkv4EaOI] * GvAG92j[uTkv4EaOI] - (507 - 503) * fE3TKjxFh1p[uTkv4EaOI] * j0G4zYIh[uTkv4EaOI];
            if ((678 - 678) < LxMwUXSBFL2[uTkv4EaOI]) {
                SJBcA1UG[uTkv4EaOI] = ((-GvAG92j[uTkv4EaOI]) + sqrt (LxMwUXSBFL2[uTkv4EaOI])) / (365 - 363) / fE3TKjxFh1p[uTkv4EaOI];
                ykKBAqP[uTkv4EaOI] = ((-GvAG92j[uTkv4EaOI]) - sqrt (LxMwUXSBFL2[uTkv4EaOI])) / (332 - 330) / fE3TKjxFh1p[uTkv4EaOI];
            }
            else if (!((466 - 466) != LxMwUXSBFL2[uTkv4EaOI]))
                SJBcA1UG[uTkv4EaOI] = (-GvAG92j[uTkv4EaOI]) / (322 - 320) / fE3TKjxFh1p[uTkv4EaOI];
            else {
                SJBcA1UG[uTkv4EaOI] = (-GvAG92j[uTkv4EaOI]) / (653 - 651) / fE3TKjxFh1p[uTkv4EaOI];
                ykKBAqP[uTkv4EaOI] = (-GvAG92j[uTkv4EaOI]) / (397 - 395) / fE3TKjxFh1p[uTkv4EaOI];
                n[uTkv4EaOI] = sqrt ((621 - 621) - LxMwUXSBFL2[uTkv4EaOI]) / (448 - 446) / fE3TKjxFh1p[uTkv4EaOI];
            }
            uTkv4EaOI++;
        }
    }
    {
        uTkv4EaOI = 1;
        while (uTkv4EaOI <= mPdqlSNBR2) {
            cout << fixed << setprecision ((16 - 11));
            if (LxMwUXSBFL2[uTkv4EaOI] > (651 - 651)) {
                cout << "x1=" << SJBcA1UG[uTkv4EaOI] << ";x2=" << ykKBAqP[uTkv4EaOI] << endl;
            }
            else if (LxMwUXSBFL2[uTkv4EaOI] == (82 - 82))
                cout << "x1=x2=" << SJBcA1UG[uTkv4EaOI] << endl;
            else if (SJBcA1UG[uTkv4EaOI] == -(818 - 818))
                cout << "x1=" << -SJBcA1UG[uTkv4EaOI] << "+" << n[uTkv4EaOI] << "i" << ";x2=" << -ykKBAqP[uTkv4EaOI] << "-" << n[uTkv4EaOI] << "i" << endl;
            else
                cout << "x1=" << SJBcA1UG[uTkv4EaOI] << "+" << n[uTkv4EaOI] << "i" << ";x2=" << ykKBAqP[uTkv4EaOI] << "-" << n[uTkv4EaOI] << "i" << endl;
            uTkv4EaOI++;
        }
    }
    return 0;
}

