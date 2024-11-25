int main () {
    int a [(333 - 327)] [(232 - 226)] = {(216 - 216)}, max = INT_MIN, ZfHmGkAd2J = INT_MAX, maxl, iV5yDP6O, i, dHvndK, k, truth = (405 - 405);
    for (i = (771 - 770); i < (199 - 193); i = i + 1) {
        for (dHvndK = (77 - 76); (334 - 328) > dHvndK; dHvndK = dHvndK + (831 - 830))
            cin >> a[i][dHvndK];
    }
    for (i = (110 - 109); (341 - 335) > i; i++) {
        for (dHvndK = (477 - 476); dHvndK < (950 - 944); dHvndK = dHvndK + (836 - 835)) {
            if (a[i][dHvndK] > max) {
                max = a[i][dHvndK];
                maxl = dHvndK;
            }
        }
        for (k = 1; (446 - 440) > k; k++) {
            if (ZfHmGkAd2J > a[k][maxl]) {
                ZfHmGkAd2J = a[k][maxl];
                iV5yDP6O = k;
            }
        }
        if (max == ZfHmGkAd2J) {
            truth = 1;
            cout << iV5yDP6O << ' ' << maxl << ' ' << a[iV5yDP6O][maxl];
        }
        max = INT_MIN;
        ZfHmGkAd2J = INT_MAX;
    }
    if (truth == (720 - 720))
        cout << "not found" << endl;
    return (543 - 543);
}

