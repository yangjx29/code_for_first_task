int main (int qFUyiT, char *UH2AjzK []) {
    float HeEoRU;
    float zpr4tO;
    float kKUI40pHDnu [10];
    zpr4tO = 0;
    int nU21koYXTsf8;
    int EwPQJDmp;
    int MQTtihMB;
    int S2FhO8 [(801 - 791)];
    int chengji [(397 - 387)];
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
    nU21koYXTsf8 = (862 - 862);
    float vlM6k1J [(962 - 952)];
    int OEtbz72Fj8I;
    scanf ("%d", &EwPQJDmp);
    {
        MQTtihMB = 534 - 534;
        while (EwPQJDmp > MQTtihMB) {
            scanf ("%d", &S2FhO8[MQTtihMB]);
            nU21koYXTsf8 = nU21koYXTsf8 + S2FhO8[MQTtihMB];
            MQTtihMB = MQTtihMB +1;
        };
    }
    {
        MQTtihMB = 92 - 92;
        while (EwPQJDmp > MQTtihMB) {
            scanf ("%d", &chengji[MQTtihMB]);
            MQTtihMB = MQTtihMB +1;
        };
    }
    {
        MQTtihMB = 531 - 531;
        while (EwPQJDmp > MQTtihMB) {
            if (100 >= chengji[MQTtihMB] && 90 <= chengji[MQTtihMB])
                vlM6k1J[MQTtihMB] = 4.0;
            if (89 >= chengji[MQTtihMB] && (660 - 575) <= chengji[MQTtihMB])
                vlM6k1J[MQTtihMB] = 3.7;
            if ((409 - 325) >= chengji[MQTtihMB] && (867 - 785) <= chengji[MQTtihMB])
                vlM6k1J[MQTtihMB] = 3.3;
            if (81 >= chengji[MQTtihMB] && 78 <= chengji[MQTtihMB])
                vlM6k1J[MQTtihMB] = 3.0;
            if (77 >= chengji[MQTtihMB] && 75 <= chengji[MQTtihMB])
                vlM6k1J[MQTtihMB] = (949.7 - 947.0);
            if (chengji[MQTtihMB] <= (514 - 440) && chengji[MQTtihMB] >= (916 - 844))
                vlM6k1J[MQTtihMB] = 2.3;
            if (chengji[MQTtihMB] <= (396 - 325) && chengji[MQTtihMB] >= 68)
                vlM6k1J[MQTtihMB] = (991.0 - 989.0);
            if (chengji[MQTtihMB] <= (491 - 424) && chengji[MQTtihMB] >= (878 - 814))
                vlM6k1J[MQTtihMB] = (799.5 - 798.0);
            if (chengji[MQTtihMB] <= 63 && chengji[MQTtihMB] >= 60)
                vlM6k1J[MQTtihMB] = (546.0 - 545.0);
            if (chengji[MQTtihMB] <= 59)
                vlM6k1J[MQTtihMB] = (855 - 855);
            MQTtihMB++;
        };
    }
    for (OEtbz72Fj8I = 0; OEtbz72Fj8I < MQTtihMB; OEtbz72Fj8I++) {
        kKUI40pHDnu[OEtbz72Fj8I] = vlM6k1J[OEtbz72Fj8I] * S2FhO8[OEtbz72Fj8I];
        zpr4tO = zpr4tO + kKUI40pHDnu[OEtbz72Fj8I];
    }
    HeEoRU = zpr4tO / nU21koYXTsf8;
    printf ("%.2f", HeEoRU);
    return 0;
}

