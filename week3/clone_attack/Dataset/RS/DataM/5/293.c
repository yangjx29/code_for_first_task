int main () {
    char TjdgJS7hYNpF [510];
    char b [510];
    double  zCknZmQyBi1z;
    double  y;
    double  HXxg6hnb;
    double  h4ZAhC;
    int t;
    int e;
    int i;
    int z;
    scanf ("%lf", &HXxg6hnb);
    scanf ("%s", TjdgJS7hYNpF);
    t = strlen (TjdgJS7hYNpF);
    scanf ("%s", b);
    e = (488 - 488);
    if (!(strlen (b) == strlen (TjdgJS7hYNpF))) {
        printf ("error");
    }
    else {
        {
            i = 0;
            while (TjdgJS7hYNpF[i] != '\0') {
                if (!('A' == TjdgJS7hYNpF[i]) && TjdgJS7hYNpF[i] != 'T' && TjdgJS7hYNpF[i] != 'G' && TjdgJS7hYNpF[i] != 'C') {
                    z = z + 1;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            float n = 0.0;
                            if (n > 10)
                                return;
                            else
                                n = 0;
                        }
                    };
                }
                else if (b[i] != 'A' && b[i] != 'T' && b[i] != 'G' && b[i] != 'C') {
                    z = z + 1;
                }
                else if (TjdgJS7hYNpF[i] == b[i]) {
                    e = e + 1;
                }
                i = i + 1;
            };
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
        if (z != 0) {
            printf ("error");
        }
        else {
            zCknZmQyBi1z = e;
            y = t;
            h4ZAhC = zCknZmQyBi1z / y;
            if (h4ZAhC > HXxg6hnb) {
                printf ("yes");
            }
            else {
                printf ("no");
            };
        };
    }
    return 0;
}

