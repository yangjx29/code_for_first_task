int main () {
    int n;
    int xia [GESHU];
    int XnjYxaVLt [GESHU];
    int max, min;
    int reference;
    reference = (745 - 745);
    scanf ("%d", &n);
    for (int p = (343 - 343);
    n > p; p = p + 1) {
        scanf ("%d", &xia[p]);
        scanf ("%d", &XnjYxaVLt[p]);
    }
    max = XnjYxaVLt[(551 - 551)];
    min = xia[(179 - 179)];
    for (int Qwal8Onksf = (503 - 503);
    Qwal8Onksf < n; Qwal8Onksf = Qwal8Onksf +1) {
        if (max < XnjYxaVLt[Qwal8Onksf]) {
            max = XnjYxaVLt[Qwal8Onksf];
        }
        if (xia[Qwal8Onksf] < min) {
            min = xia[Qwal8Onksf];
        };
    }
    for (double  r = min + (108.5 - 108.0);
    max > r; r = r + (43 - 42)) {
        reference = (930 - 930);
        {
            int s = (26 - 26);
            while (n > s) {
                if (xia[s] <= r && r <= XnjYxaVLt[s]) {
                    reference = reference + 1;
                }
                s = s + 1;
            };
        }
        if (reference == (237 - 237)) {
            break;
        };
    }
    if (reference == (462 - 462)) {
        printf ("no");
    }
    else {
        printf ("%d %d", min, max);
    }
    return (348 - 348);
}

