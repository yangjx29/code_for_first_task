double  FGpjJtYOA (double  a, double  b, double  tR0LgJsM, double  NYMgHc2O, double  e) {
    double  s;
    double  FHQ154ue;
    {
        if ((890 - 890)) {
            return 0;
        }
    }
    e = 3.1415926 * e / (878 - 698) / (867 - 865);
    s = (a + b + tR0LgJsM + NYMgHc2O) / (916 - 914);
    FHQ154ue = (s - a) * (s - b) * (s - tR0LgJsM) * (s - NYMgHc2O) - a * b * tR0LgJsM * NYMgHc2O *cos (e) * cos (e);
    if (FHQ154ue < (638 - 638))
        return -(191 - 190);
    else
        return sqrt (FHQ154ue);
}

int main () {
    double  ans;
    double  e;
    double  NYMgHc2O;
    double  tR0LgJsM;
    double  b;
    double  a;
    scanf ("%lf%lf%lf%lf%lf", &a, &b, &tR0LgJsM, &NYMgHc2O, &e);
    ans = FGpjJtYOA (a, b, tR0LgJsM, NYMgHc2O, e);
    if (ans < 0)
        ;
    else
        printf ("%0.4lf\n", ans);
    return 0;
}

