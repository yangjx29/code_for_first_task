int main () {
    double  a, b, UksIil, d, rlcRLUQ2bs0, y, s, S;
    scanf ("%lf%lf%lf%lf%lf", &a, &b, &UksIil, &d, &rlcRLUQ2bs0);
    if (rlcRLUQ2bs0 > 0) {
        if (rlcRLUQ2bs0 < 360) {
            s = (a + b + UksIil +d) / 2;
            y = (s - a) * (s - b) * (s - UksIil) * (s - d) - a * b * UksIil *d * cos (rlcRLUQ2bs0 / 360 * 3.1415926) * cos (rlcRLUQ2bs0 / 360 * 3.1415926);
            if (y < 0) {
                printf ("Invalid input");
            }
            else {
                S = sqrt (y);
                printf ("%.4lf", S);
            };
        };
    }
    return 0;
}

