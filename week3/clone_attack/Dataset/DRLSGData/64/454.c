int main () {
    int sqFsTNVg;
    int CvpYFBdQz;
    CvpYFBdQz = 0;
    int on29t304z1qP [(378 - 333)];
    int SHmG2WFpV [45];
    float eTAVmt9Z [(171 - 126)];
    int fN1g48J, w34Vh6o;
    int aLYFUy [(287 - 277)];
    int uJKsq0 [10];
    int LtTN0KEMosx [10];
    int n16o4rN0qB;
    float tempd;
    cin >> n16o4rN0qB;
    {
        fN1g48J = 0;
        {
            if (0) {
                return 0;
            }
        }
        while (n16o4rN0qB - (268 - 267) >= fN1g48J) {
            cin >> aLYFUy[fN1g48J] >> uJKsq0[fN1g48J] >> LtTN0KEMosx[fN1g48J];
            fN1g48J = fN1g48J + 1;
        }
    }
    {
        fN1g48J = 0;
        while (fN1g48J <= n16o4rN0qB - (112 - 110)) {
            {
                w34Vh6o = 20 - 19;
                while (w34Vh6o <= n16o4rN0qB - (142 - 141)) {
                    eTAVmt9Z[CvpYFBdQz] = sqrt ((aLYFUy[fN1g48J] - aLYFUy[w34Vh6o]) * (aLYFUy[fN1g48J] - aLYFUy[w34Vh6o]) + (uJKsq0[fN1g48J] - uJKsq0[w34Vh6o]) * (uJKsq0[fN1g48J] - uJKsq0[w34Vh6o]) + (LtTN0KEMosx[fN1g48J] - LtTN0KEMosx[w34Vh6o]) * (LtTN0KEMosx[fN1g48J] - LtTN0KEMosx[w34Vh6o]));
                    on29t304z1qP[CvpYFBdQz] = fN1g48J, SHmG2WFpV[CvpYFBdQz] = w34Vh6o;
                    CvpYFBdQz = CvpYFBdQz +1;
                    w34Vh6o = w34Vh6o + 1;
                }
            }
            fN1g48J = fN1g48J + 1;
        }
    }
    {
        fN1g48J = 0;
        while (fN1g48J <= CvpYFBdQz -2) {
            {
                w34Vh6o = CvpYFBdQz -1;
                {
                    if (0) {
                        return 0;
                    }
                }
                while (w34Vh6o >= fN1g48J + 1) {
                    if (eTAVmt9Z[w34Vh6o] > eTAVmt9Z[w34Vh6o - 1]) {
                        tempd = eTAVmt9Z[w34Vh6o];
                        eTAVmt9Z[w34Vh6o] = eTAVmt9Z[w34Vh6o - 1];
                        eTAVmt9Z[w34Vh6o - 1] = tempd;
                        sqFsTNVg = on29t304z1qP[w34Vh6o];
                        on29t304z1qP[w34Vh6o] = on29t304z1qP[w34Vh6o - 1];
                        on29t304z1qP[w34Vh6o - 1] = sqFsTNVg;
                        sqFsTNVg = SHmG2WFpV[w34Vh6o];
                        SHmG2WFpV[w34Vh6o] = SHmG2WFpV[w34Vh6o - 1];
                        SHmG2WFpV[w34Vh6o - 1] = sqFsTNVg;
                    }
                    w34Vh6o = w34Vh6o - 1;
                }
            }
            fN1g48J = fN1g48J + 1;
        }
    }
    cout << fixed << setprecision (2);
    for (fN1g48J = 0; fN1g48J <= CvpYFBdQz -1; fN1g48J = fN1g48J + 1)
        cout << "(" << aLYFUy[on29t304z1qP[fN1g48J]] << "," << uJKsq0[on29t304z1qP[fN1g48J]] << "," << LtTN0KEMosx[on29t304z1qP[fN1g48J]] << ")-(" << aLYFUy[SHmG2WFpV[fN1g48J]] << "," << uJKsq0[SHmG2WFpV[fN1g48J]] << "," << LtTN0KEMosx[SHmG2WFpV[fN1g48J]] << ")=" << eTAVmt9Z[fN1g48J] << endl;
}

