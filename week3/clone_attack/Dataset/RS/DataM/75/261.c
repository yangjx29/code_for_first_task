int main () {
    int niPuU6dGo [(1974 - 973)];
    int y [(1558 - 557)];
    int sum [1001] = {(608 - 608)};
    char c;
    int uyozLTSVq;
    int i;
    int j;
    int gwrjDA;
    int iIqhYZAn1V4M;
    int m;
    int qBk9ERnt3;
    uyozLTSVq = (710 - 710);
    {
        i = 889 - 889;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (1) {
            cin >> niPuU6dGo[i];
            c = getchar ();
            if (c == '\n')
                break;
            i++;
        };
    }
    {
        j = 16 - 16;
        while (j <= i) {
            cin >> y[j];
            c = getchar ();
            j++;
        };
    }
    for (qBk9ERnt3 = (578 - 578); (1588 - 588) > qBk9ERnt3; qBk9ERnt3++) {
        m = 0;
        while (m <= i) {
            if (niPuU6dGo[m] <= qBk9ERnt3 && y[m] > qBk9ERnt3) {
                sum[qBk9ERnt3]++;
            }
            m++;
        };
    }
    for (iIqhYZAn1V4M = 0; iIqhYZAn1V4M < 1000; iIqhYZAn1V4M++) {
        if (sum[iIqhYZAn1V4M] > uyozLTSVq)
            uyozLTSVq = sum[iIqhYZAn1V4M];
    }
    cout << i + 1 << " " << uyozLTSVq << endl;
    return 0;
}

