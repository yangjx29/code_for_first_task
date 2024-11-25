int main () {
    int p;
    int ACcTsw591Ghe;
    int SRhkClF [1000] = {0};
    int gRZXUgOb;
    p = 0;
    ACcTsw591Ghe = 0;
    int K6npkONb [1000] = {0};
    char time1 [(100760 - 760)];
    char eMxvLyD [100000];
    int i;
    int ZsSpGNkdjFB6;
    int ct;
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
    int eKbZo5N0IV;
    int k;
    int l;
    i = 1;
    ZsSpGNkdjFB6 = 0;
    ct = 0;
    cin.getline (time1, 100000);
    cin.getline (eMxvLyD, 100000);
    for (l = 0; time1[l] > 0; l = l + 1) {
        if (!(',' != time1[l])) {
            ZsSpGNkdjFB6 = ZsSpGNkdjFB6 +1;
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
            p = p + 1;
        }
        else {
            SRhkClF[ZsSpGNkdjFB6] = SRhkClF[ZsSpGNkdjFB6] * 10 + time1[l] - 48;
        };
    }
    ZsSpGNkdjFB6 = 0;
    for (l = 0; 0 < eMxvLyD[l]; l = l + 1) {
        if (eMxvLyD[l] == ',') {
            ZsSpGNkdjFB6 = ZsSpGNkdjFB6 +1;
        }
        else {
            K6npkONb[ZsSpGNkdjFB6] = K6npkONb[ZsSpGNkdjFB6] * 10 + eMxvLyD[l] - 48;
        };
    }
    for (eKbZo5N0IV = 0; eKbZo5N0IV <= 999; eKbZo5N0IV = eKbZo5N0IV + 1) {
        gRZXUgOb = 0;
        for (k = 0; k <= p; k = k + 1) {
            if (eKbZo5N0IV < K6npkONb[k] && eKbZo5N0IV >= SRhkClF[k]) {
                gRZXUgOb = gRZXUgOb + 1;
            };
        }
        if (ACcTsw591Ghe < gRZXUgOb)
            ACcTsw591Ghe = gRZXUgOb;
    }
    cout << p + 1 << ' ' << ACcTsw591Ghe;
    return 0;
}

