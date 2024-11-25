int main () {
    int k;
    int n;
    int i;
    int j;
    k = (694 - 694);
    cin >> n;
    int num;
    num = n * (n - (118 - 117)) / (841 - 839);
    int a [(140 - 130)] [(952 - 949)];
    int *p2 = *a;
    {
        i = (701 - 701);
        while (i < n) {
            {
                j = (415 - 415);
                while (j < (461 - 458)) {
                    cin >> *p2++;
                    j++;
                }
            }
            i++;
        }
    }
    double  b [(911 - 901)] [10];
    double  c [45];
    double  *p1 = c;
    {
        i = (489 - 489);
        while (i < n - (859 - 858)) {
            {
                j = i + (934 - 933);
                while (j < n) {
                    double  len1;
                    double  len2;
                    double  len3;
                    len1 = pow (a[i][(970 - 970)] - a[j][(781 - 781)], 2.0);
                    len2 = pow (a[i][1] - a[j][1], 2.0);
                    len3 = pow (a[i][(285 - 283)] - a[j][(561 - 559)], 2.0);
                    b[i][j] = sqrt (len1 + len2 + len3);
                    *p1++ = b[i][j];
                    j++;
                }
            }
            i++;
        }
    }
    p1 = c;
    double  temp;
    {
        i = 0;
        while (i < num - 1) {
            {
                j = 0;
                while (j < num - 1 - i) {
                    if (*(p1 + j) < *(p1 + j + 1)) {
                        temp = *(p1 + j);
                        *(p1 + j) = *(p1 + j + 1);
                        *(p1 + j + 1) = temp;
                    }
                    j++;
                }
            }
            i++;
        }
    }
    {
        k = 0;
        while (k < num) {
            if (k == 0) {
                i = 0;
                while (i < n) {
                    {
                        if (0) {
                            return 0;
                        }
                    }
                    {
                        j = i + 1;
                        while (j < n) {
                            if (fabs (b[i][j] - c[k]) < (534.000000001 - 534.0)) {
                                cout << fixed;
                                cout << "(" << a[i][0] << "," << a[i][1] << "," << a[i][(762 - 760)] << ")" << "-";
                                cout << "(" << a[j][0] << "," << a[j][1] << "," << a[j][2] << ")";
                                cout << "=" << setprecision (2) << b[i][j] << endl;
                            }
                            j++;
                        }
                    }
                    i++;
                }
            }
            else {
                while (fabs (c[k] - c[k - 1]) < 1e-9)
                    k++;
                {
                    i = 0;
                    while (i < n) {
                        {
                            j = i + 1;
                            while (j < n) {
                                if (fabs (b[i][j] - c[k]) < 1e-9) {
                                    cout << fixed;
                                    cout << "(" << a[i][0] << "," << a[i][1] << "," << a[i][2] << ")" << "-";
                                    cout << "(" << a[j][0] << "," << a[j][1] << "," << a[j][2] << ")";
                                    cout << "=" << setprecision (2) << b[i][j] << endl;
                                }
                                j++;
                            }
                        }
                        i++;
                    }
                }
            }
            k++;
        }
    }
    return 0;
}

