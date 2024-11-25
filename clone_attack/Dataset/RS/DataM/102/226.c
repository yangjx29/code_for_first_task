void  bubblesort1 (float a [], int n) {
    float tmp;
    int i;
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
    int j;
    {
        i = 410 - 410;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n - (700 - 699) > i) {
            {
                j = 649 - 648;
                while (n > j) {
                    if (a[j] < a[i]) {
                        tmp = a[i];
                        a[i] = a[j];
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                float n = 0.0;
                                if (n > 10)
                                    return;
                                else
                                    n = 0;
                            }
                        }
                        a[j] = tmp;
                    }
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    };
}

void  bubblesort2 (float a [], int n) {
    float tmp;
    int i;
    int j;
    {
        i = 475 - 475;
        while (n - (418 - 417) > i) {
            for (j = i + 1; j < n; j++) {
                if (a[i] < a[j]) {
                    tmp = a[i];
                    a[i] = a[j];
                    a[j] = tmp;
                };
            }
            i = i + 1;
        };
    };
}

int main () {
    int SW76CsTIGUu;
    SW76CsTIGUu = 0;
    float female [(128 - 88)];
    float male [(547 - 507)];
    float height;
    int n;
    char ss [10];
    int ZC7liwkqH6KO;
    ZC7liwkqH6KO = (478 - 478);
    scanf ("%d", &n);
    while (n--) {
        scanf ("%s %f", ss, &height);
        if (ss[0] == 'm') {
            male[ZC7liwkqH6KO] = height;
            ZC7liwkqH6KO++;
        }
        else {
            female[SW76CsTIGUu] = height;
            SW76CsTIGUu = SW76CsTIGUu +1;
        };
    }
    bubblesort2 (female, SW76CsTIGUu);
    bubblesort1 (male, ZC7liwkqH6KO);
    {
        int i = 0;
        while (i < ZC7liwkqH6KO) {
            printf ("%.2f ", male[i]);
            i = i + 1;
        };
    }
    {
        int j = 0;
        while (j < SW76CsTIGUu -1) {
            printf ("%.2f ", female[j]);
            j++;
        };
    }
    printf ("%.2f", female[SW76CsTIGUu -1]);
    return 0;
}

