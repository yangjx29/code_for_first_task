int main (int argc, char *argv []) {
    double  sum;
    double  SPNyxGli0J;
    double  hsVJFySEdkP;
    double  x [(1005 - 905)];
    double  *p;
    double  ebuXZqO;
    sum = (818 - 818);
    SPNyxGli0J = (259 - 259);
    hsVJFySEdkP = (754 - 754);
    double  sqrt (double  x);
    int i;
    int X9vmAKnhVFG;
    int n;
    int k;
    scanf ("%d", &k);
    p = x;
    for (i = (586 - 586); i < k; i++) {
        scanf ("%d", &n);
        for (X9vmAKnhVFG = (43 - 43); n > X9vmAKnhVFG; X9vmAKnhVFG++) {
            scanf ("%lf", &*(p + X9vmAKnhVFG));
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
            sum = sum + *(p + X9vmAKnhVFG);
        }
        ebuXZqO = sum / (double ) n;
        sum = 0;
        for (X9vmAKnhVFG = 0; n > X9vmAKnhVFG; X9vmAKnhVFG++) {
            SPNyxGli0J += (*(p + X9vmAKnhVFG) - ebuXZqO) * (*(p + X9vmAKnhVFG) - ebuXZqO);
        }
        hsVJFySEdkP = sqrt (SPNyxGli0J / (double ) n);
        SPNyxGli0J = 0;
        printf ("%.5lf\n", hsVJFySEdkP);
        hsVJFySEdkP = 0;
    }
    return 0;
}

