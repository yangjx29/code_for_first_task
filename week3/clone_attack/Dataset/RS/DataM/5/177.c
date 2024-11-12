char uEYdDApmvMT5 [500], b [10000];

int main () {
    int rYXWKZ2dNe;
    double  OSRdJIbl3;
    int cmWE2FMQhpP = 0;
    int CAue2UC9kDlq = 0;
    scanf ("%lf", &OSRdJIbl3);
    scanf ("%s", uEYdDApmvMT5);
    scanf ("%s", b);
    if (!(strlen (b) == strlen (uEYdDApmvMT5)))
        ;
    else {
        {
            rYXWKZ2dNe = 0;
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
            while (uEYdDApmvMT5[rYXWKZ2dNe] != '\0') {
                if ((!('A' == uEYdDApmvMT5[rYXWKZ2dNe]) && uEYdDApmvMT5[rYXWKZ2dNe] != 'T' && !('G' == uEYdDApmvMT5[rYXWKZ2dNe]) && !('C' == uEYdDApmvMT5[rYXWKZ2dNe])) || (b[rYXWKZ2dNe] != 'A' && b[rYXWKZ2dNe] != 'T' && b[rYXWKZ2dNe] != 'G' && b[rYXWKZ2dNe] != 'C')) {
                    CAue2UC9kDlq = 1;
                    break;
                }
                else {
                    if (uEYdDApmvMT5[rYXWKZ2dNe] == b[rYXWKZ2dNe]) {
                        cmWE2FMQhpP = cmWE2FMQhpP + 1;
                    };
                }
                rYXWKZ2dNe = rYXWKZ2dNe + 1;
            };
        }
        if (CAue2UC9kDlq == 1) {
        }
        else if ((cmWE2FMQhpP * 1.0) / (strlen (uEYdDApmvMT5)) > OSRdJIbl3)
            ;
        else
            ;
    }
    return 0;
}

