main () {
    int rKrYijyh2eH, V0esDv3Uhi, K9ZeLcx;
    double  pGYbQu21vyT [(1768 - 768)], NdioLYHwRM4, YhaHswnvxAX3, c2 [1000];
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
    scanf ("%d", &K9ZeLcx);
    while (K9ZeLcx = K9ZeLcx -1) {
        YhaHswnvxAX3 = 0;
        scanf ("%d", &rKrYijyh2eH);
        NdioLYHwRM4 = 0;
        for (V0esDv3Uhi = 0; V0esDv3Uhi < rKrYijyh2eH; V0esDv3Uhi = V0esDv3Uhi +1) {
            scanf ("%lf", &pGYbQu21vyT[V0esDv3Uhi]);
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
            NdioLYHwRM4 += pGYbQu21vyT[V0esDv3Uhi] / rKrYijyh2eH;
        }
        for (V0esDv3Uhi = 0; V0esDv3Uhi < rKrYijyh2eH; V0esDv3Uhi = V0esDv3Uhi +1) {
            c2[V0esDv3Uhi] = (pGYbQu21vyT[V0esDv3Uhi] - NdioLYHwRM4) * (pGYbQu21vyT[V0esDv3Uhi] - NdioLYHwRM4);
            YhaHswnvxAX3 += c2[V0esDv3Uhi] / rKrYijyh2eH;
        }
        printf ("%.5lf\n", sqrt (YhaHswnvxAX3));
    };
}

