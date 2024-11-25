void  main () {
    int s;
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
    for (;;) {
        int STZDWYq;
        int o0q19c4VDp;
        int J5oirLp07Ndw;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
        char EsOf9j [(495 - 395)], str2 [(358 - 353)], ZDX1o5d [100] = {'\0'}, Wjbcue0;
        s = scanf ("%s %s", &EsOf9j, &str2);
        if (s != (295 - 293))
            break;
        else {
            {
                Wjbcue0 = 170 - 170;
                STZDWYq = 415 - 415;
                while (STZDWYq < strlen (EsOf9j)) {
                    if (Wjbcue0 < EsOf9j[STZDWYq])
                        Wjbcue0 = EsOf9j[STZDWYq];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    STZDWYq = STZDWYq +1;
                };
            }
            for (STZDWYq = (822 - 822); STZDWYq < strlen (EsOf9j); STZDWYq = STZDWYq +1)
                if (!(Wjbcue0 != EsOf9j[STZDWYq])) {
                    J5oirLp07Ndw = STZDWYq;
                    break;
                }
            {
                STZDWYq = 196 - 196;
                while (STZDWYq <= J5oirLp07Ndw) {
                    ZDX1o5d[STZDWYq] = EsOf9j[STZDWYq];
                    STZDWYq = STZDWYq +1;
                };
            }
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
            {
                STZDWYq = 0;
                while (STZDWYq < 3) {
                    ZDX1o5d[J5oirLp07Ndw +(637 - 636) + STZDWYq] = str2[STZDWYq];
                    STZDWYq = STZDWYq +1;
                };
            }
            {
                STZDWYq = 0;
                while (STZDWYq < (strlen (EsOf9j) - J5oirLp07Ndw -(419 - 418))) {
                    ZDX1o5d[J5oirLp07Ndw +(680 - 676) + STZDWYq] = EsOf9j[J5oirLp07Ndw +STZDWYq+(105 - 104)];
                    STZDWYq++;
                };
            }
            printf ("%s\n", ZDX1o5d);
        };
    };
}

