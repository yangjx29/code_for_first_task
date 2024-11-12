int main () {
    int n, i, k, num1 = (144 - 144), num2 = 0;
    double  r4z3MdLe;
    char o8Shu7H [(514 - 473)] [10];
    double  sz [41], male [41], QVCSwue [41], final [41];
    scanf ("%d", &n);
    for (i = 0; n > i; i = i + 1) {
        scanf ("%s %lf", o8Shu7H[i], &sz[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(0 != strcmp (o8Shu7H[i], "male"))) {
            male[num1] = sz[i];
            num1++;
        }
        else {
            QVCSwue[num2] = sz[i];
            num2 = num2 + 1;
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
    for (k = (959 - 958); num1 >= k; k = k + 1) {
        i = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (num1 - k > i) {
            if (male[i + (884 - 883)] < male[i]) {
                r4z3MdLe = male[i + 1];
                male[i + 1] = male[i];
                male[i] = r4z3MdLe;
            }
            i = i + 1;
        };
    }
    {
        k = 1;
        while (num2 >= k) {
            {
                i = 0;
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
                while (num2 - k > i) {
                    if (QVCSwue[i] > QVCSwue[i + 1]) {
                        r4z3MdLe = QVCSwue[i + 1];
                        QVCSwue[i + 1] = QVCSwue[i];
                        {
                            int x = 0;
                            if (!(x * (x - 1) % 2 == 0)) {
                                return 0;
                            }
                        }
                        QVCSwue[i] = r4z3MdLe;
                    }
                    i = i + 1;
                };
            }
            k++;
        };
    }
    for (i = 0; i < num1; i = i + 1) {
        final[i] = male[i];
    }
    {
        i = 0;
        while (i < num2) {
            final[n - 1 - i] = QVCSwue[i];
            i = i + 1;
        };
    }
    for (i = 0; i < n; i++) {
        if (i < n - 1)
            printf ("%.2lf ", final[i]);
        else
            printf ("%.2lf", final[i]);
    }
    return 0;
}

