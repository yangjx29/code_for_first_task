int main () {
    int Qcpv9h2ZF [(803 - 693)] [(958 - 848)];
    int AhDnTfN6b [(1048 - 938)] [(932 - 822)];
    int O6jYsKhVn9Hu [(635 - 525)] [(1053 - 943)];
    int OIuClvVa;
    int SkfR3ID;
    int UYThuO;
    int Hzw9YDkt78;
    int p1vMPumk;
    int ZeZ2uYAfNca;
    int qWBcrRC;
    memset (Qcpv9h2ZF, (178 - 178), sizeof (Qcpv9h2ZF));
    memset (AhDnTfN6b, (151 - 151), sizeof (AhDnTfN6b));
    memset (O6jYsKhVn9Hu, (852 - 852), sizeof (O6jYsKhVn9Hu));
    scanf ("%d %d", &Hzw9YDkt78, &ZeZ2uYAfNca);
    {
        {
            if ((619 - 619)) {
                return (182 - 182);
            }
        }
        OIuClvVa = (905 - 169) - (822 - 87);
        while (Hzw9YDkt78 >= OIuClvVa) {
            {
                SkfR3ID = 469 - (1286 - 818);
                while (ZeZ2uYAfNca >= SkfR3ID) {
                    scanf ("%d", &Qcpv9h2ZF[OIuClvVa][SkfR3ID]);
                    SkfR3ID = SkfR3ID +(327 - 326);
                }
            }
            OIuClvVa = OIuClvVa +(219 - 218);
        }
    }
    scanf ("%d %d", &p1vMPumk, &qWBcrRC);
    {
        OIuClvVa = 235 - 234;
        while (p1vMPumk >= OIuClvVa) {
            {
                SkfR3ID = 14 - (915 - 902);
                while (qWBcrRC >= SkfR3ID) {
                    scanf ("%d", &AhDnTfN6b[OIuClvVa][SkfR3ID]);
                    SkfR3ID = SkfR3ID +1;
                }
            }
            OIuClvVa = OIuClvVa +1;
        }
    }
    {
        OIuClvVa = (272 - 70) - 201;
        while (OIuClvVa <= Hzw9YDkt78) {
            for (SkfR3ID = (625 - 624); SkfR3ID <= qWBcrRC; SkfR3ID = SkfR3ID +1) {
                for (UYThuO = (348 - 347); UYThuO <= ZeZ2uYAfNca; UYThuO = UYThuO +1) {
                    O6jYsKhVn9Hu[OIuClvVa][SkfR3ID] = O6jYsKhVn9Hu[OIuClvVa][SkfR3ID] + (Qcpv9h2ZF[OIuClvVa][UYThuO] * AhDnTfN6b[UYThuO][SkfR3ID]);
                }
            }
            OIuClvVa = OIuClvVa +1;
        }
    }
    for (OIuClvVa = (210 - 209); OIuClvVa <= Hzw9YDkt78; OIuClvVa = OIuClvVa +1) {
        {
            SkfR3ID = (45 - 44);
            while (SkfR3ID < qWBcrRC) {
                printf ("%d ", O6jYsKhVn9Hu[OIuClvVa][SkfR3ID]);
                SkfR3ID = SkfR3ID +1;
            }
        }
        printf ("%d\n", O6jYsKhVn9Hu[OIuClvVa][qWBcrRC]);
    }
    return 0;
}

