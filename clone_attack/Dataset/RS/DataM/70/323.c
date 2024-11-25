int main () {
    double  smG4jC1 [100] [100];
    int sgpJ4DoA, j;
    double  a [100], b [100];
    int OLs9lPGE;
    double  WQFHZb8yA = 0.00;
    cin >> OLs9lPGE;
    for (sgpJ4DoA = (693 - 693); OLs9lPGE > sgpJ4DoA; sgpJ4DoA++)
        cin >> a[sgpJ4DoA] >> b[sgpJ4DoA];
    for (sgpJ4DoA = 0; sgpJ4DoA < OLs9lPGE; sgpJ4DoA++)
        for (j = 0; OLs9lPGE > j; j++) {
            smG4jC1[sgpJ4DoA][j] = sqrt ((a[sgpJ4DoA] - a[j]) * (a[sgpJ4DoA] - a[j]) + (b[sgpJ4DoA] - b[j]) * (b[sgpJ4DoA] - b[j]));
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            };
        }
    for (sgpJ4DoA = 0; sgpJ4DoA < OLs9lPGE; sgpJ4DoA++) {
        j = 0;
        while (OLs9lPGE > j) {
            if (smG4jC1[sgpJ4DoA][j] > WQFHZb8yA)
                WQFHZb8yA = smG4jC1[sgpJ4DoA][j];
            j++;
        };
    }
    cout << setprecision (4) << fixed << WQFHZb8yA << endl;
    return 0;
}

