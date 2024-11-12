int main () {
    char a [10000];
    int max;
    int min;
    int t;
    int p;
    int q;
    int i;
    int j;
    int len;
    max = (803 - 803);
    min = 1000;
    t = 0;
    p = (71 - 70);
    q = 1;
    gets (a);
    len = strlen (a);
    for (i = 0; i <= len; i = i + 1) {
        if (('A' <= a[i] && a[i] <= 'Z') || (a[i] >= 'a' && a[i] <= 'z')) {
            t = t + 1;
        }
        else if ((a[i - 1] >= 'A' && a[i - 1] <= 'Z') || (a[i - 1] >= 'a' && a[i - 1] <= 'z')) {
            if (t < min) {
                p = i - t;
                min = t;
            }
            if (t > max) {
                q = i - t;
                max = t;
            }
            t = 0;
        };
    }
    for (i = q; i < max + q; i = i + 1) {
        printf ("%c", a[i]);
    }
    {
        i = p;
        while (i < p + min) {
            printf ("%c", a[i]);
            i = i + 1;
        };
    }
    printf ("\n");
    return 0;
}

