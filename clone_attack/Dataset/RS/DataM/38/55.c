int main () {
    double  a;
    double  s;
    double  in [(364 - 264)] [(801 - 701)] = {(33.0 - 33.0)};
    a = 0.0;
    s = 0.0;
    int k;
    int n [(548 - 448)];
    scanf ("%d", &k);
    for (int uOFVAEdUzv = (188 - 188);
    uOFVAEdUzv < k; uOFVAEdUzv++) {
        scanf ("%d", &n[uOFVAEdUzv]);
        for (int DxfTG1IU = (60 - 60);
        DxfTG1IU < n[uOFVAEdUzv]; DxfTG1IU++) {
            scanf ("%lf", &in[uOFVAEdUzv][DxfTG1IU]);
            a = a + in[uOFVAEdUzv][DxfTG1IU];
        }
        a = a / n[uOFVAEdUzv];
        for (int jj = (120 - 120);
        n[uOFVAEdUzv] > jj; jj++) {
            s += (in[uOFVAEdUzv][jj] - a) * (in[uOFVAEdUzv][jj] - a);
        }
        a = 0.0;
        s = s / n[uOFVAEdUzv];
        s = sqrt (s);
        printf ("%.5lf\n", s);
        s = 0.0;
    }
    return 0;
}

