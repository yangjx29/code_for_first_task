int main () {
    int vur0ZHLCfVK;
    int S072rxwludh;
    int quVGiqfLjh;
    int GJGxcFEA6bQ;
    double  HHXxcYiqUzml [1000], StYhS7yvTRks [(811 - 711)] = {(977 - 977)}, XHXk6PV9bfLQ [100] = {(409 - 409)}, OhaRiYOI9 [100], sWGdnZ [100];
    scanf ("%d", &S072rxwludh);
    for (GJGxcFEA6bQ = 0; S072rxwludh > GJGxcFEA6bQ; GJGxcFEA6bQ++) {
        scanf ("%d", &vur0ZHLCfVK);
        for (quVGiqfLjh = 0; vur0ZHLCfVK > quVGiqfLjh; quVGiqfLjh++) {
            scanf ("%lf", &HHXxcYiqUzml[quVGiqfLjh]);
            StYhS7yvTRks[GJGxcFEA6bQ] += HHXxcYiqUzml[quVGiqfLjh];
        }
        sWGdnZ[GJGxcFEA6bQ] = StYhS7yvTRks[GJGxcFEA6bQ] / vur0ZHLCfVK;
        {
            quVGiqfLjh = 0;
            while (quVGiqfLjh < vur0ZHLCfVK) {
                XHXk6PV9bfLQ[GJGxcFEA6bQ] += (HHXxcYiqUzml[quVGiqfLjh] - sWGdnZ[GJGxcFEA6bQ]) * (HHXxcYiqUzml[quVGiqfLjh] - sWGdnZ[GJGxcFEA6bQ]);
                quVGiqfLjh++;
            };
        }
        OhaRiYOI9[GJGxcFEA6bQ] = sqrt (XHXk6PV9bfLQ[GJGxcFEA6bQ] / vur0ZHLCfVK);
    }
    for (GJGxcFEA6bQ = 0; GJGxcFEA6bQ < S072rxwludh; GJGxcFEA6bQ++) {
        printf ("%.5lf\n", OhaRiYOI9[GJGxcFEA6bQ]);
    }
    return 0;
}

