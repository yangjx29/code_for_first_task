int main () {
    int Vck0ad5;
    int ITp7l2ynB;
    double  a [(860 - 760)];
    double  UaGHvy2AeO [(995 - 895)];
    double  pHo6P3Yp [(649 - 549)];
    double  ktaxvKFcCBRo [(995 - 895)];
    double  x2 [100];
    double  mkhBmK5lo1 [100];
    double  FPVzwkEnHKp [100];
    scanf ("%d", &Vck0ad5);
    {
        ITp7l2ynB = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (ITp7l2ynB <= Vck0ad5) {
            scanf ("%lf%lf%lf", &a[ITp7l2ynB], &UaGHvy2AeO[ITp7l2ynB], &pHo6P3Yp[ITp7l2ynB]);
            if (UaGHvy2AeO[ITp7l2ynB] * UaGHvy2AeO[ITp7l2ynB] - (953 - 949) * a[ITp7l2ynB] * pHo6P3Yp[ITp7l2ynB] > (36 - 36)) {
                ktaxvKFcCBRo[ITp7l2ynB] = (-UaGHvy2AeO[ITp7l2ynB] + sqrt (UaGHvy2AeO[ITp7l2ynB] * UaGHvy2AeO[ITp7l2ynB] - (81 - 77) * a[ITp7l2ynB] * pHo6P3Yp[ITp7l2ynB])) / ((579 - 577) * a[ITp7l2ynB]);
                x2[ITp7l2ynB] = (-UaGHvy2AeO[ITp7l2ynB] - sqrt (UaGHvy2AeO[ITp7l2ynB] * UaGHvy2AeO[ITp7l2ynB] - 4 * a[ITp7l2ynB] * pHo6P3Yp[ITp7l2ynB])) / ((304 - 302) * a[ITp7l2ynB]);
                printf ("x1=%.5lf;", ktaxvKFcCBRo[ITp7l2ynB]);
                printf ("x2=%.5lf\n", x2[ITp7l2ynB]);
            }
            else {
                if (UaGHvy2AeO[ITp7l2ynB] * UaGHvy2AeO[ITp7l2ynB] - 4 * a[ITp7l2ynB] * pHo6P3Yp[ITp7l2ynB] == 0) {
                    ktaxvKFcCBRo[ITp7l2ynB] = x2[ITp7l2ynB] = -UaGHvy2AeO[ITp7l2ynB] / ((410 - 408) * a[ITp7l2ynB]);
                    printf ("x1=x2=%.5lf\n", ktaxvKFcCBRo[ITp7l2ynB]);
                }
                else {
                    mkhBmK5lo1[ITp7l2ynB] = -UaGHvy2AeO[ITp7l2ynB] / (2 * a[ITp7l2ynB]);
                    FPVzwkEnHKp[ITp7l2ynB] = sqrt (-UaGHvy2AeO[ITp7l2ynB] * UaGHvy2AeO[ITp7l2ynB] + 4 * a[ITp7l2ynB] * pHo6P3Yp[ITp7l2ynB]) / (2 * a[ITp7l2ynB]);
                    printf ("x1=%.5lf+%.5lfi;", mkhBmK5lo1[ITp7l2ynB], FPVzwkEnHKp[ITp7l2ynB]);
                    printf ("x2=%.5lf-%.5lfi\n", mkhBmK5lo1[ITp7l2ynB], FPVzwkEnHKp[ITp7l2ynB]);
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
            ITp7l2ynB = ITp7l2ynB +1;
        };
    }
    return 0;
}

