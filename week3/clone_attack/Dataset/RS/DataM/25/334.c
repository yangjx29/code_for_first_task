int main () {
    int FxbWCQpc6AF, V80s3UOSrml6 = 1, i, Gveuotk7p, flag = 0;
    int a [50] = {1};
    cin >> FxbWCQpc6AF;
    for (i = 1; i <= FxbWCQpc6AF; i++) {
        flag = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            Gveuotk7p = 0;
            while (Gveuotk7p < V80s3UOSrml6) {
                a[Gveuotk7p] = a[Gveuotk7p] * 2 + flag;
                flag = 0;
                if (a[Gveuotk7p] >= 10) {
                    flag = 1;
                    a[Gveuotk7p] = a[Gveuotk7p] - 10;
                }
                Gveuotk7p++;
            };
        }
        if (flag == 1) {
            a[V80s3UOSrml6] = 1;
            V80s3UOSrml6++;
        };
    }
    {
        i = V80s3UOSrml6 -1;
        while (i >= 0) {
            cout << a[i];
            i = i - 1;
        };
    };
}

