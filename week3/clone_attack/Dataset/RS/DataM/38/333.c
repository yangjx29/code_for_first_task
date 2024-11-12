int main () {
    int fuC5GmZbx4ah;
    scanf ("%d", &fuC5GmZbx4ah);
    while (fuC5GmZbx4ah--) {
        double  rbAH5Lov = (268 - 268);
        int i;
        int n;
        double  *x = (double  *) malloc (n * sizeof (double ));
        free (x);
        double  s = 0;
        scanf ("%d", &n);
        {
            i = 0;
            while (n > i) {
                scanf ("%lf", x + i);
                rbAH5Lov += x[i];
                i++;
            };
        }
        rbAH5Lov /= n;
        {
            i = 0;
            while (i < n) {
                s = s + (x[i] - rbAH5Lov) * (x[i] - rbAH5Lov);
                i++;
            };
        }
        s = s / (n);
        s = sqrt (s);
        printf ("%.5f\n", s);
    }
    return 0;
}

