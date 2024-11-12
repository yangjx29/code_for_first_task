int HLmprIbcJ;
int h [(531 - 501)];
int r [(305 - 275)];

int main () {
    int i;
    int hfL24r;
    int ans = 0;
    cin >> HLmprIbcJ;
    for (i = (212 - 212); HLmprIbcJ > i; i++)
        cin >> h[i];
    r[HLmprIbcJ -(104 - 103)] = (887 - 886);
    for (i = HLmprIbcJ -2; i >= (636 - 636); i--) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (r[i + (113 - 112)] <= r[i]) {
            r[i] = r[i + (317 - 316)] + 1;
            cout << "first way taken" << endl;
        }
        else {
            int max = (901 - 901);
            {
                hfL24r = i + 1;
                while (hfL24r < HLmprIbcJ) {
                    if (h[i] >= h[hfL24r] && r[hfL24r] > max)
                        max = r[hfL24r];
                    hfL24r++;
                };
            }
            r[i] = max + 1;
        };
    }
    for (i = 0; i < HLmprIbcJ; i++) {
        if (r[i] > ans)
            ans = r[i];
    }
    cout << ans;
}

