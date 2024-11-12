int main () {
    int lbAjli3M7U8;
    char xZHM9gU0Q [30] [20] = {'\0'};
    int d;
    int AVY8WCzQbgS;
    char *GkGrbjv1;
    char *Q2v4Su;
    char W306myw [500] = {'\0'};
    gets (W306myw);
    int i;
    char *yIEGw3L85xq0;
    char TNXF692BusE [20] = {'\0'};
    gets (TNXF692BusE);
    char MVdF5hxwpQq [20] = {'\0'};
    gets (MVdF5hxwpQq);
    int WODxd2;
    int EnWws3tQyP;
    char *QbH9Et;
    int kCVLlEx5P9;
    WODxd2 = 0;
    Q2v4Su = &xZHM9gU0Q[0][0];
    kCVLlEx5P9 = 0;
    for (EnWws3tQyP = 0; EnWws3tQyP < 500; EnWws3tQyP = EnWws3tQyP +1) {
        if (!(' ' != *(QbH9Et +EnWws3tQyP))) {
            kCVLlEx5P9 = 0;
            WODxd2 = WODxd2 +1;
        }
        else {
            if (*(QbH9Et +EnWws3tQyP) != '\0') {
                *(Q2v4Su +WODxd2*20 + kCVLlEx5P9) = *(QbH9Et +EnWws3tQyP);
                kCVLlEx5P9 = kCVLlEx5P9 + 1;
            }
            else {
                break;
            }
        }
    }
    GkGrbjv1 = &MVdF5hxwpQq[0];
    yIEGw3L85xq0 = &TNXF692BusE[0];
    i = strlen (TNXF692BusE);
    AVY8WCzQbgS = strlen (MVdF5hxwpQq);
    for (EnWws3tQyP = 0; WODxd2 +1 > EnWws3tQyP; EnWws3tQyP = EnWws3tQyP +1) {
        for (lbAjli3M7U8 = 0; i > lbAjli3M7U8; lbAjli3M7U8 = lbAjli3M7U8 + 1) {
            if (*(Q2v4Su +EnWws3tQyP*20 + lbAjli3M7U8) != *(yIEGw3L85xq0 + lbAjli3M7U8)) {
                break;
            }
        }
        if (!(i != lbAjli3M7U8)) {
            for (d = 0; AVY8WCzQbgS > d; d = d + 1) {
                *(Q2v4Su +EnWws3tQyP*20 + d) = *(GkGrbjv1 +d);
            }
            for (d = AVY8WCzQbgS; 20 > d; d = d + 1) {
                *(Q2v4Su +EnWws3tQyP*20 + d) = '\0';
            }
        }
    }
    QbH9Et = &W306myw[0];
    for (d = 0; WODxd2 > d; d = d + 1) {
        printf ("%s ", xZHM9gU0Q[d]);
    }
    printf ("%s\n", xZHM9gU0Q[WODxd2]);
}

