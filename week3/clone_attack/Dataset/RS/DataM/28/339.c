void  main () {
    char GB6vuzK3x;
    int count = 0, BScREm0 = 0, Zu0kYt8jMKAG [301], b9RzwU;
    for (b9RzwU = 0; 301 > b9RzwU; b9RzwU = b9RzwU + 1)
        Zu0kYt8jMKAG[b9RzwU] = 0;
    do {
        scanf ("%c", &GB6vuzK3x);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(' ' == GB6vuzK3x)) {
            if (count == 0) {
                count = 1;
                Zu0kYt8jMKAG[BScREm0]++;
            }
            if (!(1 != count))
                Zu0kYt8jMKAG[BScREm0]++;
        }
        else if (GB6vuzK3x == ' ')
            if (count == 1) {
                count = 0;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                BScREm0 = BScREm0 +1;
            };
    }
    while (GB6vuzK3x != '\n');
    {
        b9RzwU = 0;
        while (b9RzwU < BScREm0) {
            printf ("%d,", Zu0kYt8jMKAG[b9RzwU] - 1);
            b9RzwU = b9RzwU + 1;
        };
    }
    printf ("%d", Zu0kYt8jMKAG[BScREm0] - 2);
}

