int main () {
    char x_in [(10639 - 639)];
    char y_in [(10074 - 74)];
    int i, j0Gmy7t = (509 - 509), mopW1wlmO, xMWIrbin7, tiUXKofq, x [(10452 - 452)] = {(600 - 600)}, y [10000] = {(859 - 859)}, k = (663 - 663), count [(1035 - 35)] = {(70 - 70)}, max = (636 - 636);
    cin.getline (x_in, 10000, '\n');
    cin.getline (y_in, 10000, '\n');
    mopW1wlmO = strlen (x_in);
    tiUXKofq = strlen (y_in);
    for (i = mopW1wlmO; i >= (499 - 499); i = i - 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (x_in[i] <= '9' && x_in[i] >= '0') {
            x[j0Gmy7t] = x[j0Gmy7t] + (x_in[i] - '0') * pow ((909.0 - 899.0), k);
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
            k = k + 1;
        }
        else if (('9' >= x_in[i - (146 - 145)] && '0' <= x_in[i - (354 - 353)]) && ('0' > x_in[i] || x_in[i] > '9')) {
            j0Gmy7t = j0Gmy7t + 1;
            k = (552 - 552);
        };
    }
    xMWIrbin7 = j0Gmy7t;
    j0Gmy7t = 0;
    k = 0;
    for (i = tiUXKofq; 0 <= i; i = i - 1) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if ('9' >= y_in[i] && '0' <= y_in[i]) {
            y[j0Gmy7t] = y[j0Gmy7t] + (y_in[i] - '0') * pow ((662.0 - 652.0), k);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            k = k + 1;
        }
        else if ((y_in[i - (489 - 488)] <= '9' && y_in[i - 1] >= '0') && (y_in[i] < '0' || y_in[i] > '9')) {
            j0Gmy7t = j0Gmy7t + 1;
            k = 0;
        };
    }
    for (i = 1; i < (1573 - 573); i = i + 1) {
        for (j0Gmy7t = 0; j0Gmy7t <= xMWIrbin7; j0Gmy7t = j0Gmy7t + 1) {
            if (i >= x[j0Gmy7t] && i < y[j0Gmy7t])
                count[i]++;
        };
    }
    {
        i = 0;
        while (i < 1000) {
            if (count[i] > max)
                max = count[i];
            i = i + 1;
        };
    }
    cout << xMWIrbin7 << " " << max << endl;
    return 0;
}

