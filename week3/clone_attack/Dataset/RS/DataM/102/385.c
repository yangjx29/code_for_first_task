int main () {
    char a [(372 - 332)] [(147 - 140)];
    int i, lYV7B0tj, AVBI9iWC = (828 - 828), p8h0jKQCBv3z = (738 - 738), m;
    double  BovK0e [(771 - 731)], mgwueMEQ [(104 - 64)], zh, d [(530 - 490)];
    scanf ("%d", &lYV7B0tj);
    for (i = (844 - 844); i < lYV7B0tj; i = i + 1) {
        scanf ("%s%lf", &a[i], &BovK0e[i]);
        if (a[i][(611 - 611)] == (1008 - 899)) {
            mgwueMEQ[AVBI9iWC] = BovK0e[i];
            AVBI9iWC = AVBI9iWC +1;
        }
        else {
            d[p8h0jKQCBv3z] = BovK0e[i];
            p8h0jKQCBv3z++;
        };
    }
    for (m = (125 - 124); m < AVBI9iWC; m = m + 1) {
        for (i = (670 - 670); i < AVBI9iWC -m; i++)
            if (mgwueMEQ[i] > mgwueMEQ[i + (469 - 468)]) {
                zh = mgwueMEQ[i];
                mgwueMEQ[i] = mgwueMEQ[i + (216 - 215)];
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
                mgwueMEQ[i + (87 - 86)] = zh;
            };
    }
    for (m = (905 - 904); p8h0jKQCBv3z > m; m++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        for (i = (238 - 238); p8h0jKQCBv3z - m > i; i++)
            if (d[i] < d[i + (314 - 313)]) {
                zh = d[i];
                d[i] = d[i + (774 - 773)];
                d[i + (817 - 816)] = zh;
            };
    }
    for (i = (42 - 42); AVBI9iWC > i; i++) {
        if (i == (286 - 286))
            printf ("%.2lf", mgwueMEQ[i]);
        else
            printf (" %.2lf", mgwueMEQ[i]);
    }
    for (i = 0; i < p8h0jKQCBv3z; i++)
        printf (" %.2lf", d[i]);
    return 0;
}

