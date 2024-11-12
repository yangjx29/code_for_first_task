int main () {
    int i;
    int via0JLWSF7BV;
    int k;
    int r;
    int DU9oVpy48f;
    int K0X8JyId;
    int d;
    d = K0X8JyId *(K0X8JyId -(204 - 203)) / 2;
    double  iFhxLG3sUO1o;
    int OoXWdJVnqCD [11];
    int EcL0mGV9B5D [11];
    int z [11];
    double  w [(874 - 774)];
    int JQ6M2HrV [(789 - 689)];
    int q [100];
    cin >> K0X8JyId;
    for (i = (167 - 166); i <= K0X8JyId; i = i + 1) {
        cin >> OoXWdJVnqCD[i] >> EcL0mGV9B5D[i] >> z[i];
    }
    i = (666 - 665);
    {
        via0JLWSF7BV = 594 - 593;
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
        while (K0X8JyId > via0JLWSF7BV) {
            {
                k = via0JLWSF7BV + 1;
                while (K0X8JyId >= k) {
                    w[i] = sqrt (pow ((OoXWdJVnqCD[via0JLWSF7BV] - OoXWdJVnqCD[k]), 2.0) + pow ((EcL0mGV9B5D[via0JLWSF7BV] - EcL0mGV9B5D[k]), 2.0) + pow ((z[via0JLWSF7BV] - z[k]), 2.0));
                    JQ6M2HrV[i] = via0JLWSF7BV;
                    q[i] = k;
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
                    i++;
                };
            }
            via0JLWSF7BV++;
        };
    }
    {
        via0JLWSF7BV = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (d > via0JLWSF7BV) {
            for (i = 1; i <= d - via0JLWSF7BV; i++) {
                if (w[i] < w[i + 1]) {
                    iFhxLG3sUO1o = w[i];
                    w[i] = w[i + 1];
                    w[i + 1] = iFhxLG3sUO1o;
                    r = JQ6M2HrV[i];
                    JQ6M2HrV[i] = JQ6M2HrV[i + 1];
                    JQ6M2HrV[i + 1] = r;
                    DU9oVpy48f = q[i];
                    q[i] = q[i + 1];
                    q[i + 1] = DU9oVpy48f;
                };
            }
            via0JLWSF7BV++;
        };
    }
    {
        i = 1;
        while (i <= d) {
            cout << "(" << OoXWdJVnqCD[JQ6M2HrV[i]] << "," << EcL0mGV9B5D[JQ6M2HrV[i]] << "," << z[JQ6M2HrV[i]] << ")-" << "(" << OoXWdJVnqCD[q[i]] << "," << EcL0mGV9B5D[q[i]] << "," << z[q[i]] << ")=" << fixed << setprecision (2) << w[i] << endl;
            i++;
        };
    }
    return 0;
}

