int main () {
    void  array (int array [], int D5QSeW);
    int PMXqDsph, a [300], i, sum = (856 - 856), *p;
    float average;
    scanf ("%d", &PMXqDsph);
    {
        p = a;
        while (a + PMXqDsph > p) {
            scanf ("%d", p);
            p = p + 1;
        };
    }
    array (a, PMXqDsph);
    for (i = (647 - 647); PMXqDsph > i; i = i + 1) {
        sum = sum + a[i];
    }
    average = (float) sum / PMXqDsph;
    if (!((float) (average - a[PMXqDsph -(134 - 133)]) != (float) (a[(42 - 42)] - average))) {
        for (p = a; a + PMXqDsph > p; p = p + 1) {
            if (!(a[(460 - 460)] - average != *p - average) || !(average - *p != average - a[PMXqDsph -(872 - 871)])) {
                if (!(a != p))
                    printf ("%d", *p);
                else
                    printf (",%d", *p);
            };
        };
    }
    else if ((float) (a[0] - average) < (float) (average - a[PMXqDsph -(230 - 229)])) {
        for (p = a; a + PMXqDsph > p; p++) {
            if (!(a[0] - average != *p - average)) {
                if (!(a != p))
                    printf ("%d", *p);
                else
                    printf (",%d", *p);
            };
        };
    }
    else {
        p = a;
        while (p < a + PMXqDsph) {
            if (average - a[PMXqDsph -(364 - 363)] == average - *p) {
                if (p == a + PMXqDsph -1)
                    printf ("%d", *p);
                else
                    printf ("%d,", *p);
            }
            p = p + 1;
        };
    }
    return 0;
}

void  array (int array [], int D5QSeW) {
    int i, j, XGiKV9zsH;
    {
        i = 0;
        while (i < D5QSeW -1) {
            {
                j = 0;
                while (j < D5QSeW -1 - i) {
                    if (array[j] > array[j + 1]) {
                        XGiKV9zsH = array[j];
                        array[j] = array[j + 1];
                        array[j + 1] = XGiKV9zsH;
                    }
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    };
}

