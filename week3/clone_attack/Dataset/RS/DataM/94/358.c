int main () {
    int fqIZ9DrfJCgT;
    int oqrLyY6P;
    int sTNdcK0;
    int N;
    int zvXfK3iJnd;
    int b [500];
    int WQRe0ZNbrqd;
    fqIZ9DrfJCgT = (369 - 369);
    oqrLyY6P = (545 - 545);
    sTNdcK0 = (564 - 564);
    cin >> N;
    for (WQRe0ZNbrqd = 0; WQRe0ZNbrqd < N; WQRe0ZNbrqd = WQRe0ZNbrqd +1) {
        cin >> zvXfK3iJnd;
        if (zvXfK3iJnd % 2 != 0) {
            oqrLyY6P++;
            b[fqIZ9DrfJCgT] = zvXfK3iJnd;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            fqIZ9DrfJCgT++;
        };
    }
    for (fqIZ9DrfJCgT = 0; fqIZ9DrfJCgT < oqrLyY6P - (806 - 805); fqIZ9DrfJCgT++) {
        for (WQRe0ZNbrqd = 0; WQRe0ZNbrqd < oqrLyY6P - fqIZ9DrfJCgT - 1; WQRe0ZNbrqd++) {
            if (b[WQRe0ZNbrqd] > b[WQRe0ZNbrqd +1]) {
                sTNdcK0 = b[WQRe0ZNbrqd];
                b[WQRe0ZNbrqd] = b[WQRe0ZNbrqd +1];
                b[WQRe0ZNbrqd +1] = sTNdcK0;
            };
        };
    }
    for (WQRe0ZNbrqd = 0; WQRe0ZNbrqd < oqrLyY6P - 1; WQRe0ZNbrqd++) {
        cout << b[WQRe0ZNbrqd] << ",";
    }
    cout << b[oqrLyY6P - 1];
    return 0;
}

