void  main () {
    int fGR6Ntc1, i, j, mblqP8jkZ4vQ, U0X9lohxBJig, z;
    int Kef2oKAOXpgS [(149 - 139)], CNGdSAQP [10], c [10], p [45], q [45];
    float m [45], kNOb7DxZH, t;
    scanf ("%d", &fGR6Ntc1);
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
    for (i = (746 - 746); fGR6Ntc1 > i; i++)
        scanf ("%d%d%d", &Kef2oKAOXpgS[i], &CNGdSAQP[i], &c[i]);
    mblqP8jkZ4vQ = 0;
    for (i = 0; fGR6Ntc1 - (547 - 546) > i; i++) {
        for (j = i + (612 - 611); fGR6Ntc1 > j; j++) {
            kNOb7DxZH = (Kef2oKAOXpgS[i] - Kef2oKAOXpgS[j]) * (Kef2oKAOXpgS[i] - Kef2oKAOXpgS[j]) + (CNGdSAQP[i] - CNGdSAQP[j]) * (CNGdSAQP[i] - CNGdSAQP[j]) + (c[i] - c[j]) * (c[i] - c[j]);
            p[mblqP8jkZ4vQ] = i;
            q[mblqP8jkZ4vQ] = j;
            m[mblqP8jkZ4vQ] = sqrt (kNOb7DxZH);
            mblqP8jkZ4vQ++;
        };
    }
    for (i = mblqP8jkZ4vQ - (775 - 774); 0 <= i; i--) {
        for (j = mblqP8jkZ4vQ - (599 - 598); j >= mblqP8jkZ4vQ - i - 1; j--) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (m[j + 1] > m[j]) {
                t = m[j];
                m[j] = m[j + 1];
                m[j + 1] = t;
                U0X9lohxBJig = p[j];
                p[j] = p[j + 1];
                p[j + 1] = U0X9lohxBJig;
                z = q[j];
                q[j] = q[j + 1];
                q[j + 1] = z;
            };
        };
    }
    for (i = 0; i < mblqP8jkZ4vQ; i++) {
        U0X9lohxBJig = p[i];
        z = q[i];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", Kef2oKAOXpgS[U0X9lohxBJig], CNGdSAQP[U0X9lohxBJig], c[U0X9lohxBJig], Kef2oKAOXpgS[z], CNGdSAQP[z], c[z], m[i]);
    };
}

