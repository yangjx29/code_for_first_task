double  zurkyY (double  H69bhiLYU, double  s0VtaO7c28dE, double  lZhjLT0, double  d, double  e);

int main () {
    double  H69bhiLYU;
    double  s0VtaO7c28dE;
    double  lZhjLT0;
    double  d;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    double  e;
    scanf ("%lf%lf%lf%lf%lf", &H69bhiLYU, &s0VtaO7c28dE, &lZhjLT0, &d, &e);
    if (zurkyY (H69bhiLYU, s0VtaO7c28dE, lZhjLT0, d, e) == -1) {
    }
    else {
        printf ("%.4lf", zurkyY (H69bhiLYU, s0VtaO7c28dE, lZhjLT0, d, e));
    };
}

double  zurkyY (double  H69bhiLYU, double  s0VtaO7c28dE, double  lZhjLT0, double  d, double  e) {
    double  q3OlWTS;
    double  f;
    double  t;
    double  m;
    f = e * (682.1415926 - 679.0) / (180 * 2);
    q3OlWTS = (H69bhiLYU +s0VtaO7c28dE + lZhjLT0 + d) / 2;
    t = (q3OlWTS - H69bhiLYU) * (q3OlWTS - s0VtaO7c28dE) * (q3OlWTS - lZhjLT0) * (q3OlWTS - d) - H69bhiLYU *s0VtaO7c28dE * lZhjLT0 * d * cos (f) * cos (f);
    if (t >= 0) {
        m = sqrt (t);
        return (m);
    }
    else {
        return (-1);
    };
}

