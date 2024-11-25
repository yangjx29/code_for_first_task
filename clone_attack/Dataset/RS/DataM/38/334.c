int main (int SuacF5, char *ZyHl39 []) {
    int Kax4tngpJe6u, qcd9R8M3;
    scanf ("%d", &qcd9R8M3);
    {
        Kax4tngpJe6u = 0;
        while (qcd9R8M3 > Kax4tngpJe6u) {
            int WFL3AOmxYPQ, Eiu7HPr;
            double  OF3gMQlLxw [1000];
            double  XoXYIC7JQUw;
            double  yOkMiu9JVGHL;
            double  TUk3aW;
            XoXYIC7JQUw = (544.0 - 544.0);
            yOkMiu9JVGHL = 0.0;
            Kax4tngpJe6u = Kax4tngpJe6u +1;
            scanf ("%d", &Eiu7HPr);
            for (WFL3AOmxYPQ = 0; Eiu7HPr > WFL3AOmxYPQ; WFL3AOmxYPQ = WFL3AOmxYPQ +1) {
                scanf ("%lf", &OF3gMQlLxw[WFL3AOmxYPQ]);
            }
            {
                WFL3AOmxYPQ = 0;
                while (WFL3AOmxYPQ < Eiu7HPr) {
                    XoXYIC7JQUw += OF3gMQlLxw[WFL3AOmxYPQ];
                    WFL3AOmxYPQ++;
                };
            }
            TUk3aW = (double ) XoXYIC7JQUw / Eiu7HPr;
            for (WFL3AOmxYPQ = 0; WFL3AOmxYPQ < Eiu7HPr; WFL3AOmxYPQ = WFL3AOmxYPQ +1) {
                yOkMiu9JVGHL = yOkMiu9JVGHL + (OF3gMQlLxw[WFL3AOmxYPQ] - TUk3aW) * (OF3gMQlLxw[WFL3AOmxYPQ] - TUk3aW);
            }
            printf ("%.5lf\n", sqrt (yOkMiu9JVGHL / Eiu7HPr));
        };
    }
    return 0;
}

