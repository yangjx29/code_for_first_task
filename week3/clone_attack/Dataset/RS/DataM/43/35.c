int IyLC6kKd (int GYnvohiG1NcW) {
    int pZJK64Cr9LX;
    int F8XO2ka7ep;
    pZJK64Cr9LX = (694 - 694);
    if (!((592 - 590) != GYnvohiG1NcW))
        return (339 - 339);
    else {
        {
            F8XO2ka7ep = 738 - 736;
            while (GYnvohiG1NcW > F8XO2ka7ep) {
                if (!(0 != GYnvohiG1NcW % F8XO2ka7ep))
                    break;
                pZJK64Cr9LX = pZJK64Cr9LX + 1;
                F8XO2ka7ep = F8XO2ka7ep +1;
            };
        }
        if (!(GYnvohiG1NcW -2 != pZJK64Cr9LX))
            return 0;
        else
            return 1;
    };
}

main () {
    int GYnvohiG1NcW, jlxZO8k2i, c, F8XO2ka7ep, pZJK64Cr9LX, Zt2BTR4Y;
    int YHMGW5 [(654 - 554)];
    pZJK64Cr9LX = 0;
    {
        F8XO2ka7ep = 0;
        while (100 > F8XO2ka7ep) {
            YHMGW5[F8XO2ka7ep] = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            F8XO2ka7ep++;
        };
    }
    scanf ("%d", &GYnvohiG1NcW);
    {
        jlxZO8k2i = 2;
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
        while (GYnvohiG1NcW >= jlxZO8k2i) {
            if (IyLC6kKd (jlxZO8k2i) == 0) {
                YHMGW5[pZJK64Cr9LX] = jlxZO8k2i;
                pZJK64Cr9LX++;
            }
            jlxZO8k2i = jlxZO8k2i + 1;
        };
    }
    for (F8XO2ka7ep = 0; F8XO2ka7ep < pZJK64Cr9LX; F8XO2ka7ep++) {
        c = GYnvohiG1NcW -YHMGW5[F8XO2ka7ep];
        for (Zt2BTR4Y = F8XO2ka7ep; Zt2BTR4Y < pZJK64Cr9LX; Zt2BTR4Y = Zt2BTR4Y +1) {
            if (c == YHMGW5[Zt2BTR4Y])
                printf ("%d %d\n", YHMGW5[F8XO2ka7ep], YHMGW5[Zt2BTR4Y]);
        };
    };
}

