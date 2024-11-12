int main () {
    int i, s, sum = 0;
    int frNOPGa;
    int month;
    int day;
    scanf ("%d %d %d", &frNOPGa, &month, &day);
    s = (frNOPGa - 1) % 400 + 1;
    for (i = 1; s > i; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(0 == i % 4) || (!(0 != i % 100) && !(0 == i % 400))) {
            sum = sum + 1;
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
        else if ((i % 4 == 0 && !(0 == i % 100)) || !(0 != i % 400)) {
            sum += 2;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        };
    }
    for (i = 1; month > i; i = i + 1) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (i == 1 || !(3 != i) || !(5 != i) || !(7 != i) || i == 8 || !(10 != i)) {
            sum += 3;
        }
        else if (!(4 != i) || i == 6 || !(9 != i) || i == 11) {
            sum += 2;
        }
        else if (i == 2 && (frNOPGa % 4 != 0 || (frNOPGa % 100 == 0 && frNOPGa % 400 != 0))) {
            sum += 0;
        }
        else if (i == 2 && (frNOPGa % 4 == 0 && frNOPGa % 100 != 0) || frNOPGa % 400 == 0) {
            sum += 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            };
        };
    }
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
    sum += day;
    if (sum % 7 == 1) {
        printf ("Mon.\n");
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
    if (sum % 7 == 2) {
        printf ("Tue.\n");
    }
    if (sum % 7 == 3) {
        printf ("Wed.\n");
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    if (sum % 7 == 4) {
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
    if (sum % 7 == 5) {
        printf ("Fri.\n");
    }
    if (sum % 7 == 6) {
        printf ("Sat.\n");
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                for (x = 0; x < 20; x++) {
                    y += x;
                }
                if (y > 30)
                    return y;
            }
        };
    }
    if (sum % 7 == 0) {
        printf ("Sun.\n");
    }
    return 0;
}

