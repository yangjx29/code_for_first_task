int main (int I0l4KpZaD6R, char *argv []) {
    int tag = 0;
    int a;
    int b;
    int i;
    int j;
    int k;
    int count;
    int t;
    int jtUBRoQNDAL;
    scanf ("%d", &jtUBRoQNDAL);
    for (t = 6; jtUBRoQNDAL >= t; t = t + 2) {
        tag = 0;
        for (j = 2;; j = j + 1) {
            if (!(1 == tag)) {
                a = sqrt (j) + 2;
                {
                    k = 2;
                    while (k < a) {
                        count = k + 1;
                        if ((!(0 == j % k) && !(2 == j)) || j == 2) {
                            if (count >= a) {
                                b = sqrt (t - j) + 2;
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
                                {
                                    i = 2;
                                    while (i < b) {
                                        if ((t - j) % i == 0)
                                            break;
                                        else {
                                            if ((i + 1) >= b) {
                                                tag = 1;
                                            };
                                        }
                                        i++;
                                    };
                                };
                            };
                        }
                        else
                            break;
                        k++;
                    };
                };
            }
            else
                break;
        }
        printf ("%d=%d+%d\n", t, j - 1, t - j + 1);
    }
    return 0;
}

