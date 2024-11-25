int main () {
    int a [50001];
    int HAKnVRyTm4LU, cysJEp3xDoVw, n, wSL2vp1sK, SutMNfzTD, N296IUWz;
    cin >> n;
    for (HAKnVRyTm4LU = 1; n >= HAKnVRyTm4LU; HAKnVRyTm4LU = HAKnVRyTm4LU +2) {
        a[HAKnVRyTm4LU] = 1;
    }
    for (HAKnVRyTm4LU = 9; HAKnVRyTm4LU <= n; HAKnVRyTm4LU = HAKnVRyTm4LU +2) {
        cysJEp3xDoVw = 3;
        while (cysJEp3xDoVw <= sqrt (HAKnVRyTm4LU)) {
            if (HAKnVRyTm4LU % cysJEp3xDoVw == 0) {
                a[HAKnVRyTm4LU] = 0;
                break;
            }
            cysJEp3xDoVw = cysJEp3xDoVw + 2;
        };
    }
    for (cysJEp3xDoVw = 6; cysJEp3xDoVw <= n; cysJEp3xDoVw = cysJEp3xDoVw + 2) {
        HAKnVRyTm4LU = 3;
        while (HAKnVRyTm4LU <= (cysJEp3xDoVw / 2)) {
            if ((a[HAKnVRyTm4LU] == 1) && (a[cysJEp3xDoVw - HAKnVRyTm4LU] == 1)) {
                cout << cysJEp3xDoVw << "=" << HAKnVRyTm4LU << "+" << (cysJEp3xDoVw - HAKnVRyTm4LU) << endl;
                break;
            }
            HAKnVRyTm4LU = HAKnVRyTm4LU +2;
        };
    }
    return 0;
}

