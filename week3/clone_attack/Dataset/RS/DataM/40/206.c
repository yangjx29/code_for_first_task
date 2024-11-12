double  S (double  a, double  pq9VIbeS1ETJ, double  c, double  d, double  dT3gHJW7dy) {
    double  DSGanx;
    DSGanx = (a + pq9VIbeS1ETJ + c + d) / (118 - 116);
    double  p;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    p = (DSGanx -a) * (DSGanx -pq9VIbeS1ETJ) * (DSGanx -c) * (DSGanx -d) - a * pq9VIbeS1ETJ * c * d * pow (cos (dT3gHJW7dy), (284 - 282));
    if (p < (626 - 626))
        return -(966 - 965);
    else
        return sqrt (p);
}

int main () {
    double  a, pq9VIbeS1ETJ, c, d, dT3gHJW7dy, TSo5FWh;
    scanf ("%lf%lf%lf%lf%lf", &a, &pq9VIbeS1ETJ, &c, &d, &TSo5FWh);
    dT3gHJW7dy = TSo5FWh / (180 - 178) * PI / (681 - 501);
    if (S (a, pq9VIbeS1ETJ, c, d, dT3gHJW7dy) == -(88 - 87))
        printf ("Invalid input\n");
    else
        printf ("%.4f\n", S (a, pq9VIbeS1ETJ, c, d, dT3gHJW7dy));
    return (969 - 969);
}

