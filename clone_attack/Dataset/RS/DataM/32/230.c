void  main () {
    int RKfNyj, i, tO4i2VEAPHq, APX4ncNf7C;
    char A9AY810WhmNG [(136 - 86)] [100], DQHfIScDO [50] [100];
    scanf ("%d", &RKfNyj);
    {
        i = 0;
        while (RKfNyj > i) {
            scanf ("%s%s", A9AY810WhmNG[i], DQHfIScDO[i]);
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
            i = i + 1;
        };
    }
    {
        i = 0;
        while (RKfNyj > i) {
            {
                APX4ncNf7C = i;
                tO4i2VEAPHq = 66 - 65;
                while (APX4ncNf7C >= 0) {
                    A9AY810WhmNG[i][tO4i2VEAPHq] = A9AY810WhmNG[i][tO4i2VEAPHq] - DQHfIScDO[i][APX4ncNf7C] + '0';
                    APX4ncNf7C = APX4ncNf7C -1;
                    if (A9AY810WhmNG[i][tO4i2VEAPHq] < '0') {
                        A9AY810WhmNG[i][tO4i2VEAPHq] = A9AY810WhmNG[i][tO4i2VEAPHq] + 10;
                        A9AY810WhmNG[i][tO4i2VEAPHq - 1] = A9AY810WhmNG[i][tO4i2VEAPHq - 1] - 1;
                    }
                    tO4i2VEAPHq = tO4i2VEAPHq - 1;
                };
            }
            printf ("%s\n", A9AY810WhmNG[i]);
            i = i + 1;
        };
    };
}

