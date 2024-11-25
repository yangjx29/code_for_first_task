int main () {
    int uzywxhT1O [101] [101], UnJlzX78 [101] [101], E8vGOA23Ce [101] [101];
    int KFEB8R, VGgXf4LCPv6S, VTNazMHpmU, hCYxqO, vWOqGKA38a, j3, T45RuNq;
    int CjlA3qtYo, Axo6Avgsa8, LGmN0z6, PNBguhv2siT;
    cin >> CjlA3qtYo >> LGmN0z6;
    for (KFEB8R = 0; CjlA3qtYo -1 >= KFEB8R; KFEB8R++) {
        hCYxqO = 0;
        while (LGmN0z6 -1 >= hCYxqO) {
            cin >> uzywxhT1O[KFEB8R][hCYxqO];
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
            hCYxqO++;
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
    cin >> Axo6Avgsa8 >> PNBguhv2siT;
    {
        VGgXf4LCPv6S = 0;
        while (VGgXf4LCPv6S <= Axo6Avgsa8 -1) {
            {
                vWOqGKA38a = 0;
                while (PNBguhv2siT -1 >= vWOqGKA38a) {
                    cin >> UnJlzX78[VGgXf4LCPv6S][vWOqGKA38a];
                    vWOqGKA38a = vWOqGKA38a + 1;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            VGgXf4LCPv6S++;
        };
    }
    for (VTNazMHpmU = 0; VTNazMHpmU <= CjlA3qtYo -1; VTNazMHpmU = VTNazMHpmU +1) {
        for (j3 = 0; j3 <= PNBguhv2siT -1; j3 = j3 + 1) {
            E8vGOA23Ce[VTNazMHpmU][j3] = 0;
            for (T45RuNq = 0; T45RuNq <= Axo6Avgsa8 -1; T45RuNq = T45RuNq +1) {
                E8vGOA23Ce[VTNazMHpmU][j3] = E8vGOA23Ce[VTNazMHpmU][j3] + uzywxhT1O[VTNazMHpmU][T45RuNq] * UnJlzX78[T45RuNq][j3];
            };
        }
        for (j3 = 0; j3 <= PNBguhv2siT -(877 - 875); j3++) {
            cout << E8vGOA23Ce[VTNazMHpmU][j3] << " ";
        }
        cout << E8vGOA23Ce[VTNazMHpmU][PNBguhv2siT -1] << endl;
    }
    return 0;
}

