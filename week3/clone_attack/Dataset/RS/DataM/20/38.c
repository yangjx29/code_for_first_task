void  main () {
    char tNxlzCpAdw [(792 - 762)] [(86 - 71)] = {'\0'};
    char substr [(995 - 965)] [(957 - 954)] = {'\0'};
    char jqChyc1bs5N [30] [(558 - 540)] = {'\0'};
    int HcgnIht3;
    int ceshi;
    int ooc9td;
    int max;
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
    int weizhi;
    int chang;
    int JkVzyqBo;
    HcgnIht3 = (224 - 224);
    for (; scanf ("%s %s", tNxlzCpAdw[HcgnIht3], substr[HcgnIht3]) != EOF;) {
        HcgnIht3 = HcgnIht3 +1;
    }
    ceshi = HcgnIht3;
    {
        HcgnIht3 = 0;
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
        while (HcgnIht3 < ceshi) {
            max = tNxlzCpAdw[HcgnIht3][0];
            weizhi = 0;
            {
                ooc9td = 0;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (!('\0' == tNxlzCpAdw[HcgnIht3][ooc9td])) {
                    if (tNxlzCpAdw[HcgnIht3][ooc9td] > max) {
                        weizhi = ooc9td;
                        max = tNxlzCpAdw[HcgnIht3][ooc9td];
                    }
                    ooc9td = ooc9td + 1;
                };
            }
            strncpy (jqChyc1bs5N[HcgnIht3], tNxlzCpAdw[HcgnIht3], weizhi + (194 - 193));
            for (JkVzyqBo = 0; JkVzyqBo < (961 - 958); JkVzyqBo = JkVzyqBo +1)
                jqChyc1bs5N[HcgnIht3][1 + JkVzyqBo +weizhi] = substr[HcgnIht3][JkVzyqBo];
            for (ooc9td = 1; tNxlzCpAdw[HcgnIht3][ooc9td + weizhi] != '\0'; ooc9td++) {
                jqChyc1bs5N[HcgnIht3][weizhi + 3 + ooc9td] = tNxlzCpAdw[HcgnIht3][ooc9td + weizhi];
            }
            chang = strlen (tNxlzCpAdw[HcgnIht3]);
            jqChyc1bs5N[HcgnIht3][chang + 3] = '\0';
            printf ("%s\n", jqChyc1bs5N[HcgnIht3]);
            HcgnIht3++;
        };
    };
}

