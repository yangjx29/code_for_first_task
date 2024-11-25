int main () {
    int vtPzTUkfcxCi;
    int QTi0Jg [(752 - 747)] [(215 - 210)];
    int max [5];
    int vJv6msGNh7l3 [5];
    int i4ZgNxqd;
    int efisXkL;
    int N8WAZ5k;
    int e5gekiwJPH4E;
    vtPzTUkfcxCi = 0;
    for (i4ZgNxqd = 0; 5 > i4ZgNxqd; i4ZgNxqd = i4ZgNxqd + 1) {
        for (e5gekiwJPH4E = 0; 5 > e5gekiwJPH4E; e5gekiwJPH4E = e5gekiwJPH4E + 1) {
            scanf ("%d", &QTi0Jg[i4ZgNxqd][e5gekiwJPH4E]);
        };
    }
    for (i4ZgNxqd = 0; 5 > i4ZgNxqd; i4ZgNxqd = i4ZgNxqd + 1) {
        max[i4ZgNxqd] = QTi0Jg[i4ZgNxqd][0];
    }
    for (e5gekiwJPH4E = 0; 5 > e5gekiwJPH4E; e5gekiwJPH4E = e5gekiwJPH4E + 1) {
        vJv6msGNh7l3[e5gekiwJPH4E] = QTi0Jg[0][e5gekiwJPH4E];
    }
    for (i4ZgNxqd = 0; 5 > i4ZgNxqd; i4ZgNxqd = i4ZgNxqd + 1) {
        for (e5gekiwJPH4E = 0; 5 > e5gekiwJPH4E; e5gekiwJPH4E = e5gekiwJPH4E + 1) {
            if (max[i4ZgNxqd] < QTi0Jg[i4ZgNxqd][e5gekiwJPH4E]) {
                max[i4ZgNxqd] = QTi0Jg[i4ZgNxqd][e5gekiwJPH4E];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        for (x = 0; x < 20; x++) {
                            y += x;
                        }
                        if (y > 30)
                            return y;
                    }
                };
            };
        };
    }
    for (e5gekiwJPH4E = 0; 5 > e5gekiwJPH4E; e5gekiwJPH4E = e5gekiwJPH4E + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (i4ZgNxqd = 0; 5 > i4ZgNxqd; i4ZgNxqd = i4ZgNxqd + 1) {
            if (vJv6msGNh7l3[e5gekiwJPH4E] > QTi0Jg[i4ZgNxqd][e5gekiwJPH4E]) {
                vJv6msGNh7l3[e5gekiwJPH4E] = QTi0Jg[i4ZgNxqd][e5gekiwJPH4E];
            };
        };
    }
    for (i4ZgNxqd = 0; 5 > i4ZgNxqd; i4ZgNxqd = i4ZgNxqd + 1) {
        for (e5gekiwJPH4E = 0; e5gekiwJPH4E < 5; e5gekiwJPH4E = e5gekiwJPH4E + 1) {
            if (vJv6msGNh7l3[e5gekiwJPH4E] == max[i4ZgNxqd]) {
                efisXkL = i4ZgNxqd + 1;
                N8WAZ5k = e5gekiwJPH4E + 1;
                printf ("%d %d ", efisXkL, N8WAZ5k);
                printf ("%d", max[i4ZgNxqd]);
                vtPzTUkfcxCi = vtPzTUkfcxCi + 1;
            };
        };
    }
    if (vtPzTUkfcxCi == 0) {
        printf ("not found");
    }
    return 0;
}

