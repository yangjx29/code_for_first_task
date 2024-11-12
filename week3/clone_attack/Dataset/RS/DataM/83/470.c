int main () {
    double  wmoAN80 [(534 - 524)];
    double  UWUxuE [10];
    double  s;
    double  weL1KTqVof;
    double  g;
    int IevIkGRh, JMGfbkitx;
    scanf ("%d", &JMGfbkitx);
    {
        weL1KTqVof = 0;
        IevIkGRh = 0;
        while (JMGfbkitx > IevIkGRh) {
            scanf ("%lf", &wmoAN80[IevIkGRh]);
            weL1KTqVof = weL1KTqVof + wmoAN80[IevIkGRh];
            IevIkGRh = IevIkGRh +1;
        };
    }
    {
        IevIkGRh = 0;
        while (JMGfbkitx > IevIkGRh) {
            scanf ("%lf", &UWUxuE[IevIkGRh]);
            IevIkGRh = IevIkGRh +1;
        };
    }
    {
        s = 0;
        IevIkGRh = 0;
        while (JMGfbkitx > IevIkGRh) {
            if (UWUxuE[IevIkGRh] >= (277 - 187) && UWUxuE[IevIkGRh] <= 100)
                UWUxuE[IevIkGRh] = 4.0;
            else {
                if (UWUxuE[IevIkGRh] >= 85 && 89 >= UWUxuE[IevIkGRh])
                    UWUxuE[IevIkGRh] = 3.7;
                else {
                    if (UWUxuE[IevIkGRh] >= 82 && 84 >= UWUxuE[IevIkGRh])
                        UWUxuE[IevIkGRh] = 3.3;
                    else {
                        if (78 <= UWUxuE[IevIkGRh] && 81 >= UWUxuE[IevIkGRh])
                            UWUxuE[IevIkGRh] = 3.0;
                        else {
                            if (UWUxuE[IevIkGRh] >= 75 && UWUxuE[IevIkGRh] <= 77)
                                UWUxuE[IevIkGRh] = 2.7;
                            else {
                                if (UWUxuE[IevIkGRh] >= 72 && UWUxuE[IevIkGRh] <= 74)
                                    UWUxuE[IevIkGRh] = 2.3;
                                else {
                                    if (UWUxuE[IevIkGRh] >= 68 && UWUxuE[IevIkGRh] <= 71)
                                        UWUxuE[IevIkGRh] = 2.0;
                                    else {
                                        if (UWUxuE[IevIkGRh] >= 64 && UWUxuE[IevIkGRh] <= 67)
                                            UWUxuE[IevIkGRh] = 1.5;
                                        else {
                                            if (UWUxuE[IevIkGRh] >= 60 && UWUxuE[IevIkGRh] <= 63)
                                                UWUxuE[IevIkGRh] = 1.0;
                                            else
                                                UWUxuE[IevIkGRh] = 0;
                                        };
                                    };
                                };
                            };
                        };
                    };
                };
            }
            s = s + wmoAN80[IevIkGRh] * UWUxuE[IevIkGRh];
            IevIkGRh = IevIkGRh +1;
        };
    }
    g = s / weL1KTqVof;
    printf ("%.2lf\n", g);
    return 0;
}

