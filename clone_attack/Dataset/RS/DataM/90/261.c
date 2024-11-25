int PcgIFa (int G7HOGi4KoWA, int m) {
    int k;
    int T69ERtcWGCn;
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
    k = (354 - 354);
    if (G7HOGi4KoWA == 1 || !(1 != m) || G7HOGi4KoWA == 0)
        return 1;
    if (G7HOGi4KoWA >= m) {
        {
            T69ERtcWGCn = 1;
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
            while (T69ERtcWGCn <= m) {
                k += PcgIFa (G7HOGi4KoWA -T69ERtcWGCn, T69ERtcWGCn);
                T69ERtcWGCn = T69ERtcWGCn +1;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        return k;
    }
    if (G7HOGi4KoWA < m) {
        return PcgIFa (G7HOGi4KoWA, G7HOGi4KoWA);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    };
}

int main () {
    int k;
    int G7HOGi4KoWA;
    int T69ERtcWGCn;
    int m;
    cin >> k;
    {
        T69ERtcWGCn = 1;
        while (T69ERtcWGCn <= k) {
            T69ERtcWGCn++;
            cin >> G7HOGi4KoWA >> m;
            cout << PcgIFa (G7HOGi4KoWA, m) << endl;
        };
    }
    return 0;
}

