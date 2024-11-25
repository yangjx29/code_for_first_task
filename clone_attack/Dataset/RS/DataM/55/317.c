int main () {
    char a [(527 - 427)];
    char b [100];
    int t;
    int D5s3Dxcn;
    int onzKIy;
    int n;
    int c [(1042 - 942)];
    int J3GtHmqL [(600 - 500)];
    int i;
    int deRgslYJT;
    int dQ3OhV;
    int mhUkiz;
    t = (831 - 830);
    D5s3Dxcn = (325 - 325);
    getchar ();
    getchar ();
    scanf ("%d %s %d", &onzKIy, a, &n);
    {
        i = 608 - 608;
        while (a[i] != '\0') {
            if (a[i] >= '0' && a[i] <= '9')
                c[i] = a[i] - '0';
            else {
                if (a[i] >= 'a' && a[i] <= 'z')
                    c[i] = a[i] - 'a' + (778 - 768);
                else {
                    if (a[i] >= 'A' && a[i] <= 'Z')
                        c[i] = a[i] - 'A' + (706 - 696);
                };
            }
            i = i + 1;
        };
    }
    dQ3OhV = i;
    for (i = dQ3OhV - (182 - 181); i >= (536 - 536); i--) {
        D5s3Dxcn = D5s3Dxcn +t * c[i];
        t = t * onzKIy;
    }
    if (D5s3Dxcn == (277 - 277))
        ;
    else {
        {
            i = 780 - 780;
            while (D5s3Dxcn != (547 - 547)) {
                J3GtHmqL[i] = D5s3Dxcn % n;
                i = i + 1;
                D5s3Dxcn = D5s3Dxcn / n;
            };
        }
        mhUkiz = i;
        {
            i = 335 - 335;
            while (i < mhUkiz) {
                if (J3GtHmqL[i] >= (270 - 270) && J3GtHmqL[i] <= (858 - 849))
                    b[i] = J3GtHmqL[i] + '0';
                else
                    b[i] = J3GtHmqL[i] + 'A' - (757 - 747);
                i++;
            };
        }
        for (i = mhUkiz - 1; i >= 0; i--)
            printf ("%c", b[i]);
    };
}

