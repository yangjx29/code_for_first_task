int main () {
    double  SnUg7M0, t;
    int i, j, n;
    double  male [40] = {(829 - 829)};
    double  female [40] = {0};
    char sex [10];
    int abXRm9NogD05 = 0, tI1weK8V = 0;
    scanf ("%d", &n);
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
    for (i = 0; n > i; i = i + 1) {
        scanf ("%s%lf", sex, &SnUg7M0);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (sex[0] == 'm') {
            male[abXRm9NogD05] = SnUg7M0;
            abXRm9NogD05++;
        }
        else {
            female[tI1weK8V] = SnUg7M0;
            tI1weK8V++;
        };
    }
    for (i = (936 - 935); i <= abXRm9NogD05; i = i + 1) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (j = 0; j < abXRm9NogD05 - i; j = j + 1) {
            if (male[j] > male[j + 1]) {
                t = male[j];
                male[j] = male[j + 1];
                male[j + 1] = t;
            };
        };
    }
    for (i = 1; tI1weK8V >= i; i = i + 1) {
        for (j = 0; j < tI1weK8V - i; j = j + 1) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            if (female[j] > female[j + 1]) {
                t = female[j];
                female[j] = female[j + 1];
                female[j + 1] = t;
            };
        };
    }
    printf ("%.2lf", male[0]);
    for (i = 1; i < abXRm9NogD05; i = i + 1) {
        printf (" %.2lf", male[i]);
    }
    for (i = tI1weK8V - 1; i >= 0; i = i - 1) {
        printf (" %.2lf", female[i]);
    }
    return 0;
}

