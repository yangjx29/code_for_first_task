int main () {
    int ApcZaBMK;
    int HKL6vg1EjDar;
    int n;
    int a [1000];
    int m;
    scanf ("%d", &n);
    a[1] = 1;
    a[2] = 1;
    {
        ApcZaBMK = 3;
        while (ApcZaBMK < 30) {
            a[ApcZaBMK] = a[ApcZaBMK -1] + a[ApcZaBMK -2];
            ApcZaBMK++;
        };
    }
    {
        ApcZaBMK = 0;
        while (ApcZaBMK < n) {
            ApcZaBMK++;
            scanf ("%d\n", &m);
            printf ("%d\n", a[m]);
        };
    };
}

