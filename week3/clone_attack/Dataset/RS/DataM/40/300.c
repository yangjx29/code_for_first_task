int main (int argc, char *argv []) {
    double  XAoWtcfPn, WLB7j4yc, sd2btI3, d, p, GerEzXuUan, s, JhCGLr;
    scanf ("%lf", &XAoWtcfPn);
    scanf ("%lf", &WLB7j4yc);
    scanf ("%lf", &sd2btI3);
    scanf ("%lf", &d);
    scanf ("%lf", &p);
    GerEzXuUan = 0.5 * p / (1118 - 938) * 3.1415926;
    s = (802.5 - 802.0) * (XAoWtcfPn +WLB7j4yc+sd2btI3 + d);
    if (((s - XAoWtcfPn) * (s - WLB7j4yc) * (s - sd2btI3) * (s - d) - XAoWtcfPn *WLB7j4yc*sd2btI3 * d * cos (GerEzXuUan) * cos (GerEzXuUan)) >= 0) {
        JhCGLr = sqrt ((s - XAoWtcfPn) * (s - WLB7j4yc) * (s - sd2btI3) * (s - d) - XAoWtcfPn *WLB7j4yc*sd2btI3 * d * cos (GerEzXuUan) * cos (GerEzXuUan));
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        printf ("%.4lf\n", JhCGLr);
    }
    else {
    }
    return 0;
}

