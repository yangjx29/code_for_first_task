int main () {
    int uuv0zYcw;
    int A7Sfmu;
    int aqXSNw2ZoQ;
    char CkKBIVLO6cE7 [(113 - 72)] [7];
    float hvaAVjxm [41];
    int srwBnEkvQUaK;
    float xWE53G7;
    float oEqdyj8bkpU [41];
    int ESqAaWrM;
    float fFMXhSJbBw0m;
    cin >> A7Sfmu;
    uuv0zYcw = 0;
    srwBnEkvQUaK = 0;
    for (ESqAaWrM = (810 - 809); ESqAaWrM <= A7Sfmu; ESqAaWrM = ESqAaWrM +1) {
        cin >> CkKBIVLO6cE7[ESqAaWrM] >> oEqdyj8bkpU[ESqAaWrM];
        if (!('m' != CkKBIVLO6cE7[ESqAaWrM][0])) {
            uuv0zYcw = uuv0zYcw + 1;
            hvaAVjxm[uuv0zYcw] = oEqdyj8bkpU[ESqAaWrM];
        }
        else {
            srwBnEkvQUaK = srwBnEkvQUaK + 1;
            hvaAVjxm[A7Sfmu +1 - srwBnEkvQUaK] = oEqdyj8bkpU[ESqAaWrM];
        }
    }
    for (ESqAaWrM = 1; uuv0zYcw > ESqAaWrM; ESqAaWrM = ESqAaWrM +1)
        for (aqXSNw2ZoQ = ESqAaWrM +1; uuv0zYcw >= aqXSNw2ZoQ; aqXSNw2ZoQ = aqXSNw2ZoQ + 1) {
            if (hvaAVjxm[ESqAaWrM] > hvaAVjxm[aqXSNw2ZoQ]) {
                fFMXhSJbBw0m = hvaAVjxm[ESqAaWrM];
                hvaAVjxm[ESqAaWrM] = hvaAVjxm[aqXSNw2ZoQ];
                hvaAVjxm[aqXSNw2ZoQ] = fFMXhSJbBw0m;
            }
        }
    for (ESqAaWrM = uuv0zYcw + 1; A7Sfmu > ESqAaWrM; ESqAaWrM = ESqAaWrM +1)
        for (aqXSNw2ZoQ = ESqAaWrM +1; aqXSNw2ZoQ <= A7Sfmu; aqXSNw2ZoQ = aqXSNw2ZoQ + 1) {
            if (hvaAVjxm[ESqAaWrM] < hvaAVjxm[aqXSNw2ZoQ]) {
                xWE53G7 = hvaAVjxm[ESqAaWrM];
                hvaAVjxm[ESqAaWrM] = hvaAVjxm[aqXSNw2ZoQ];
                hvaAVjxm[aqXSNw2ZoQ] = xWE53G7;
            }
        }
    {
        ESqAaWrM = 1;
        for (; ESqAaWrM < A7Sfmu;) {
            cout << fixed << setprecision (2) << hvaAVjxm[ESqAaWrM] << " ";
            ESqAaWrM = ESqAaWrM +1;
        }
    }
    cout << hvaAVjxm[A7Sfmu] << endl;
    return 0;
}

