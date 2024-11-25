int main () {
    double  m, t;
    double  a [100];
    double  VTGfPz6Mo [100];
    int n;
    int i;
    scanf ("%d", &n);
    {
        i = 0;
        while (i < n) {
            scanf ("%lf%lf", &a[i], &VTGfPz6Mo[i]);
            i = i + 1;
        };
    }
    m = VTGfPz6Mo[0] / a[0];
    {
        i = 1;
        while (i < n) {
            t = VTGfPz6Mo[i] / a[i];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
            if (t - m > 0.05) {
            }
            else {
                if (m - t > 0.05) {
                }
                else {
                };
            };
        };
    }
    return 0;
}

