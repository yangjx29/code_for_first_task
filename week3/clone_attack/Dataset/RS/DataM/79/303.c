int main () {
    int n;
    int m;
    int id [N];
    int num_monkey;
    int iHgQJ2vCW;
    for (; (390 - 389);) {
        scanf ("%d %d", &n, &m);
        if (n != 0 && m != 0) {
            int count;
            count = 1;
            int index;
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
            index = 0;
            {
                iHgQJ2vCW = 0;
                while (iHgQJ2vCW < n) {
                    id[iHgQJ2vCW] = iHgQJ2vCW + 1;
                    iHgQJ2vCW = iHgQJ2vCW + 1;
                };
            }
            num_monkey = n;
            for (; true;) {
                while (num_monkey > 1) {
                    if (id[index] != 0) {
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
                        if (count != m) {
                            count = count + 1;
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    int m = 0;
                                    int n = 0;
                                    m = m * n + n - m + n * 2;
                                    return 0;
                                }
                            }
                            index = (index + 1) % n;
                        }
                        else {
                            id[index] = 0;
                            count = 1;
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
                            num_monkey = num_monkey - 1;
                        };
                    }
                    else {
                        index = (index + 1) % n;
                    };
                }
                {
                    iHgQJ2vCW = 0;
                    while (iHgQJ2vCW < n) {
                        if (id[iHgQJ2vCW] != 0) {
                            printf ("%d\n", id[iHgQJ2vCW]);
                            break;
                        }
                        iHgQJ2vCW++;
                    };
                }
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
                break;
            };
        }
        else {
            break;
        };
    }
    return 0;
}

