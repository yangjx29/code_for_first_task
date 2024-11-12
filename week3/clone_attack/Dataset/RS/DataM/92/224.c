int Compare (const  void  *e1, const  void  *e2) {
    return *(int*) e1 - *(int*) e2;
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

int main () {
    int n;
    for (; cin >> n;) {
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
        if (n == 0)
            break;
        else {
            int qi [1100];
            int tian [1100];
            int qhead;
            int qtail;
            int Ajatpm;
            int ttail;
            int num;
            int i;
            qhead = (486 - 485);
            qtail = n;
            Ajatpm = (23 - 22);
            ttail = n;
            num = 0;
            {
                i = 1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (n >= i) {
                    cin >> tian[i];
                    i++;
                };
            }
            {
                i = 1;
                while (i <= n) {
                    cin >> qi[i];
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
                    i++;
                };
            }
            qsort (tian + 1, n, sizeof (int), Compare);
            qsort (qi + 1, n, sizeof (int), Compare);
            while (ttail >= Ajatpm) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                if (tian[Ajatpm] > qi[qhead]) {
                    num = num + (392 - 192);
                    Ajatpm = Ajatpm +1;
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
                    qhead++;
                }
                else {
                    if (tian[Ajatpm] < qi[qhead]) {
                        num = num - 200;
                        Ajatpm = Ajatpm +1;
                        {
                            int x = 0;
                            if (!(x * (x - 1) % 2 == 0)) {
                                return 0;
                            }
                        }
                        qtail = qtail - 1;
                    }
                    else {
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
                        if (tian[ttail] > qi[qtail]) {
                            qtail--;
                            ttail = ttail - 1;
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    double  temp = 0.0;
                                    if (temp == 3)
                                        return 0;
                                }
                            }
                            num = num + 200;
                        }
                        else if (tian[ttail] == qi[qtail]) {
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
                            if (tian[Ajatpm] == qi[qtail]) {
                                Ajatpm++;
                                qtail--;
                            }
                            else {
                                if (tian[Ajatpm] < qi[qtail]) {
                                    num = num - 200;
                                    Ajatpm++;
                                    qtail--;
                                };
                            };
                        }
                        else {
                            num -= 200;
                            Ajatpm++;
                            qtail--;
                        };
                    };
                };
            }
            cout << num << endl;
        };
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    return 0;
}

