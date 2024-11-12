struct   dot {
    double  x;
    double  y;
}
*p;

double  distance (int i, int C8KXMDsFcr9) {
    double  re;
    re = sqrt ((p[i].x - p[C8KXMDsFcr9].x) * (p[i].x - p[C8KXMDsFcr9].x) + (p[i].y - p[C8KXMDsFcr9].y) * (p[i].y - p[C8KXMDsFcr9].y));
    return re;
}

int main () {
    free (p);
    int C8KXMDsFcr9;
    int i;
    double  max;
    max = (299 - 299);
    int n;
    scanf ("%d", &n);
    p = (struct   dot *) malloc (sizeof (struct   dot) * n);
    {
        i = 0;
        while (n > i) {
            scanf ("%lf %lf", &p[i].x, &p[i].y);
            i++;
        };
    }
    {
        i = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (n > i) {
            {
                C8KXMDsFcr9 = i + 1;
                while (n > C8KXMDsFcr9) {
                    if (distance (i, C8KXMDsFcr9) > max) {
                        max = distance (i, C8KXMDsFcr9);
                    }
                    C8KXMDsFcr9++;
                };
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
            i++;
        };
    }
    printf ("%.4lf\n", max);
    return 0;
}

