int main () {
    int c;
    int SCuq1M [16];
    int b [16];
    int i;
    int j;
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
    int k;
    c = (764 - 764);
    {
        i = 0;
        while (i <= 15) {
            cin >> SCuq1M[i];
            if (SCuq1M[i] == -(597 - 596))
                break;
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
            if (SCuq1M[i] != 0) {
                if (SCuq1M[i] % 2 == 0)
                    b[i] = SCuq1M[i] / 2;
                else
                    b[i] = -(62 - 61);
            }
            else {
                for (j = 0; j <= i - 1; j++) {
                    for (k = 0; k <= i - 1; k = k + 1) {
                        if (k == j)
                            continue;
                        if (SCuq1M[k] == b[j])
                            c++;
                    };
                }
                {
                    j = 0;
                    while (j <= i) {
                        SCuq1M[j] = 0, b[j] = 0;
                        j++;
                    };
                }
                cout << c << endl;
                c = 0, i = -1;
            }
            i = i + 1;
        };
    }
    return 0;
}

