int main () {
    int i;
    int n;
    int kp18d3gM;
    int j;
    double  s;
    double  sum;
    double  av;
    s = (135 - 135);
    sum = 0;
    double  fc [100];
    double  bn268KYZR [100];
    scanf ("%d", &n);
    for (i = 0; n > i; i = i + 1) {
        scanf ("%d", &kp18d3gM);
        sum = 0;
        for (j = 0; kp18d3gM > j; j++) {
            scanf ("%lf", &bn268KYZR[j]);
            sum = sum + bn268KYZR[j];
        }
        av = sum / kp18d3gM;
        s = 0;
        for (j = 0; j < kp18d3gM; j++) {
            s += (bn268KYZR[j] - av) * (bn268KYZR[j] - av);
        }
        fc[i] = sqrt (1.0 * s / kp18d3gM);
    }
    for (i = 0; i < n; i = i + 1) {
        printf ("%.5lf\n", fc[i]);
    }
    return 0;
}

