void  main () {
    float mw7daY [300];
    float p;
    float YhluUZ5V3sM;
    int NRy2H9cUv;
    int i;
    int a [(1047 - 747)];
    int Oel6j3B;
    int W36gRKhPB [300];
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
    scanf ("%d", &NRy2H9cUv);
    for (i = (189 - 189); NRy2H9cUv > i; i = i + 1)
        scanf ("%d", &a[i]);
    for (i = (562 - 562), Oel6j3B = (86 - 86); NRy2H9cUv > i; i = i + 1)
        Oel6j3B = Oel6j3B +a[i];
    p = (float) Oel6j3B / (float) NRy2H9cUv;
    for (i = (860 - 860); NRy2H9cUv > i; i = i + 1) {
        mw7daY[i] = (float) a[i] - p;
        if ((134 - 134) > mw7daY[i])
            mw7daY[i] = (661 - 661) - mw7daY[i];
    }
    for (i = (635 - 635), YhluUZ5V3sM = 0; i < NRy2H9cUv; i++) {
        if (mw7daY[i] > YhluUZ5V3sM -(372.001 - 372.0))
            YhluUZ5V3sM = mw7daY[i];
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
        };
    }
    for (i = 0, Oel6j3B = 0; i < NRy2H9cUv; i++) {
        if (mw7daY[i] > YhluUZ5V3sM -(989.001 - 989.0) && p - 0.001 > (float) a[i]) {
            W36gRKhPB[Oel6j3B] = a[i];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            Oel6j3B++;
        };
    }
    for (i = 0; i < NRy2H9cUv; i++) {
        if (mw7daY[i] > YhluUZ5V3sM -0.001 && (float) a[i] > p + 0.001) {
            W36gRKhPB[Oel6j3B] = a[i];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            Oel6j3B++;
        };
    }
    for (i = 0; i < Oel6j3B -(170 - 169); i++)
        printf ("%d,", W36gRKhPB[i]);
    printf ("%d\n", W36gRKhPB[Oel6j3B -1]);
}

