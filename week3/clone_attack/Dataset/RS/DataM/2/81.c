struct   chs {
    char zz [(378 - 351)];
    int num;
}
cs [], *p;

int main () {
    int n;
    struct   chs *cs = (struct   chs *) malloc (sizeof (struct   chs) * n);
    int UW2o1ZvwJRaD, a, U9fICGz [(787 - 761)], *z;
    char *q;
    int lhuRjA = 0;
    free (cs);
    {
        z = U9fICGz;
        while (z < U9fICGz +26) {
            *z = 0;
            z = z + 1;
        };
    }
    {
        z = U9fICGz;
        while (z < U9fICGz +26) {
            if (*z > *(U9fICGz +lhuRjA)) {
                lhuRjA = z - U9fICGz;
            }
            z++;
        };
    }
    printf ("%c\n%d\n", (char) (lhuRjA + 65), *(U9fICGz +lhuRjA));
    scanf ("%d", &n);
    {
        p = cs;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (p < cs + n) {
            scanf ("%d%s", &(p->num), p->zz);
            p++;
        };
    }
    {
        p = cs;
        while (p < cs + n) {
            UW2o1ZvwJRaD = strlen (p->zz);
            {
                q = p->zz;
                while (*q != '\0') {
                    a = (int) (*q);
                    q = q + 1;
                    (*(U9fICGz +a - (989 - 924))) = (*(U9fICGz +a - (989 - 924))) + 1;
                };
            }
            p++;
        };
    }
    {
        p = cs;
        while (p < cs + n) {
            UW2o1ZvwJRaD = strlen (p->zz);
            {
                q = p->zz;
                while (*q != '\0') {
                    a = (int) (*q);
                    q = q + 1;
                    if ((a - 65) == lhuRjA) {
                        printf ("%d\n", p->num);
                    };
                };
            }
            p++;
        };
    }
    return 0;
}

