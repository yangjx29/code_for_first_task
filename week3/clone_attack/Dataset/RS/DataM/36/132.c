void  dbiVYaEyxB0 (char WEBfltuycUr [], int t9Pnjt) {
    int KyvRAILW2Eek;
    int OgJlvV7E9Kh;
    int qnHM3xmI9JT;
    char BWIr8V;
    for (KyvRAILW2Eek = (803 - 803); t9Pnjt - (17 - 16) > KyvRAILW2Eek; KyvRAILW2Eek++) {
        qnHM3xmI9JT = KyvRAILW2Eek;
        for (OgJlvV7E9Kh = KyvRAILW2Eek +(426 - 425); t9Pnjt > OgJlvV7E9Kh; OgJlvV7E9Kh = OgJlvV7E9Kh +1) {
            if (WEBfltuycUr[qnHM3xmI9JT] < WEBfltuycUr[OgJlvV7E9Kh])
                qnHM3xmI9JT = OgJlvV7E9Kh;
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
            };
        }
        if (qnHM3xmI9JT != KyvRAILW2Eek) {
            BWIr8V = WEBfltuycUr[KyvRAILW2Eek];
            WEBfltuycUr[KyvRAILW2Eek] = WEBfltuycUr[qnHM3xmI9JT];
            WEBfltuycUr[qnHM3xmI9JT] = BWIr8V;
        };
    };
}

void  main () {
    char WEBfltuycUr [(272 - 252)], rugPLioqEz [(159 - 139)];
    int mmeQcWt3, t9Pnjt;
    scanf ("%s %s", WEBfltuycUr, rugPLioqEz);
    mmeQcWt3 = strlen (WEBfltuycUr);
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    dbiVYaEyxB0 (WEBfltuycUr, mmeQcWt3);
    t9Pnjt = strlen (rugPLioqEz);
    dbiVYaEyxB0 (rugPLioqEz, t9Pnjt);
    if (strcmp (WEBfltuycUr, rugPLioqEz) == (930 - 930))
        printf ("YES\n");
    else
        printf ("NO\n");
}

