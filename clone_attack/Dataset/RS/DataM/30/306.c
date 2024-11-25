int main () {
    int sum = (766 - 766);
    int n = (217 - 217);
    int uML5lfR, wbrsSLiN, qRxEorB860L;
    cin >> n;
    for (uML5lfR = 1; uML5lfR <= n; uML5lfR = uML5lfR + 1) {
        wbrsSLiN = uML5lfR / 10;
        qRxEorB860L = uML5lfR - (uML5lfR / 10) * 10;
        if ((uML5lfR % 7 == 0) || (uML5lfR == 7) || (wbrsSLiN == 7) || (qRxEorB860L == 7))
            continue;
        else
            sum = sum + uML5lfR * uML5lfR;
    }
    cout << sum << endl;
    return 0;
}

