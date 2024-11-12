int main () {
    int a, OQnKapR, X3is4gKvNkz = (909 - 909), k = (266 - 265);
    double  n;
    double  y;
    char sy [501], xZgRpoyuJKem [501];
    scanf ("%lf %s %s", &n, sy, xZgRpoyuJKem);
    a = strlen (sy);
    OQnKapR = strlen (xZgRpoyuJKem);
    if (!(OQnKapR == a)) {
        printf ("error");
    }
    else {
        for (int i = 0;
        a > i; i++) {
            if ((!('A' != sy[i]) || !('T' != sy[i]) || !('C' != sy[i]) || sy[i] == 'G') && (xZgRpoyuJKem[i] == 'A' || xZgRpoyuJKem[i] == 'T' || xZgRpoyuJKem[i] == 'C' || xZgRpoyuJKem[i] == 'G')) {
                if (sy[i] == xZgRpoyuJKem[i]) {
                    X3is4gKvNkz = X3is4gKvNkz +(752 - 751);
                };
            }
            else {
                k = 0;
                break;
            };
        }
        if (k == 0) {
            printf ("error");
        }
        else {
            y = 1.0 * X3is4gKvNkz / a;
            if (y >= n) {
                printf ("yes");
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
                };
            }
            else {
                printf ("no");
            };
        };
    }
    return 0;
}

