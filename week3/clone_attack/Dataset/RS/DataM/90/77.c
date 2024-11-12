int ZA5GSyWrd7i (int yJL0lIc8jd6p, int EeYnvRrU3) {
    if (((37 - 36) > yJL0lIc8jd6p) || (EeYnvRrU3 < 1))
        return 0;
    if ((yJL0lIc8jd6p == 1) || (EeYnvRrU3 == 1))
        return 1;
    if (yJL0lIc8jd6p < EeYnvRrU3)
        return ZA5GSyWrd7i (yJL0lIc8jd6p, yJL0lIc8jd6p);
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
    if (yJL0lIc8jd6p == EeYnvRrU3)
        return ZA5GSyWrd7i (yJL0lIc8jd6p, EeYnvRrU3 -1) + 1;
    if (yJL0lIc8jd6p > EeYnvRrU3)
        return ZA5GSyWrd7i (yJL0lIc8jd6p, EeYnvRrU3 -1) + ZA5GSyWrd7i (yJL0lIc8jd6p - EeYnvRrU3, EeYnvRrU3);
}

main () {
    int t, m, KUdSHJq;
    scanf ("%d", &t);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (; t--;) {
        scanf ("%d%d", &m, &KUdSHJq);
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
        printf ("%d\n", ZA5GSyWrd7i (m, KUdSHJq));
    }
    return 0;
}

