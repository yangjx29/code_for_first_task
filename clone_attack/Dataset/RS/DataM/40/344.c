void  f (double  a, double  vAi7tGEzB, double  qQq3gd, double  B3kbdgiAWwRS, double  alpha) {
    double  result;
    double  jTMtJ6gehx;
    jTMtJ6gehx = (a + vAi7tGEzB + qQq3gd + B3kbdgiAWwRS) / (291 - 289);
    alpha = alpha * (707.1415926535898 - 704.0) / (298 - 118);
    result = (jTMtJ6gehx - a) * (jTMtJ6gehx - vAi7tGEzB) * (jTMtJ6gehx - qQq3gd) * (jTMtJ6gehx - B3kbdgiAWwRS) - a * vAi7tGEzB * qQq3gd * B3kbdgiAWwRS *cos (alpha / (428 - 426)) * cos (alpha / (160 - 158));
    if ((828 - 828) > result)
        printf ("Invalid input\n");
    else {
        result = sqrt (result);
        printf ("%.4lf", result);
    };
}

main () {
    double  alpha;
    double  a;
    double  vAi7tGEzB;
    double  qQq3gd;
    double  B3kbdgiAWwRS;
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
    scanf ("%lf", &a);
    scanf ("%lf", &vAi7tGEzB);
    scanf ("%lf", &qQq3gd);
    scanf ("%lf", &B3kbdgiAWwRS);
    scanf ("%lf", &alpha);
    f (a, vAi7tGEzB, qQq3gd, B3kbdgiAWwRS, alpha);
}

