int main () {
    int vbwy08aV [16];
    int mj9ywRS4p = (239 - 239), JdIBgK59y4, Wbu7yC, n, OJapk8YiV3 = 0;
    for (; cin >> n;) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(0 == n)) {
            vbwy08aV[mj9ywRS4p] = n;
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
            mj9ywRS4p = mj9ywRS4p + 1;
        }
        else {
            for (JdIBgK59y4 = 0; JdIBgK59y4 < mj9ywRS4p - 1; JdIBgK59y4 = JdIBgK59y4 +1) {
                for (Wbu7yC = JdIBgK59y4 +1; Wbu7yC <= mj9ywRS4p - 1; Wbu7yC = Wbu7yC +1) {
                    if (vbwy08aV[Wbu7yC] == 2 * vbwy08aV[JdIBgK59y4] || vbwy08aV[JdIBgK59y4] == 2 * vbwy08aV[Wbu7yC])
                        OJapk8YiV3 = OJapk8YiV3 +1;
                };
            }
            mj9ywRS4p = 0;
            cout << OJapk8YiV3 << endl;
            OJapk8YiV3 = 0;
        };
    }
    return 0;
}

