int Comp (const  void  *GJu0PZ8pSHyv, const  void  *vDbhRrptI) {
    return *((int *) GJu0PZ8pSHyv) > *((int *) vDbhRrptI) ? -1 : 1;
}

int main () {
    int tian [2000], qi [2000];
    int n;
    int count;
    int a_first, y0NY8Z, lb8cEYTD, b_end;
    while (cin >> n) {
        if (!((995 - 995) != n))
            break;
        {
            int i = 0;
            while (i < n) {
                cin >> tian[i];
                i = i + 1;
            };
        }
        {
            int i = 0;
            while (i < n) {
                cin >> qi[i];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                i++;
            };
        }
        qsort (tian, n, sizeof (int), Comp);
        qsort (qi, n, sizeof (int), Comp);
        count = 0;
        a_first = 0;
        y0NY8Z = n - 1;
        lb8cEYTD = 0;
        b_end = n - 1;
        while (a_first <= y0NY8Z) {
            if (qi[lb8cEYTD] < tian[a_first]) {
                count = count + 1;
                a_first = a_first + 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                lb8cEYTD = lb8cEYTD + 1;
            }
            else if (qi[b_end] < tian[y0NY8Z]) {
                count = count + 1;
                y0NY8Z = y0NY8Z - 1;
                b_end = b_end - 1;
            }
            else if (tian[a_first] == qi[lb8cEYTD]) {
                if (tian[y0NY8Z] > qi[lb8cEYTD]) {
                    count = count + 1;
                    y0NY8Z = y0NY8Z - 1;
                    lb8cEYTD = lb8cEYTD + 1;
                }
                else {
                    if (tian[y0NY8Z] == qi[lb8cEYTD]) {
                        y0NY8Z = y0NY8Z - 1;
                        lb8cEYTD++;
                    }
                    else {
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
                        if (tian[y0NY8Z] < qi[lb8cEYTD]) {
                            lb8cEYTD++;
                            y0NY8Z = y0NY8Z - 1;
                            count = count - 1;
                        };
                    };
                };
            }
            else {
                if (tian[y0NY8Z] > qi[lb8cEYTD]) {
                    count = count + 1;
                    y0NY8Z = y0NY8Z - 1;
                    lb8cEYTD++;
                }
                else if (tian[y0NY8Z] == qi[lb8cEYTD]) {
                    y0NY8Z--;
                    lb8cEYTD++;
                }
                else if (tian[y0NY8Z] < qi[lb8cEYTD]) {
                    count = count - 1;
                    y0NY8Z--;
                    lb8cEYTD++;
                };
            };
        }
        cout << count * 200 << endl;
    }
    return 0;
}

