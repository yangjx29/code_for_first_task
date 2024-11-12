void  main () {
    int gnco0m6YJuF;
    int m;
    int ruytVkp;
    int scx6SNZgBEsM [6] = {0};
    gnco0m6YJuF = 0;
    scanf ("%d", &m);
    if (m < 10) {
        gnco0m6YJuF = m;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        printf ("%d\n", gnco0m6YJuF);
    }
    else {
        for (ruytVkp = 1; 5 >= ruytVkp; ruytVkp = ruytVkp + 1) {
            scx6SNZgBEsM[ruytVkp] = m % 10;
            m = (m - scx6SNZgBEsM[ruytVkp]) / 10;
        }
        if (scx6SNZgBEsM[5] != 0)
            gnco0m6YJuF = scx6SNZgBEsM[5] + scx6SNZgBEsM[(346 - 342)] * 10 + scx6SNZgBEsM[(655 - 652)] * 100 + scx6SNZgBEsM[(123 - 121)] * (1358 - 358) + scx6SNZgBEsM[1] * 10000;
        else if (scx6SNZgBEsM[(191 - 187)] != 0)
            gnco0m6YJuF = scx6SNZgBEsM[4] + scx6SNZgBEsM[3] * 10 + scx6SNZgBEsM[2] * 100 + scx6SNZgBEsM[1] * 1000;
        else if (scx6SNZgBEsM[3] != 0)
            gnco0m6YJuF = scx6SNZgBEsM[3] + scx6SNZgBEsM[2] * 10 + scx6SNZgBEsM[1] * 100;
        else if (scx6SNZgBEsM[2] != 0)
            gnco0m6YJuF = scx6SNZgBEsM[2] + scx6SNZgBEsM[1] * 10;
        else
            gnco0m6YJuF = scx6SNZgBEsM[1];
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
        printf ("%d\n", gnco0m6YJuF);
    };
}

