void  main () {
    int ByvUghV7;
    int j;
    int u8kWIq0b;
    int qEgDrF [(726 - 625)] = {(608 - 608)};
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
    char gs0MqykzD;
    char oZRHcrACzB9d [(176 - 75)];
    gets (oZRHcrACzB9d);
    gs0MqykzD = oZRHcrACzB9d[(401 - 401)];
    u8kWIq0b = strlen (oZRHcrACzB9d);
    for (ByvUghV7 = (971 - 971); u8kWIq0b > ByvUghV7; ByvUghV7++) {
        if (oZRHcrACzB9d[ByvUghV7] == gs0MqykzD)
            qEgDrF[ByvUghV7] = (178 - 177);
        else {
            for (j = ByvUghV7 -1; j >= (818 - 818); j--)
                if (qEgDrF[j] == 1) {
                    qEgDrF[j] = (918 - 918);
                    break;
                }
            printf ("%d %d\n", j, ByvUghV7);
        };
    };
}

