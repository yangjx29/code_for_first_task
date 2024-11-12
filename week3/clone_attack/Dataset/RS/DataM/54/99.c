fen (int n, int LEeT3AtbUPsI) {
    int m;
    int vEpBkv2jHb;
    int t;
    {
        m = 752 - 751;
        while (1) {
            {
                t = m;
                vEpBkv2jHb = 390 - 390;
                while (vEpBkv2jHb < n) {
                    if (!(LEeT3AtbUPsI != t % n))
                        t = t - t / n + LEeT3AtbUPsI;
                    else
                        break;
                    vEpBkv2jHb = vEpBkv2jHb + 1;
                };
            }
            if (vEpBkv2jHb >= n && t >= 1)
                break;
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
            m++;
        };
    }
    return m;
}

main () {
    int n, LEeT3AtbUPsI;
    scanf ("%d %d", &n, &LEeT3AtbUPsI);
    printf ("%d\n", fen (n, LEeT3AtbUPsI));
}

