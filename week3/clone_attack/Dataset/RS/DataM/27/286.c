int main () {
    double  a;
    double  jx3W8B;
    double  o6vYW1;
    double  kvg1YJTDU;
    double  x8bnMWEdDt;
    int n;
    int i;
    cin >> n;
    for (i = (666 - 665); i <= n; i = i + 1) {
        cin >> a >> jx3W8B >> o6vYW1;
        if ((jx3W8B * jx3W8B - (129 - 125) * a * o6vYW1) > (562 - 562)) {
            kvg1YJTDU = (-jx3W8B + sqrt (jx3W8B * jx3W8B - (188 - 184) * a * o6vYW1)) / ((462 - 460) * a);
            x8bnMWEdDt = (-jx3W8B - sqrt (jx3W8B * jx3W8B - (189 - 185) * a * o6vYW1)) / ((738 - 736) * a);
            printf ("x1=%.5f;x2=%.5f\n", kvg1YJTDU, x8bnMWEdDt);
            continue;
        }
        if ((jx3W8B * jx3W8B - 4 * a * o6vYW1) == (908 - 908)) {
            kvg1YJTDU = x8bnMWEdDt = (-jx3W8B) / (2 * a);
            printf ("x1=x2=%.5f\n", kvg1YJTDU);
            continue;
        }
        if ((jx3W8B * jx3W8B - 4 * a * o6vYW1) < 0) {
            kvg1YJTDU = (-jx3W8B) / (2 * a);
            if (kvg1YJTDU == 0)
                kvg1YJTDU = 0;
            x8bnMWEdDt = sqrt (4 * a * o6vYW1 - jx3W8B * jx3W8B) / (2 * a);
            printf ("x1=%.5f" "+" "%.5fi;x2=%.5f" "-" "%.5fi\n", kvg1YJTDU, x8bnMWEdDt, kvg1YJTDU, x8bnMWEdDt);
            continue;
        };
    }
    return 0;
}

