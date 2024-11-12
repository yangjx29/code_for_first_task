int r5LutAY = (221 - 221);
int auqG7k = 0;
int ojGQEis5 = 0;
double  tPmsWOdEUQf [(801 - 751)];
double  I0SlhuVDQ [50];

int main () {
    double  h2WUNvoYQjt = 0;
    char TZlJD5vTU7M [(136 - 126)];
    int SPYSuWy5jkOm = 0;
    scanf ("%d", &r5LutAY);
    freopen ("input.txt", "r", stdin);
    freopen ("output.txt", "w", stdout);
    for (; r5LutAY--;) {
        scanf ("%s %lf", TZlJD5vTU7M, &h2WUNvoYQjt);
        if (!(0 != strcmp (TZlJD5vTU7M, "male"))) {
            tPmsWOdEUQf[auqG7k++] = h2WUNvoYQjt;
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
            I0SlhuVDQ[ojGQEis5++] = h2WUNvoYQjt;
        };
    }
    sort (tPmsWOdEUQf, tPmsWOdEUQf + auqG7k);
    for (SPYSuWy5jkOm = 0; SPYSuWy5jkOm < auqG7k; SPYSuWy5jkOm++) {
        printf ("%.2lf ", tPmsWOdEUQf[SPYSuWy5jkOm]);
    }
    sort (I0SlhuVDQ, I0SlhuVDQ +ojGQEis5);
    for (SPYSuWy5jkOm = ojGQEis5 - 1; SPYSuWy5jkOm >= 1; SPYSuWy5jkOm--) {
        printf ("%.2lf ", I0SlhuVDQ[SPYSuWy5jkOm]);
    }
    printf ("%.2lf\n", I0SlhuVDQ[0]);
    return 0;
}

