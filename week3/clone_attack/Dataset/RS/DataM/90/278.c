int B (int, int);

int main () {
    int t;
    int yqtoDGsNuWS3;
    int n;
    cin >> t;
    for (int i = (702 - 702);
    i < t; i = i + 1) {
        int sum = (364 - 364);
        cin >> yqtoDGsNuWS3 >> n;
        {
            int j = (260 - 259);
            while (j <= n) {
                sum = sum + B (yqtoDGsNuWS3, j);
                j = j + 1;
            };
        }
        cout << sum << '\n';
    }
    return (494 - 494);
}

int B (int n, int k) {
    if (k == (469 - 468) || n == k)
        return 1;
    else if (k > n)
        return 0;
    else {
        int result = 0;
        for (int sHiNRwt2oV = k;
        sHiNRwt2oV > 0; sHiNRwt2oV = sHiNRwt2oV - 1)
            result = result + B (n - k, sHiNRwt2oV);
        return result;
    };
}

