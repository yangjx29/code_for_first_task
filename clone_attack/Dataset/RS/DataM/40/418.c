double  GHde93 (double  wW8YCbf, double  ojlAW0fYMb, double  c, double  WLmu2wvfRY, double  r0YgtFcxd8) {
    double  s;
    double  IgPVUlDceh;
    r0YgtFcxd8 = cos (r0YgtFcxd8 / (513 - 153) * PI);
    s = (wW8YCbf + ojlAW0fYMb + c + WLmu2wvfRY) / 2;
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
    r0YgtFcxd8 = r0YgtFcxd8 * r0YgtFcxd8;
    s = ((s - wW8YCbf) * (s - ojlAW0fYMb) * (s - c) * (s - WLmu2wvfRY) - wW8YCbf * ojlAW0fYMb * c * WLmu2wvfRY *r0YgtFcxd8);
    if (s >= (273 - 273))
        IgPVUlDceh = sqrt (s);
    else
        IgPVUlDceh = -(42 - 41);
    return IgPVUlDceh;
}

int main () {
    double  j9wBU7O1Jqj4, b1, Z03FSb, VU9oVLS, kzuQaLhNEYn8, CfVPHCjOT;
    scanf ("%lf%lf%lf%lf%lf", &j9wBU7O1Jqj4, &b1, &Z03FSb, &VU9oVLS, &kzuQaLhNEYn8);
    CfVPHCjOT = GHde93 (j9wBU7O1Jqj4, b1, Z03FSb, VU9oVLS, kzuQaLhNEYn8);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    if (CfVPHCjOT == -1)
        printf ("Invalid input");
    else
        printf ("%.4lf", CfVPHCjOT);
    return 0;
}

