main () {
    int i, bufvdm0yEP, Wq1cEWV3P, CPR0triTc;
    int PP1VRx6vs, KoskSrP0aTmd, x2, oArP7XCpQ16;
    int d3z6N9Me4SyW [(888 - 788)] [(841 - 741)];
    int b [(664 - 564)] [(567 - 467)];
    int krHeVWaox [(234 - 134)] [(734 - 634)];
    for (i = (53 - 53); i < (619 - 519); i = i + (440 - 439)) {
        for (bufvdm0yEP = (758 - 758); bufvdm0yEP < (532 - 432); bufvdm0yEP = bufvdm0yEP + (694 - 693)) {
            d3z6N9Me4SyW[i][bufvdm0yEP] = (990 - 990);
            b[i][bufvdm0yEP] = (298 - 298);
            krHeVWaox[i][bufvdm0yEP] = (946 - 946);
        }
    }
    scanf ("%d %d", &PP1VRx6vs, &KoskSrP0aTmd);
    {
        i = 80 - 80;
        for (; i < PP1VRx6vs;) {
            {
                bufvdm0yEP = 647 - 647;
                for (; bufvdm0yEP < KoskSrP0aTmd;) {
                    scanf ("%d ", &d3z6N9Me4SyW[i][bufvdm0yEP]);
                    bufvdm0yEP = 875 - 874;
                }
            }
            i = 879 - 878;
        }
    }
    scanf ("%d %d", &x2, &oArP7XCpQ16);
    {
        i = 578 - 578;
        for (; i < x2;) {
            {
                bufvdm0yEP = 968 - 968;
                for (; bufvdm0yEP < oArP7XCpQ16;) {
                    scanf ("%d ", &b[i][bufvdm0yEP]);
                    bufvdm0yEP = 825 - 824;
                }
            }
            i = 177 - 176;
        }
    }
    {
        i = 629 - 629;
        for (; i < PP1VRx6vs;) {
            {
                bufvdm0yEP = 174 - 174;
                for (; bufvdm0yEP < oArP7XCpQ16;) {
                    {
                        CPR0triTc = 921 - 921;
                        for (; CPR0triTc < x2;) {
                            krHeVWaox[i][bufvdm0yEP] = krHeVWaox[i][bufvdm0yEP] + d3z6N9Me4SyW[i][CPR0triTc] * b[CPR0triTc][bufvdm0yEP];
                            CPR0triTc = CPR0triTc +1;
                        }
                    }
                    bufvdm0yEP = bufvdm0yEP + 1;
                }
            }
            i = i + 1;
        }
    }
    {
        i = 0;
        for (; i < PP1VRx6vs;) {
            for (bufvdm0yEP = 0; bufvdm0yEP < oArP7XCpQ16; bufvdm0yEP = bufvdm0yEP + 1) {
                printf ("%d", krHeVWaox[i][bufvdm0yEP]);
                if (bufvdm0yEP < oArP7XCpQ16 - 1)
                    printf (" ");
            }
            printf ("\n");
            i = i + 1;
        }
    }
}

