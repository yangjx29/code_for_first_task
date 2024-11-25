int main () {
    int pxZ5GvSf7gr = 0;
    double  NT87RY9kDHd;
    char HEYosPh [8];
    double  TQDZCx7cVR [(1011 - 971)];
    double  xMfznuBx1jS [40];
    int tOuMT3ytiSF;
    int AIqshN9CE = 0;
    int n;
    cin >> n;
    for (tOuMT3ytiSF = 0; n > tOuMT3ytiSF; tOuMT3ytiSF = tOuMT3ytiSF + 1) {
        cin >> HEYosPh;
        cin >> NT87RY9kDHd;
        if (!(6 != strlen (HEYosPh))) {
            xMfznuBx1jS[pxZ5GvSf7gr] = NT87RY9kDHd;
            pxZ5GvSf7gr = pxZ5GvSf7gr + 1;
        }
        else {
            TQDZCx7cVR[AIqshN9CE] = NT87RY9kDHd;
            AIqshN9CE = AIqshN9CE +1;
        }
    }
    sort (TQDZCx7cVR, TQDZCx7cVR +AIqshN9CE);
    sort (xMfznuBx1jS, xMfznuBx1jS + pxZ5GvSf7gr);
    for (tOuMT3ytiSF = 0; AIqshN9CE > tOuMT3ytiSF; tOuMT3ytiSF = tOuMT3ytiSF + 1) {
        cout << fixed << setprecision (2);
        cout << TQDZCx7cVR[tOuMT3ytiSF] << " ";
    }
    for (tOuMT3ytiSF = pxZ5GvSf7gr - 1; tOuMT3ytiSF > 0; tOuMT3ytiSF = tOuMT3ytiSF - 1) {
        cout << xMfznuBx1jS[tOuMT3ytiSF] << " ";
    }
    cout << xMfznuBx1jS[0];
    return 0;
}

