int main () {
    double  ave = 0.0, max = 0.0, x;
    int kmhdy9DI;
    int n;
    int i;
    int KTt8ANZP [300];
    kmhdy9DI = (931 - 931);
    scanf ("%d", &n);
    {
        i = 0;
        while (n > i) {
            scanf ("%d", &KTt8ANZP[i]);
            ave += KTt8ANZP[i];
            i = i + 1;
        };
    }
    ave /= n;
    {
        i = 0;
        while (n > i) {
            x = KTt8ANZP[i] - ave;
            i = i + 1;
            if (fabs (x) > fabs (max)) {
                kmhdy9DI = 0;
                max = x;
            }
            else {
                if (fabs (x) == fabs (max))
                    kmhdy9DI++;
            };
        };
    }
    if (kmhdy9DI == 0)
        printf ("%d", (int) (max + ave));
    else
        printf ("%d,%d", (int) (ave - fabs (max)), (int) (ave + fabs (max)));
}

