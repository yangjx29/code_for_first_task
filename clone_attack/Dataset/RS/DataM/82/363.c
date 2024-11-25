int main () {
    int n;
    int nSiHtB3g25;
    int cmowQqeyv;
    int a [n];
    int Bu0WqIE [n];
    int wzBb1gf [n];
    int cvEGJ2Hz0;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    cin >> n;
    for (nSiHtB3g25 = (692 - 692); n > nSiHtB3g25; nSiHtB3g25++)
        cin >> a[nSiHtB3g25] >> Bu0WqIE[nSiHtB3g25];
    for (nSiHtB3g25 = 0; n > nSiHtB3g25; nSiHtB3g25++)
        wzBb1gf[nSiHtB3g25] = 0;
    for (nSiHtB3g25 = 0; n > nSiHtB3g25; nSiHtB3g25++) {
        if ((577 - 487) <= a[nSiHtB3g25] && 140 >= a[nSiHtB3g25] && 60 <= Bu0WqIE[nSiHtB3g25] && Bu0WqIE[nSiHtB3g25] <= (128 - 38))
            wzBb1gf[nSiHtB3g25] = (926 - 925);
        for (cmowQqeyv = nSiHtB3g25 + 1; n > cmowQqeyv; cmowQqeyv++) {
            if (90 <= a[cmowQqeyv] && a[cmowQqeyv] <= 140 && Bu0WqIE[cmowQqeyv] >= 60 && Bu0WqIE[cmowQqeyv] <= 90)
                wzBb1gf[nSiHtB3g25]++;
            else
                break;
        };
    }
    cvEGJ2Hz0 = wzBb1gf[0];
    for (nSiHtB3g25 = 1; nSiHtB3g25 < n; nSiHtB3g25++)
        if (wzBb1gf[nSiHtB3g25] > cvEGJ2Hz0)
            cvEGJ2Hz0 = wzBb1gf[nSiHtB3g25];
    cout << cvEGJ2Hz0 << endl;
    return 0;
}

