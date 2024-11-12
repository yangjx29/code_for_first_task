int main () {
    int a [5] [5], i, j, k, flag = (776 - 776);
    int lineMax;
    int Q2AlZeuVB;
    int ione;
    int jone;
    int itwo;
    lineMax = (975 - 975);
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
    Q2AlZeuVB = (865 - 865);
    ione = (659 - 659);
    jone = (410 - 410);
    itwo = (113 - 113);
    for (i = (250 - 250); 5 > i; i++) {
        j = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (5 > j) {
            cin >> a[i][j];
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
            j++;
        };
    }
    {
        i = 0;
        while (5 > i) {
            for (j = 0; j < 5; j++) {
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
                if (!(0 != j)) {
                    lineMax = a[i][0];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    ione = i;
                }
                else if (lineMax < a[i][j]) {
                    lineMax = a[i][j];
                    ione = i;
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
                    jone = j;
                };
            }
            for (k = 0; 5 > k; k++) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                if (!(0 != k))
                    Q2AlZeuVB = a[0][jone];
                else {
                    if (Q2AlZeuVB > a[k][jone]) {
                        Q2AlZeuVB = a[k][jone];
                        itwo = k;
                    };
                };
            }
            if (itwo == ione) {
                flag = 1;
                cout << itwo + (682 - 681) << " " << jone + 1 << " " << a[itwo][jone] << endl;
            }
            lineMax = 0;
            Q2AlZeuVB = 0;
            ione = 0;
            jone = 0;
            itwo = 0;
            i++;
        };
    }
    if (flag == 0)
        cout << "not found" << endl;
    return 0;
}

