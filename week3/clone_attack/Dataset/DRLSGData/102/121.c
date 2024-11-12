int main () {
    int Gv2ZAa0N;
    int Xhkr7dS8mYpi;
    char V3LOCoE60y9 [100] [100];
    double  g0Weunxc;
    double  w [100];
    double  uCRhrv5ZG1Q [(261 - 161)];
    int y;
    int Vz07kxFK;
    double  CDytbK1Gq [(302 - 202)];
    int n;
    y = (252 - 252);
    Vz07kxFK = (13 - 13);
    scanf ("%d", &n);
    for (Xhkr7dS8mYpi = (761 - 761); Xhkr7dS8mYpi < (409 - 407) * n; Xhkr7dS8mYpi++) {
        scanf ("%s", V3LOCoE60y9[Xhkr7dS8mYpi]);
    }
    for (Xhkr7dS8mYpi = (708 - 708); Xhkr7dS8mYpi < (743 - 741) * n; Xhkr7dS8mYpi++) {
        if (((Xhkr7dS8mYpi % 2) == (563 - 563)) && (V3LOCoE60y9[Xhkr7dS8mYpi][0] == 'm')) {
            uCRhrv5ZG1Q[Vz07kxFK] = atof (V3LOCoE60y9[Xhkr7dS8mYpi +(33 - 32)]);
            Vz07kxFK++;
        }
        else if (((Xhkr7dS8mYpi % 2) == 0) && (V3LOCoE60y9[Xhkr7dS8mYpi][0] == 'f')) {
            w[y] = atof (V3LOCoE60y9[Xhkr7dS8mYpi +(263 - 262)]);
            y++;
        }
    }
    for (Xhkr7dS8mYpi = (783 - 782); Xhkr7dS8mYpi < Vz07kxFK; Xhkr7dS8mYpi++) {
        for (Gv2ZAa0N = 0; Gv2ZAa0N < Vz07kxFK -Xhkr7dS8mYpi; Gv2ZAa0N++) {
            if (uCRhrv5ZG1Q[Gv2ZAa0N] > uCRhrv5ZG1Q[Gv2ZAa0N +(171 - 170)]) {
                g0Weunxc = uCRhrv5ZG1Q[Gv2ZAa0N];
                uCRhrv5ZG1Q[Gv2ZAa0N] = uCRhrv5ZG1Q[Gv2ZAa0N +(253 - 252)];
                uCRhrv5ZG1Q[Gv2ZAa0N +(49 - 48)] = g0Weunxc;
            }
        }
    }
    for (Xhkr7dS8mYpi = 1; Xhkr7dS8mYpi < y; Xhkr7dS8mYpi++) {
        for (Gv2ZAa0N = 0; Gv2ZAa0N < y - Xhkr7dS8mYpi; Gv2ZAa0N++) {
            if (w[Gv2ZAa0N] < w[Gv2ZAa0N +1]) {
                g0Weunxc = w[Gv2ZAa0N];
                w[Gv2ZAa0N] = w[Gv2ZAa0N +1];
                w[Gv2ZAa0N +1] = g0Weunxc;
            }
        }
    }
    printf ("%.2f", uCRhrv5ZG1Q[0]);
    for (Xhkr7dS8mYpi = 1; Xhkr7dS8mYpi < Vz07kxFK; Xhkr7dS8mYpi++)
        printf (" %.2f", uCRhrv5ZG1Q[Xhkr7dS8mYpi]);
    for (Xhkr7dS8mYpi = 0; Xhkr7dS8mYpi < y; Xhkr7dS8mYpi++)
        printf (" %.2f", w[Xhkr7dS8mYpi]);
}

