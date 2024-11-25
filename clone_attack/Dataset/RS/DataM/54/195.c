void  main () {
    int q9iA7u0zcY, v6QGFtq, BcpQaU, qq4RzCFLMa, KLRiWA83n;
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
    scanf ("%d%d", &BcpQaU, &v6QGFtq);
    {
        q9iA7u0zcY = 2;
        while (1) {
            qq4RzCFLMa = q9iA7u0zcY;
            {
                KLRiWA83n = 1;
                while (KLRiWA83n <= BcpQaU) {
                    if (!(0 == (qq4RzCFLMa - v6QGFtq) % BcpQaU) || (qq4RzCFLMa - v6QGFtq) <= 0)
                        break;
                    KLRiWA83n++;
                    qq4RzCFLMa = qq4RzCFLMa - (qq4RzCFLMa - v6QGFtq) / BcpQaU -v6QGFtq;
                };
            }
            if (KLRiWA83n >= BcpQaU +1) {
                printf ("%d\n", q9iA7u0zcY);
                break;
            }
            q9iA7u0zcY = q9iA7u0zcY + 1;
        };
    };
}

