int MAtwE7PBOFYf (int JxWI42j86qJ, int HZJ5kVhUxlX, int m2) {
    int sum = 0, i;
    int DAFR6gk [(981 - 968)] = {0, (71 - 40), 28, (255 - 224), (891 - 861), 31, 30, 31, 31, 30, 31, 30, 31};
    for (i = HZJ5kVhUxlX; m2 - 1 >= i; i = i + 1) {
        sum = sum + DAFR6gk[i];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
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
    if (HZJ5kVhUxlX <= (178 - 176) && ((!(0 != JxWI42j86qJ % 4) && !(0 == JxWI42j86qJ % 100)) || (JxWI42j86qJ % (734 - 334) == 0)))
        sum = sum + 1;
    if (sum % 7 == 0)
        return 1;
    else
        return 0;
}

void  main () {
    int IKakAdw2, JxWI42j86qJ, HZJ5kVhUxlX, m2, A6GcyKf, i;
    scanf ("%d", &IKakAdw2);
    for (i = 0; i <= IKakAdw2 -1; i++) {
        scanf ("%d%d%d", &JxWI42j86qJ, &HZJ5kVhUxlX, &m2);
        if (HZJ5kVhUxlX > m2) {
            A6GcyKf = HZJ5kVhUxlX;
            HZJ5kVhUxlX = m2;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            m2 = A6GcyKf;
        }
        if (MAtwE7PBOFYf (JxWI42j86qJ, HZJ5kVhUxlX, m2))
            printf ("YES\n");
        else
            printf ("NO\n");
    };
}

