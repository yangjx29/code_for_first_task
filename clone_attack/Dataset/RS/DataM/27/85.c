int main () {
    double  SxruqKTO0 [100], b [100], J2AjEeorp [100], UjtKbAfl, y0tNmVB, S8MCb4, aL2pRdnqPj;
    int n, LFucYQ2V;
    scanf ("%d", &n);
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
    for (LFucYQ2V = 0; LFucYQ2V <= n - 1; LFucYQ2V = LFucYQ2V +1) {
        scanf ("%lf%lf%lf", &SxruqKTO0[LFucYQ2V], &b[LFucYQ2V], &J2AjEeorp[LFucYQ2V]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (LFucYQ2V = 0; LFucYQ2V <= n - 1; LFucYQ2V = LFucYQ2V +1) {
        if (b[LFucYQ2V] * b[LFucYQ2V] - 4 * SxruqKTO0[LFucYQ2V] * J2AjEeorp[LFucYQ2V] > 0) {
            UjtKbAfl = (-b[LFucYQ2V] + sqrt (b[LFucYQ2V] * b[LFucYQ2V] - 4 * SxruqKTO0[LFucYQ2V] * J2AjEeorp[LFucYQ2V])) / (2 * SxruqKTO0[LFucYQ2V]);
            y0tNmVB = (-b[LFucYQ2V] - sqrt (b[LFucYQ2V] * b[LFucYQ2V] - 4 * SxruqKTO0[LFucYQ2V] * J2AjEeorp[LFucYQ2V])) / (2 * SxruqKTO0[LFucYQ2V]);
            printf ("x1=%.5lf;x2=%.5lf\n", UjtKbAfl, y0tNmVB);
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        if (b[LFucYQ2V] * b[LFucYQ2V] - 4 * SxruqKTO0[LFucYQ2V] * J2AjEeorp[LFucYQ2V] == 0) {
            UjtKbAfl = (-b[LFucYQ2V]) / (2 * SxruqKTO0[LFucYQ2V]);
            printf ("x1=x2=%.5lf\n", UjtKbAfl);
        }
        if (b[LFucYQ2V] * b[LFucYQ2V] - 4 * SxruqKTO0[LFucYQ2V] * J2AjEeorp[LFucYQ2V] < 0) {
            S8MCb4 = (-b[LFucYQ2V]) / (2 * SxruqKTO0[LFucYQ2V]);
            aL2pRdnqPj = sqrt (4 * SxruqKTO0[LFucYQ2V] * J2AjEeorp[LFucYQ2V] - b[LFucYQ2V] * b[LFucYQ2V]) / (2 * SxruqKTO0[LFucYQ2V]);
            if (S8MCb4 == 0) {
                printf ("x1=0.00000+%.5lfi;x2=0.00000-%.5lfi\n", aL2pRdnqPj, aL2pRdnqPj);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
            else {
                printf ("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n", S8MCb4, aL2pRdnqPj, S8MCb4, aL2pRdnqPj);
            };
        };
    }
    return 0;
}

