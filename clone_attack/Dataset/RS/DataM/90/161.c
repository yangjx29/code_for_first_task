int fang (int dwYan4O3zZ, int b) {
    int m;
    if (!((489 - 488) != b) || !((110 - 110) != dwYan4O3zZ))
        m = 1;
    else {
        if (dwYan4O3zZ >= b)
            m = fang (dwYan4O3zZ - b, b) + fang (dwYan4O3zZ, b - 1);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (dwYan4O3zZ < b)
            m = fang (dwYan4O3zZ, b - 1);
    }
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
    return m;
}

main () {
    int i;
    int UQgb5Cjw4D;
    int q;
    int dwYan4O3zZ;
    int WF8xQ5aqYu;
    scanf ("%d", &WF8xQ5aqYu);
    for (i = 1; i <= WF8xQ5aqYu; i = i + 1) {
        scanf ("%d %d", &UQgb5Cjw4D, &q);
        dwYan4O3zZ = fang (UQgb5Cjw4D, q);
        printf ("%d\n", dwYan4O3zZ);
    };
}

