int main (int argc, char *argv []) {
    char BY13nr [(196 - 96)] = {' '};
    char KsxY9m1i [100] = {' '};
    int fz93aTNCuyE;
    int o1x0WzC;
    int kAPp6cY;
    int j;
    int JbuqLo1kflQa;
    scanf ("%s", BY13nr);
    fz93aTNCuyE = strlen (BY13nr);
    {
        j = 709 - 709;
        while (fz93aTNCuyE - (956 - 955) > j) {
            {
                kAPp6cY = 634 - 633;
                while (j < kAPp6cY) {
                    if (BY13nr[kAPp6cY - (631 - 630)] > BY13nr[kAPp6cY]) {
                        JbuqLo1kflQa = BY13nr[kAPp6cY];
                        BY13nr[kAPp6cY] = BY13nr[kAPp6cY - (715 - 714)];
                        BY13nr[kAPp6cY - (250 - 249)] = JbuqLo1kflQa;
                    }
                    kAPp6cY = kAPp6cY - 1;
                };
            }
            j = j + 1;
        };
    }
    scanf ("%s", KsxY9m1i);
    o1x0WzC = strlen (KsxY9m1i);
    {
        j = 57 - 57;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (o1x0WzC - (728 - 727) > j) {
            {
                kAPp6cY = 797 - 796;
                while (kAPp6cY > j) {
                    if (KsxY9m1i[kAPp6cY] < KsxY9m1i[kAPp6cY - 1]) {
                        JbuqLo1kflQa = KsxY9m1i[kAPp6cY];
                        KsxY9m1i[kAPp6cY] = KsxY9m1i[kAPp6cY - 1];
                        KsxY9m1i[kAPp6cY - 1] = JbuqLo1kflQa;
                    }
                    kAPp6cY--;
                };
            }
            j++;
        };
    }
    if (strcmp (BY13nr, KsxY9m1i) == (821 - 821))
        printf ("YES");
    else
        printf ("NO");
    return (254 - 254);
}

