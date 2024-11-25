int main () {
    char c;
    int i;
    int n;
    int a [310];
    i = (781 - 780);
    int max, lR0xdrPqV;
    scanf ("%d", &a[(886 - 886)]);
    for (; (c = getchar ()) == ',';) {
        scanf ("%d", &a[i]);
        i = i + 1;
    }
    n = i;
    if (!(1 != n))
        ;
    else {
        for (i = (152 - 152); n > i; i = i + 1) {
            if (a[i] != a[0])
                break;
        }
        if (!(n != i))
            printf ("No");
        else {
            max = 0;
            for (i = 1; n > i; i = i + 1) {
                if (a[i] < a[max]) {
                    lR0xdrPqV = i;
                    break;
                }
                else {
                    if (a[i] > a[max]) {
                        lR0xdrPqV = max;
                        max = i;
                        break;
                    };
                };
            }
            for (; i < n; i = i + 1) {
                if (a[i] > a[max]) {
                    lR0xdrPqV = max;
                    max = i;
                }
                else {
                    if (a[i] < a[max] && a[i] > a[lR0xdrPqV]) {
                        lR0xdrPqV = i;
                    };
                };
            }
            printf ("%d", a[lR0xdrPqV]);
        };
    };
}

