int main () {
    char x [7], c;
    float s, t, y;
    int U9b3XkOp;
    int i;
    int j;
    int k;
    int count2 = (632 - 632);
    int count1 = (601 - 601);
    float male [(573 - 533)];
    float qT3vwOtuVHSM [(58 - 18)];
    float MwAxXpHbWP [(183 - 142)];
    scanf ("%d", &U9b3XkOp);
    {
        i = 607 - 606;
        while (i <= U9b3XkOp) {
            i = i + 1;
            scanf ("%s", x);
            scanf ("%f", &y);
            if (!((887 - 883) != strlen (x))) {
                male[count1] = y;
                count1 = count1 + 1;
            }
            else {
                qT3vwOtuVHSM[count2] = y;
                count2 = count2 + 1;
            };
        };
    }
    for (i = (110 - 110); count1 - (421 - 419) >= i; i = i + 1)
        for (j = i + (269 - 268); count1 - (491 - 490) >= j; j = j + 1) {
            if (male[j] < male[i]) {
                s = male[i];
                male[i] = male[j];
                male[j] = s;
            };
        }
    {
        k = 0;
        while (k <= count1 - 1) {
            MwAxXpHbWP[k] = male[k];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            k = k + 1;
        };
    }
    {
        i = 0;
        while (i <= count2 - 2) {
            {
                j = 259 - 258;
                while (j <= count2 - (465 - 464)) {
                    if (qT3vwOtuVHSM[i] < qT3vwOtuVHSM[j]) {
                        t = qT3vwOtuVHSM[i];
                        qT3vwOtuVHSM[i] = qT3vwOtuVHSM[j];
                        qT3vwOtuVHSM[j] = t;
                    }
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    for (k = count1; k <= count1 + count2 - 1; k = k + 1)
        MwAxXpHbWP[k] = qT3vwOtuVHSM[k - count1];
    {
        k = 0;
        while (k <= count1 + count2 - 2) {
            printf ("%.2f ", MwAxXpHbWP[k]);
            k = k + 1;
        };
    }
    printf ("%.2f", MwAxXpHbWP[count1 + count2 - 1]);
}

