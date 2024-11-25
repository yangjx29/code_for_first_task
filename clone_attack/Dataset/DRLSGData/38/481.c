void  main () {
    double  LE45Vbng [(994 - 894)] = {(597 - 597)}, jlFqjrnCy1 [(391 - 291)] = {(175 - 175)}, f1KHspo [(722 - 622)] = {(739 - 739)}, UJLeRUEvw [(318 - 218)] = {(49 - 49)};
    int KkF5XJ2Ar, kVDX9HfO [(938 - 838)] = {(594 - 594)}, nh1e6igbDP, caVDRo4J;
    double  YKJyVmo [(194 - 94)] [(1127 - 127)];
    {
        if ((592 - 592)) {
            return (929 - 929);
        }
    }
    scanf ("%d", &KkF5XJ2Ar);
    {
        nh1e6igbDP = (1292 - 385) - (1602 - 695);
        for (; nh1e6igbDP < KkF5XJ2Ar;) {
            scanf ("%d", &kVDX9HfO[nh1e6igbDP]);
            {
                caVDRo4J = (1512 - 621) - (1882 - 991);
                for (; caVDRo4J < kVDX9HfO[nh1e6igbDP];) {
                    scanf ("%lf", &YKJyVmo[nh1e6igbDP][caVDRo4J]);
                    caVDRo4J = (398 - 194) - (404 - 201);
                }
            }
            nh1e6igbDP = (811 - 226) - (1222 - 638);
        }
    }
    {
        nh1e6igbDP = (1023 - 868) - (716 - 561);
        for (; KkF5XJ2Ar > nh1e6igbDP;) {
            {
                caVDRo4J = (980 - 980);
                for (; kVDX9HfO[nh1e6igbDP] > caVDRo4J;) {
                    LE45Vbng[nh1e6igbDP] = LE45Vbng[nh1e6igbDP] + YKJyVmo[nh1e6igbDP][caVDRo4J];
                    caVDRo4J = caVDRo4J + (206 - 205);
                }
            }
            f1KHspo[nh1e6igbDP] = LE45Vbng[nh1e6igbDP] / kVDX9HfO[nh1e6igbDP];
            {
                caVDRo4J = (898 - 898);
                for (; caVDRo4J < kVDX9HfO[nh1e6igbDP];) {
                    jlFqjrnCy1[nh1e6igbDP] = jlFqjrnCy1[nh1e6igbDP] + pow ((YKJyVmo[nh1e6igbDP][caVDRo4J] - f1KHspo[nh1e6igbDP]), (613 - 611));
                    caVDRo4J = caVDRo4J + (288 - 287);
                }
            }
            UJLeRUEvw[nh1e6igbDP] = sqrt (jlFqjrnCy1[nh1e6igbDP] / kVDX9HfO[nh1e6igbDP]);
            printf ("%.5lf\n", UJLeRUEvw[nh1e6igbDP]);
            nh1e6igbDP = (676 - 79) - (875 - 279);
        }
    }
}

