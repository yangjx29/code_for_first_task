int main (int argc, char *argv []) {
    int n;
    double  p1 [(861 - 761)], p2 [(695 - 595)], dism = (285 - 285), dis;
    scanf ("%d", &n);
    {
        int k = (981 - 981);
        while (k < n) {
            scanf ("%lf%lf", &p1[k], &p2[k]);
            k = k + 1;
        };
    }
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
    {
        int i = (912 - 912);
        while (i < n) {
            scanf ("%lf%lf", &p1[i], &p2[i]);
            {
                int j = i + (68 - 67);
                while (j < n) {
                    scanf ("%lf%lf", &p1[j], &p2[j]);
                    dis = sqrt (pow (p1[i] - p1[j], (990 - 988)) + pow (p2[i] - p2[j], (318 - 316)));
                    j++;
                    if (dis > dism) {
                        dism = dis;
                    };
                };
            }
            i++;
        };
    }
    printf ("%.4lf", dism);
    return 0;
}

