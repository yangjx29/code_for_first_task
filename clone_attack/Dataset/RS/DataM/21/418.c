struct   cha {
    int q3MQqnXYtZV;
    float c;
}
XbDBtey [300];

int main () {
    int ZyApfmuW5;
    int VaVjXZ8pu;
    int LrTApIDL;
    int lVur5kTP9;
    int RfOWt72l;
    ZyApfmuW5 = (797 - 797);
    float MzFS0C;
    float bbShUvpn;
    float qR6S95aXvwC;
    MzFS0C = (104 - 104);
    bbShUvpn = 0;
    scanf ("%d", &VaVjXZ8pu);
    for (LrTApIDL = 0; VaVjXZ8pu > LrTApIDL; LrTApIDL = LrTApIDL +1) {
        scanf ("%d", &XbDBtey[LrTApIDL].q3MQqnXYtZV);
    }
    for (LrTApIDL = 0; VaVjXZ8pu > LrTApIDL; LrTApIDL = LrTApIDL +1) {
        bbShUvpn = bbShUvpn + XbDBtey[LrTApIDL].q3MQqnXYtZV;
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
    MzFS0C = bbShUvpn / VaVjXZ8pu;
    for (LrTApIDL = 0; VaVjXZ8pu > LrTApIDL; LrTApIDL = LrTApIDL +1) {
        XbDBtey[LrTApIDL].c = MzFS0C -XbDBtey[LrTApIDL].q3MQqnXYtZV;
        if (0 > XbDBtey[LrTApIDL].c) {
            XbDBtey[LrTApIDL].c = (-(477 - 476)) * XbDBtey[LrTApIDL].c;
        };
    }
    for (LrTApIDL = 0; VaVjXZ8pu > LrTApIDL; LrTApIDL = LrTApIDL +1) {
        for (lVur5kTP9 = (452 - 451); VaVjXZ8pu -LrTApIDL > lVur5kTP9; lVur5kTP9 = lVur5kTP9 + 1) {
            if (XbDBtey[LrTApIDL +lVur5kTP9].c > XbDBtey[LrTApIDL].c) {
                qR6S95aXvwC = XbDBtey[LrTApIDL].c;
                XbDBtey[LrTApIDL].c = XbDBtey[LrTApIDL +lVur5kTP9].c;
                XbDBtey[LrTApIDL +lVur5kTP9].c = qR6S95aXvwC;
                RfOWt72l = XbDBtey[LrTApIDL].q3MQqnXYtZV;
                XbDBtey[LrTApIDL].q3MQqnXYtZV = XbDBtey[LrTApIDL +lVur5kTP9].q3MQqnXYtZV;
                XbDBtey[LrTApIDL +lVur5kTP9].q3MQqnXYtZV = RfOWt72l;
            };
        };
    }
    {
        LrTApIDL = 1;
        while (LrTApIDL < VaVjXZ8pu) {
            if (!(XbDBtey[LrTApIDL].c != XbDBtey[0].c)) {
                ZyApfmuW5 = ZyApfmuW5 +1;
            }
            LrTApIDL = LrTApIDL +1;
        };
    }
    {
        LrTApIDL = 0;
        while (ZyApfmuW5 > LrTApIDL) {
            for (lVur5kTP9 = 1; VaVjXZ8pu -LrTApIDL > lVur5kTP9; lVur5kTP9 = lVur5kTP9 + 1) {
                if (XbDBtey[LrTApIDL].q3MQqnXYtZV >= XbDBtey[LrTApIDL +lVur5kTP9].q3MQqnXYtZV) {
                    qR6S95aXvwC = XbDBtey[LrTApIDL].c;
                    XbDBtey[LrTApIDL].c = XbDBtey[LrTApIDL +lVur5kTP9].c;
                    XbDBtey[LrTApIDL +lVur5kTP9].c = qR6S95aXvwC;
                    RfOWt72l = XbDBtey[LrTApIDL].q3MQqnXYtZV;
                    XbDBtey[LrTApIDL].q3MQqnXYtZV = XbDBtey[LrTApIDL +lVur5kTP9].q3MQqnXYtZV;
                    XbDBtey[LrTApIDL +lVur5kTP9].q3MQqnXYtZV = RfOWt72l;
                };
            }
            LrTApIDL = LrTApIDL +1;
        };
    }
    for (LrTApIDL = 0; LrTApIDL < ZyApfmuW5; LrTApIDL = LrTApIDL +1) {
        printf ("%d,", XbDBtey[LrTApIDL].q3MQqnXYtZV);
    }
    printf ("%d\n", XbDBtey[LrTApIDL].q3MQqnXYtZV);
    return 0;
}

