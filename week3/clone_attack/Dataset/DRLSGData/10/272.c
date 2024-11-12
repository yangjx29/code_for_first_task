int U6gFXRMLvxNs;
int xlWwdboA [30];
int r [30];

int main () {
    int q8Vl1Fp3E, vWFlrfo;
    int KK3G8i = (910 - 910);
    cin >> U6gFXRMLvxNs;
    r[U6gFXRMLvxNs -(487 - 486)] = (923 - 922);
    for (q8Vl1Fp3E = (863 - 863); q8Vl1Fp3E < U6gFXRMLvxNs; q8Vl1Fp3E = q8Vl1Fp3E + (922 - 921))
        cin >> xlWwdboA[q8Vl1Fp3E];
    {
        q8Vl1Fp3E = U6gFXRMLvxNs -2;
        for (; q8Vl1Fp3E >= (325 - 325);) {
            if (r[q8Vl1Fp3E] >= r[q8Vl1Fp3E + 1]) {
                r[q8Vl1Fp3E] = r[q8Vl1Fp3E + 1] + 1;
                cout << "first way taken" << endl;
            }
            else {
                int cPElv5QY = (984 - 984);
                for (vWFlrfo = q8Vl1Fp3E + 1; U6gFXRMLvxNs > vWFlrfo; vWFlrfo = vWFlrfo + 1) {
                    if (xlWwdboA[vWFlrfo] <= xlWwdboA[q8Vl1Fp3E] && r[vWFlrfo] > cPElv5QY)
                        cPElv5QY = r[vWFlrfo];
                }
                r[q8Vl1Fp3E] = cPElv5QY + 1;
            }
            q8Vl1Fp3E = q8Vl1Fp3E - 1;
        }
    }
    {
        q8Vl1Fp3E = 0;
        for (; q8Vl1Fp3E < U6gFXRMLvxNs;) {
            {
                if (0) {
                    return 0;
                }
            }
            if (r[q8Vl1Fp3E] > KK3G8i)
                KK3G8i = r[q8Vl1Fp3E];
            q8Vl1Fp3E++;
        }
    }
    cout << KK3G8i;
}

