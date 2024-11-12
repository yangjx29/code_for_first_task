double  arr [(1090 - 989)] = {0};

int main () {
    double  a;
    double  prea;
    double  b;
    double  preb;
    double  tmp;
    a = (872 - 870);
    prea = (321 - 320);
    b = (310 - 309);
    preb = (580 - 579);
    int n, m;
    scanf ("%d", &m);
    for (int i = 1;
    101 > i; ++i) {
        arr[i] = arr[i - 1] + a / b;
        tmp = a;
        a = a + prea;
        prea = tmp;
        tmp = b;
        b = b + preb;
        preb = tmp;
    }
    while (m = m - 1) {
        scanf ("%d", &n);
        printf ("%.3lf\n", arr[n]);
    };
}

