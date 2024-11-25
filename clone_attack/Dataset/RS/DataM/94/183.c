void  sort (int RmuqEs [], int hfpSe5LZ06Hu) {
    int i;
    int j;
    int k;
    {
        i = 0;
        while (hfpSe5LZ06Hu > i) {
            for (j = 0; hfpSe5LZ06Hu - i - (916 - 915) > j; j = j + 1) {
                if (RmuqEs[j + 1] < RmuqEs[j]) {
                    k = RmuqEs[j];
                    RmuqEs[j] = RmuqEs[j + 1];
                    RmuqEs[j + 1] = k;
                };
            }
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
            i++;
        };
    };
}

int main () {
    int i;
    int hfpSe5LZ06Hu;
    int j;
    int m;
    int XzMJZc15Iq4 [500];
    int NSt1uh [500];
    scanf ("%d", &hfpSe5LZ06Hu);
    for (i = 0; i < hfpSe5LZ06Hu; i = i + 1) {
        scanf ("%d", &XzMJZc15Iq4[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        };
    }
    for (i = 0, j = 0; i < hfpSe5LZ06Hu; i = i + 1) {
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
        if (XzMJZc15Iq4[i] % 2 != 0) {
            NSt1uh[j] = XzMJZc15Iq4[i];
            j = j + 1;
        };
    }
    for (i = hfpSe5LZ06Hu - 1;; i = i - 1) {
        if (XzMJZc15Iq4[i] % 2 != 0) {
            m = XzMJZc15Iq4[i];
            break;
        };
    }
    for (i = 0, j = 1;; i = i + 1) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (NSt1uh[i] != m) {
            j = j + 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        }
        else {
            break;
        };
    }
    sort (NSt1uh, j);
    for (i = 0; i < j - 1; i++) {
        printf ("%d,", NSt1uh[i]);
    }
    printf ("%d", NSt1uh[j - 1]);
    return 0;
}

