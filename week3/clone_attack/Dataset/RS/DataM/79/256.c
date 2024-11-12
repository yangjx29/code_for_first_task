main () {
    int RrdO4a7JxZ [(934 - 633)];
    int hzkv6Y [301];
    int E7kC2hvQzO;
    int lkwMQTlz;
    int BQh97y;
    int MtgCpHk2nh;
    int WBzKIRUP9m;
    int NhWPgjtbcCy;
    scanf ("%d %d", &BQh97y, &MtgCpHk2nh);
    for (; !(0 == BQh97y);) {
        {
            E7kC2hvQzO = 1;
            while (BQh97y >= E7kC2hvQzO) {
                RrdO4a7JxZ[E7kC2hvQzO] = E7kC2hvQzO;
                E7kC2hvQzO = E7kC2hvQzO +1;
            };
        }
        NhWPgjtbcCy = BQh97y;
        for (E7kC2hvQzO = 1; BQh97y > E7kC2hvQzO; E7kC2hvQzO = E7kC2hvQzO +1) {
            WBzKIRUP9m = MtgCpHk2nh % NhWPgjtbcCy;
            if (WBzKIRUP9m == 0)
                WBzKIRUP9m = NhWPgjtbcCy;
            NhWPgjtbcCy = NhWPgjtbcCy -1;
            {
                lkwMQTlz = 1;
                while (lkwMQTlz <= (NhWPgjtbcCy -WBzKIRUP9m)) {
                    hzkv6Y[lkwMQTlz] = RrdO4a7JxZ[lkwMQTlz + WBzKIRUP9m];
                    lkwMQTlz = lkwMQTlz + 1;
                };
            }
            {
                lkwMQTlz = 1;
                while (lkwMQTlz <= WBzKIRUP9m -1) {
                    hzkv6Y[NhWPgjtbcCy -WBzKIRUP9m+lkwMQTlz] = RrdO4a7JxZ[lkwMQTlz];
                    lkwMQTlz++;
                };
            }
            for (lkwMQTlz = 1; lkwMQTlz <= NhWPgjtbcCy; lkwMQTlz++)
                RrdO4a7JxZ[lkwMQTlz] = hzkv6Y[lkwMQTlz];
        }
        printf ("%d\n", RrdO4a7JxZ[1]);
        scanf ("%d %d", &BQh97y, &MtgCpHk2nh);
    };
}

