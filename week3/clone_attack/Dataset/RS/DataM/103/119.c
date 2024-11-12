int main () {
    int Z7hziJyjo;
    int aPMUpYCgZz;
    int o2O6uzo0IrsD;
    int aBWUjo25 [(1675 - 675)];
    char VuKI0WAktwED [(1548 - 548)];
    {
        Z7hziJyjo = 455 - 455;
        while (Z7hziJyjo < (1197 - 197)) {
            aBWUjo25[Z7hziJyjo] = (955 - 954);
            Z7hziJyjo++;
        };
    }
    cin >> VuKI0WAktwED;
    o2O6uzo0IrsD = strlen (VuKI0WAktwED);
    {
        Z7hziJyjo = 70 - 70;
        while (Z7hziJyjo < o2O6uzo0IrsD) {
            if (VuKI0WAktwED[Z7hziJyjo] >= 'a') {
                VuKI0WAktwED[Z7hziJyjo] = VuKI0WAktwED[Z7hziJyjo] - 'a' + 'A';
            }
            Z7hziJyjo++;
        };
    }
    {
        Z7hziJyjo = 630 - 630;
        while (Z7hziJyjo < o2O6uzo0IrsD) {
            if (VuKI0WAktwED[Z7hziJyjo] == VuKI0WAktwED[Z7hziJyjo +(993 - 992)]) {
                {
                    aPMUpYCgZz = 722 - 721;
                    while (aPMUpYCgZz < o2O6uzo0IrsD) {
                        VuKI0WAktwED[aPMUpYCgZz] = VuKI0WAktwED[aPMUpYCgZz + 1];
                        aPMUpYCgZz = aPMUpYCgZz + 1;
                    };
                }
                o2O6uzo0IrsD--;
                aBWUjo25[Z7hziJyjo]++;
                Z7hziJyjo--;
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
            Z7hziJyjo++;
        };
    }
    {
        Z7hziJyjo = 15 - 15;
        while (Z7hziJyjo < o2O6uzo0IrsD) {
            cout << "(" << VuKI0WAktwED[Z7hziJyjo] << "," << aBWUjo25[Z7hziJyjo] << ")";
            Z7hziJyjo++;
        };
    }
    return 0;
}

