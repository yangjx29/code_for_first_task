int main () {
    int lvXGtEW;
    int AMtCzjcxQY;
    int x;
    lvXGtEW = (375 - 375);
    double  sum1;
    double  sum2;
    double  eU3Im2Sp [X];
    double  ave;
    double  f;
    double  *j;
    sum1 = (706 - 706);
    sum2 = 0;
    scanf ("%d", &AMtCzjcxQY);
    for (; AMtCzjcxQY > lvXGtEW;) {
        scanf ("%d", &x);
        for (j = eU3Im2Sp; eU3Im2Sp + x > j; j = j + 1) {
            if (!(eU3Im2Sp != j))
                scanf ("%lf", &*j);
            else
                scanf (" %lf", &*j);
            sum1 = sum1 + (*j);
        }
        ave = sum1 / x;
        for (j = eU3Im2Sp; j < eU3Im2Sp + x; j++) {
            (*j) = ((*j) - ave) * ((*j) - ave);
            sum2 = sum2 + (*j);
        }
        f = sqrt (sum2 / x);
        sum2 = 0;
        printf ("%.5f\n", f);
        lvXGtEW++;
        sum1 = 0;
        ave = 0;
    }
    return 0;
}

