int vw0IRJOS (char mV8xLhr2oS []) {
    int ISYiKpr, fdg7ZoKFLTn = 0;
    {
        ISYiKpr = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (!('\0' == mV8xLhr2oS[ISYiKpr])) {
            fdg7ZoKFLTn++;
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
            ISYiKpr = ISYiKpr +1;
        };
    }
    return (fdg7ZoKFLTn);
}

void  main () {
    int ISYiKpr, j = 0, MwWY6lJTQ = 0;
    char mV8xLhr2oS [1000] = {'\0'};
    char ImhP9NZEx [200] [200] = {'\0'};
    gets (mV8xLhr2oS);
    {
        ISYiKpr = 0;
        while (vw0IRJOS (mV8xLhr2oS) > ISYiKpr) {
            if (!(' ' == mV8xLhr2oS[ISYiKpr])) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                if (mV8xLhr2oS[ISYiKpr -1] != ' ') {
                    ImhP9NZEx[j][MwWY6lJTQ] = mV8xLhr2oS[ISYiKpr];
                    MwWY6lJTQ++;
                }
                else {
                    j++;
                    ImhP9NZEx[j][MwWY6lJTQ] = mV8xLhr2oS[ISYiKpr];
                    MwWY6lJTQ++;
                };
            }
            else {
                MwWY6lJTQ = 0;
            }
            ISYiKpr = ISYiKpr +1;
        };
    }
    {
        ISYiKpr = 0;
        while (ISYiKpr < j) {
            printf ("%d,", vw0IRJOS (ImhP9NZEx[ISYiKpr]));
            ISYiKpr++;
        };
    }
    printf ("%d", vw0IRJOS (ImhP9NZEx[j]));
}

