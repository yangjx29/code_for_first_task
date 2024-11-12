int main () {
    int ryOlvih, MGcp5xhSey, ZAgrbdE, l, m, GSoyeqt;
    double  sum;
    double  ZUEFlLpru;
    double  Gspo0jkavQL;
    sum = 0.0;
    int fN9mgWpQ [305];
    scanf ("%d", &GSoyeqt);
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
    for (ryOlvih = 0; GSoyeqt > ryOlvih; ryOlvih++) {
        scanf ("%d", &fN9mgWpQ[ryOlvih]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        sum = sum + fN9mgWpQ[ryOlvih];
    }
    ZUEFlLpru = sum / GSoyeqt;
    Gspo0jkavQL = fabs (fN9mgWpQ[0] - ZUEFlLpru);
    for (ryOlvih = 1; GSoyeqt > ryOlvih; ryOlvih++) {
        if (fabs (fN9mgWpQ[ryOlvih] - ZUEFlLpru) > Gspo0jkavQL)
            Gspo0jkavQL = fabs (fN9mgWpQ[ryOlvih] - ZUEFlLpru);
    }
    for (ryOlvih = 0; GSoyeqt > ryOlvih; ryOlvih++) {
        if (Gspo0jkavQL -fabs (fN9mgWpQ[ryOlvih] - ZUEFlLpru) < 1e-6) {
            printf ("%d", fN9mgWpQ[ryOlvih]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            break;
        };
    }
    for (ryOlvih++; ryOlvih < GSoyeqt; ryOlvih++) {
        if (Gspo0jkavQL -fabs (fN9mgWpQ[ryOlvih] - ZUEFlLpru) < (1e-6))
            printf (",%d", fN9mgWpQ[ryOlvih]);
    }
    return 0;
}

