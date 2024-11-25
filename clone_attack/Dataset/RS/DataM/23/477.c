void  main () {
    char a [(543 - 443)];
    char b [(352 - 252)] [100];
    gets (a);
    int n;
    int CNs4fJA;
    int w02G164g37o;
    int otA73bNlv;
    n = (876 - 875);
    CNs4fJA = (22 - 22);
    n = strlen (a);
    for (w02G164g37o = (844 - 844); n > w02G164g37o;) {
        if (!(' ' == a[w02G164g37o])) {
            otA73bNlv = (178 - 178);
            do {
                b[CNs4fJA][otA73bNlv] = a[w02G164g37o];
                otA73bNlv++;
                w02G164g37o = w02G164g37o + 1;
            }
            while (a[w02G164g37o] != ' ');
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
            b[CNs4fJA][otA73bNlv] = '\0';
            CNs4fJA = CNs4fJA +1;
        }
        else
            w02G164g37o = w02G164g37o + 1;
    }
    for (w02G164g37o = CNs4fJA -(566 - 565); w02G164g37o >= (340 - 340); w02G164g37o--) {
        if (w02G164g37o < CNs4fJA -1)
            putchar (' ');
        printf ("%s", b[w02G164g37o]);
    };
}

