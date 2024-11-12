int main () {
    int y;
    char v [10000];
    gets (v);
    int a [400];
    int p = 0;
    scanf ("%d", &y);
    {
        int i = 0;
        while (i <= strlen (v) - (602 - 601)) {
            if ((v[i] == ' ') && (v[i + 1] == ' ')) {
                {
                    int j = i;
                    while (j <= strlen (v) - 1) {
                        v[j] = v[j + 1];
                        j++;
                    };
                }
                i = i - 1;
            }
            i = i + 1;
        };
    }
    {
        int i = 0;
        while (i <= strlen (v) - 1) {
            if (v[i] == ' ') {
                a[p] = i;
                p = p + 1;
            }
            i = i + 1;
        };
    }
    if (p == 0) {
        printf ("%d", strlen (v));
    }
    else {
        printf ("%d,", a[0]);
        {
            int i = 0;
            while (i <= p - 2) {
                printf ("%d,", a[i + 1] - a[i] - 1);
                i = i + 1;
            };
        }
        printf ("%d", strlen (v) - 1 - a[p - 1]);
    }
    return 0;
}

