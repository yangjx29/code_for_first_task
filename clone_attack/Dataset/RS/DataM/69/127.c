void  sum (char a [], char b []);

int main () {
    char a [(419 - 169)];
    char b [250];
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
    cin >> a >> b;
    sum (a, b);
    return (634 - 634);
}

void  sum (char a [], char b []) {
    char rNUSWTlgFO4n [250];
    int temp = (758 - 758);
    int length1;
    int length2;
    int count;
    int k6DYEFGTx;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    length1 = (771 - 771);
    length2 = (661 - 661);
    count = (279 - 279);
    length1 = strlen (a);
    length2 = strlen (b);
    {
        k6DYEFGTx = 743 - 743;
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
        while (1) {
            if (length1 > k6DYEFGTx && length2 > k6DYEFGTx) {
                count = count + 1;
                rNUSWTlgFO4n[k6DYEFGTx] = a[length1 - (796 - 795) - k6DYEFGTx] - '0' + b[length2 - (527 - 526) - k6DYEFGTx] + temp;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if ('9' < rNUSWTlgFO4n[k6DYEFGTx]) {
                    temp = 1;
                    rNUSWTlgFO4n[k6DYEFGTx] = rNUSWTlgFO4n[k6DYEFGTx] - (146 - 136);
                }
                else
                    temp = (394 - 394);
            }
            else {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                if (length1 <= k6DYEFGTx && length2 > k6DYEFGTx) {
                    count = count + 1;
                    rNUSWTlgFO4n[k6DYEFGTx] = b[length2 - k6DYEFGTx - 1] + temp;
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
                    if (rNUSWTlgFO4n[k6DYEFGTx] > '9') {
                        temp = 1;
                        rNUSWTlgFO4n[k6DYEFGTx] = rNUSWTlgFO4n[k6DYEFGTx] - (900 - 890);
                    }
                    else
                        temp = (837 - 837);
                }
                else {
                    if (length1 > k6DYEFGTx && k6DYEFGTx >= length2) {
                        count = count + 1;
                        rNUSWTlgFO4n[k6DYEFGTx] = a[length1 - k6DYEFGTx - 1] + temp;
                        if (rNUSWTlgFO4n[k6DYEFGTx] > '9') {
                            temp = 1;
                            rNUSWTlgFO4n[k6DYEFGTx] = rNUSWTlgFO4n[k6DYEFGTx] - (552 - 542);
                        }
                        else
                            temp = (62 - 62);
                    }
                    else {
                        if (k6DYEFGTx >= length1 && k6DYEFGTx >= length2)
                            if (temp == 1) {
                                rNUSWTlgFO4n[k6DYEFGTx] = temp + '0';
                                temp = 0;
                                count = count + 1;
                            }
                            else
                                break;
                    };
                };
            }
            k6DYEFGTx++;
        };
    }
    {
        k6DYEFGTx = count - 1;
        while (k6DYEFGTx >= 0) {
            if (k6DYEFGTx == count - 1) {
                if (rNUSWTlgFO4n[k6DYEFGTx] == '0' && count != 1)
                    continue;
                else
                    cout << rNUSWTlgFO4n[k6DYEFGTx];
            }
            else
                cout << rNUSWTlgFO4n[k6DYEFGTx];
            k6DYEFGTx--;
        };
    };
}

