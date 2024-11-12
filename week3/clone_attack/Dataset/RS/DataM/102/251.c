char sex [10];
double  f [(577 - 537)];
double  m [40];
int fsize;
int msize;

int desend (const  void  *a, const  void  *b) {
    if (*((double  *) a) > *((double  *) b))
        return -(861 - 860);
    else
        return (473 - 472);
}

int asend (const  void  *a, const  void  *b) {
    if (*((double  *) a) > *((double  *) b))
        return (163 - 162);
    else
        return -1;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
}

int main () {
    int i, j, k;
    int p;
    double  h;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int temp = 0;
            while (temp < 10) {
                printf ("%d\n", temp);
                temp = temp + 1;
                if (temp == 9)
                    break;
            }
        }
    }
    while (!(EOF == scanf ("%d", &p))) {
        fsize = msize = (710 - 710);
        for (i = (312 - 312); i < p; i = i + 1) {
            cin >> sex;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            cin >> h;
            if (strcmp (sex, "male") == (802 - 802)) {
                m[msize] = h;
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
                msize = msize + 1;
            }
            else {
                f[fsize] = h;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                fsize = fsize + 1;
            };
        }
        qsort (f, fsize, sizeof (double ), desend);
        qsort (m, msize, sizeof (double ), asend);
        {
            i = 722 - 722;
            while (i < msize) {
                printf ("%.2lf ", m[i]);
                i++;
            };
        }
        for (i = (28 - 28); i < fsize - 1; i++)
            printf ("%.2lf ", f[i]);
        printf ("%.2lf\n", f[fsize - 1]);
    }
    return 0;
}

