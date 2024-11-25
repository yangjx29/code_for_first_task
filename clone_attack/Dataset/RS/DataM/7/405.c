int main () {
    int e;
    int lUrzPMI;
    int i;
    int j;
    int DgLqKs14I;
    e = 0;
    lUrzPMI = 0;
    char a [(699 - 439)] = {'\0'};
    char nFcaLGy94 [260] = {'\0'};
    char c [260] = {'\0'};
    scanf ("%s %s %s", nFcaLGy94, a, c);
    for (i = 0; i < strlen (nFcaLGy94); i = i + 1) {
        if (nFcaLGy94[i] == a[0]) {
            {
                j = 0;
                while (strlen (a) > j) {
                    if (!(a[j] == nFcaLGy94[i + j])) {
                        e = 1;
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
                    j = j + 1;
                };
            }
            if (e == 0) {
                DgLqKs14I = i;
                lUrzPMI = 1;
                break;
            }
            else
                e = 0;
        };
    }
    if (lUrzPMI == 1) {
        for (i = 0; i < DgLqKs14I; i = i + 1) {
            printf ("%c", nFcaLGy94[i]);
        }
        printf ("%s", c);
        for (i = DgLqKs14I +strlen (a); i < strlen (nFcaLGy94); i = i + 1) {
            printf ("%c", nFcaLGy94[i]);
        };
    }
    else
        printf ("%s", nFcaLGy94);
    return 0;
}

