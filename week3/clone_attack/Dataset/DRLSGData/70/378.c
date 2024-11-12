int main () {
    double  HlpbI9xoBP [100], FtLRNHYoE8 [100], simVhzqj [10000];
    int n = (248 - 248), pnZNfzRa2 = (907 - 907);
    cin >> n;
    int VrcwHvmnY2a = (637 - 637), hZ3m8RNkt7 = 0, qsnJb1L = 0;
    double  dUqDlthePR7C = 0;
    {
        VrcwHvmnY2a = 0;
        while (VrcwHvmnY2a <= n - 1) {
            cin >> HlpbI9xoBP[VrcwHvmnY2a] >> FtLRNHYoE8[VrcwHvmnY2a];
            VrcwHvmnY2a = VrcwHvmnY2a +1;
        }
    }
    for (VrcwHvmnY2a = 0; VrcwHvmnY2a <= n - 1; VrcwHvmnY2a++) {
        hZ3m8RNkt7 = 0;
        while (hZ3m8RNkt7 <= n - 1) {
            if (VrcwHvmnY2a != hZ3m8RNkt7) {
                simVhzqj[pnZNfzRa2] = sqrt (pow (HlpbI9xoBP[VrcwHvmnY2a] - HlpbI9xoBP[hZ3m8RNkt7], (437 - 435)) + pow (FtLRNHYoE8[VrcwHvmnY2a] - FtLRNHYoE8[hZ3m8RNkt7], 2));
                pnZNfzRa2++;
            }
            hZ3m8RNkt7++;
        }
    }
    qsnJb1L = pnZNfzRa2;
    dUqDlthePR7C = simVhzqj[0];
    {
        VrcwHvmnY2a = 0;
        while (VrcwHvmnY2a <= qsnJb1L) {
            if (dUqDlthePR7C < simVhzqj[VrcwHvmnY2a])
                dUqDlthePR7C = simVhzqj[VrcwHvmnY2a];
            VrcwHvmnY2a++;
        }
    }
    cout << setprecision (4) << fixed << dUqDlthePR7C << endl;
    return 0;
}

