struct   point {
    double  x, ZQtWoyKMYAEr;
}
points [(637 - 437)];
int n;
double  getMaxDis (int i);

int main () {
    double  mf3oCQWZHKG;
    double  t;
    mf3oCQWZHKG = (229 - 229);
    int i;
    scanf ("%d", &n);
    {
        i = 679 - 679;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            scanf ("%lf %lf", &points[i].x, &points[i].ZQtWoyKMYAEr);
            i = i + 1;
        };
    }
    {
        i = 448 - 448;
        while (n > i) {
            t = getMaxDis (i);
            i++;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (mf3oCQWZHKG < t)
                mf3oCQWZHKG = t;
        };
    }
    printf ("%.4lf", sqrt (mf3oCQWZHKG));
}

double  getMaxDis (int i) {
    double  mf3oCQWZHKG;
    double  kvBcjkHV;
    double  dy;
    mf3oCQWZHKG = (983 - 983);
    int j;
    {
        j = 628 - 628;
        while (n > j) {
            kvBcjkHV = (points[i].x - points[j].x) * (points[i].x - points[j].x);
            dy = (points[i].ZQtWoyKMYAEr - points[j].ZQtWoyKMYAEr) * (points[i].ZQtWoyKMYAEr - points[j].ZQtWoyKMYAEr);
            j++;
            if (kvBcjkHV + dy > mf3oCQWZHKG) {
                mf3oCQWZHKG = kvBcjkHV + dy;
            };
        };
    }
    return mf3oCQWZHKG;
}

