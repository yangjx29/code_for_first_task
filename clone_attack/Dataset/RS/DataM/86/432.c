int main () {
    int ZsNnBthKX;
    int num = 0;
    cin >> ZsNnBthKX;
    while (true) {
        int n;
        int badjump [20] = {0};
        int realtime;
        int realjump = 0;
        int j = 0;
        cin >> n;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (int i = 0;
        i <= n - 1; i = i + 1) {
            cin >> badjump[i];
        }
        for (realtime = 1;; realtime = realtime + 1) {
            if (realtime == 3 * j + badjump[j]) {
                realtime += 3;
                j = j + 1;
            }
            if (realtime >= 60)
                break;
            realjump = realjump + 1;
        }
        cout << realjump << endl;
        num++;
        if (num == ZsNnBthKX)
            break;
    }
    return 0;
}

