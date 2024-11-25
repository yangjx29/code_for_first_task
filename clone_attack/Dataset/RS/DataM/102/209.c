int main () {
    char p [10];
    float sDTRJu3B;
    float e;
    float m [40];
    float rNdL2VZv [40];
    int ScJ7bLVSDY6p;
    int j;
    int Z85g3TRruhlD;
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
    int b;
    ScJ7bLVSDY6p = 0;
    j = 0;
    scanf ("%d", &Z85g3TRruhlD);
    for (i = 0; Z85g3TRruhlD > i; i = i + 1) {
        scanf ("%s", &p);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%f", &sDTRJu3B);
        if (p[0] == 'f') {
            rNdL2VZv[ScJ7bLVSDY6p] = sDTRJu3B;
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
            ScJ7bLVSDY6p++;
        }
        else {
            m[j] = sDTRJu3B;
            j = j + 1;
        };
    }
    for (i = 1; j > i; i++) {
        b = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (b < j - i) {
            if (m[b] > m[b + 1]) {
                e = m[b + 1];
                m[b + 1] = m[b];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                m[b] = e;
            }
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
            b = b + 1;
        };
    }
    {
        i = 0;
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
        while (j > i) {
            printf ("%.2f ", m[i]);
            i = i + 1;
        };
    }
    {
        i = 1;
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
        while (ScJ7bLVSDY6p > i) {
            for (b = 0; ScJ7bLVSDY6p -i > b; b++) {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (rNdL2VZv[b] < rNdL2VZv[b + 1]) {
                    e = rNdL2VZv[b + 1];
                    rNdL2VZv[b + 1] = rNdL2VZv[b];
                    rNdL2VZv[b] = e;
                };
            }
            i++;
        };
    }
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (i < ScJ7bLVSDY6p) {
            if (i != ScJ7bLVSDY6p -1) {
                printf ("%.2f ", rNdL2VZv[i]);
            }
            else {
                printf ("%.2f", rNdL2VZv[i]);
            }
            i++;
        };
    }
    return 0;
}

