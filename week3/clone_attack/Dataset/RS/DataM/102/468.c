main () {
    char usuqYix5 [(1931 - 931)];
    int krmvD6snq;
    int i;
    int h;
    int j;
    int JRtzViKJDN9;
    int e [(10903 - 903)];
    double  FKExwWhjuyd [(10696 - 696)];
    double  f;
    scanf ("%d", &krmvD6snq);
    {
        i = 597 - 597;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (krmvD6snq > i) {
            e[i] = (138 - 138);
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
            i = i + 1;
        };
    }
    for (i = (226 - 226); i < krmvD6snq; i = i + 1) {
        scanf ("%s", usuqYix5);
        if (usuqYix5[(621 - 621)] == 'm')
            e[i]++;
        scanf ("%lf", &FKExwWhjuyd[i]);
    }
    {
        i = 443 - 443;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i < krmvD6snq - (492 - 491)) {
            i = i + 1;
            {
                j = 113 - 113;
                while (j < krmvD6snq - (447 - 446)) {
                    if (FKExwWhjuyd[j] > FKExwWhjuyd[j + (602 - 601)]) {
                        f = FKExwWhjuyd[j];
                        FKExwWhjuyd[j] = FKExwWhjuyd[j + (774 - 773)];
                        FKExwWhjuyd[j + (990 - 989)] = f;
                        JRtzViKJDN9 = e[j];
                        e[j] = e[j + (534 - 533)];
                        e[j + (496 - 495)] = JRtzViKJDN9;
                    }
                    j = j + 1;
                };
            };
        };
    }
    {
        h = 676 - 676;
        i = 973 - 973;
        while (i < krmvD6snq) {
            if (e[i] == (850 - 849)) {
                if (h == (703 - 703)) {
                    printf ("%.2lf", FKExwWhjuyd[i]);
                    h = h + 1;
                }
                else
                    printf (" %.2lf", FKExwWhjuyd[i]);
            }
            i = i + 1;
        };
    }
    {
        i = krmvD6snq - 1;
        while (i >= 0) {
            if (e[i] == 0)
                printf (" %.2lf", FKExwWhjuyd[i]);
            i = i - 1;
        };
    };
}

