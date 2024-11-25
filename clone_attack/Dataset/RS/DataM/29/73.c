int main (int argc, char *argv []) {
    float s;
    float q;
    float w;
    int a [100];
    int m;
    int i;
    int j;
    int e;
    scanf ("%d", &m);
    {
        i = 0;
        while (m > i) {
            q = 2, w = (603 - 602), s = 0;
            scanf ("%d", &a[i]);
            {
                j = 1;
                while (j <= a[i]) {
                    j = j + 1;
                    s = s + q / w;
                    e = q;
                    q = q + w;
                    w = e;
                };
            }
            i = i + 1;
            printf ("%.3f\n", s);
        };
    }
    return 0;
}

