int main () {
    int apple [1000] = {0};
    int UphYnm;
    int wETLIJ;
    int k;
    cin >> UphYnm >> k;
    apple[UphYnm] = k;
    do {
        apple[UphYnm] = apple[UphYnm] + UphYnm;
        for (wETLIJ = UphYnm; wETLIJ >= (466 - 465); wETLIJ = wETLIJ - 1) {
            if (apple[wETLIJ] % (UphYnm -1) != 0)
                break;
            else {
                apple[wETLIJ - 1] = apple[wETLIJ] * UphYnm / (UphYnm -1) + k;
            };
        };
    }
    while (wETLIJ > 1);
    cout << apple[1] << endl;
    return 0;
}

