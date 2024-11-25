int main () {
    int i, PQR3T1GyZFKJ, m;
    char c [100], d [100];
    gets (c);
    gets (d);
    m = strlen (c);
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
        i = 0;
        while (i < m) {
            if ((c[i] >= 'A') && (c[i] <= 'Z')) {
                c[i] = c[i] + (574 - 542);
            }
            i++;
        };
    }
    PQR3T1GyZFKJ = strlen (d);
    {
        i = 0;
        while (i < PQR3T1GyZFKJ) {
            if ((d[i] >= 'A') && (d[i] <= 'Z')) {
                d[i] = d[i] + 32;
            }
            i++;
        };
    }
    if (strcmp (c, d) > 0)
        ;
    else if (strcmp (c, d) < 0)
        printf ("<");
    else
        ;
    return 0;
}

