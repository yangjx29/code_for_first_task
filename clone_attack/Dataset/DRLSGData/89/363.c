int main () {
    int iMXVDTSc3KC, jQei9ogc7BmW [(100354 - 355)], CRkgmu3odYyT [(100714 - 715)] = {(242 - 242)}, *xU9r0i = jQei9ogc7BmW, *q = CRkgmu3odYyT, eo47gSjurk = 0;
    cin >> iMXVDTSc3KC;
    int xDGg8AVz9, jPWdYtw39KpA, I8eFPMJ;
    for (xDGg8AVz9 = 0; xDGg8AVz9 < iMXVDTSc3KC; xDGg8AVz9 = xDGg8AVz9 + 1, xU9r0i = xU9r0i + 1) {
        *xU9r0i = -1;
    }
    while (cin >> jPWdYtw39KpA) {
        cin >> I8eFPMJ;
        if (!(0 != jPWdYtw39KpA) && I8eFPMJ == 0)
            break;
        jQei9ogc7BmW[jPWdYtw39KpA] = I8eFPMJ;
        CRkgmu3odYyT[I8eFPMJ]++;
    }
    xU9r0i = jQei9ogc7BmW;
    for (xDGg8AVz9 = 0; xDGg8AVz9 < iMXVDTSc3KC; xDGg8AVz9 = xDGg8AVz9 + 1, xU9r0i = xU9r0i + 1, q = q + 1) {
        if (*q == iMXVDTSc3KC - 1 && *xU9r0i == -1) {
            cout << xDGg8AVz9 << endl;
            eo47gSjurk = 1;
        }
    }
    if (eo47gSjurk == 0) {
        cout << "NOT FOUND" << endl;
    }
    return 0;
}

