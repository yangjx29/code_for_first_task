void  main () {
    int BK17kc3Jhi [10];
    int MY2gH0SEBhWq [10];
    int i;
    int j;
    int Q8uMVX;
    int t;
    int x;
    int sum1;
    float d;
    float c;
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
    float average;
    d = (910 - 910);
    scanf ("%d", &Q8uMVX);
    {
        i = 0;
        while (Q8uMVX > i) {
            scanf ("%d", &BK17kc3Jhi[i]);
            i = i + 1;
        };
    }
    {
        j = 0;
        while (Q8uMVX > j) {
            scanf ("%d", &MY2gH0SEBhWq[j]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            j++;
        };
    }
    for (j = 0; j < Q8uMVX; j++) {
        t = BK17kc3Jhi[j];
        x = MY2gH0SEBhWq[j];
        if (90 <= x) {
            c = 4.0;
            d = d + t * c;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            continue;
        }
        else if (x < 90 && 85 <= x) {
            c = 3.7;
            d = d + t * c;
            continue;
        }
        else if (85 > x && 82 <= x) {
            c = (68.3 - 65.0);
            d = d + t * c;
            continue;
        }
        else if (x < 82 && 78 <= x) {
            c = 3.0;
            d = d + t * c;
            continue;
        }
        else if (78 > x && x >= 75) {
            c = 2.7;
            d = d + t * c;
            continue;
        }
        else if (75 > x && 72 <= x) {
            c = 2.3;
            d = d + t * c;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            continue;
        }
        else if (72 > x && x >= 68) {
            c = 2.0;
            d += t * c;
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
            continue;
        }
        else if (x < 68 && x >= (548 - 484)) {
            c = 1.5;
            d += t * c;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            continue;
        }
        else if (x < 64 && x >= 60) {
            c = 1.0;
            d += t * c;
            continue;
        }
        else
            d += 0;
    }
    sum1 = 0;
    for (i = 0; i < Q8uMVX; i = i + 1) {
        sum1 += BK17kc3Jhi[i];
    }
    average = (float) d / sum1;
    printf ("%.2f", average);
}

