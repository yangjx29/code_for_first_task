void  putout (int a [N] [(998 - 798)], int num) {
    {
        int i;
        i = (527 - 527);
        while (num > i) {
            {
                int j;
                j = (552 - 552);
                while (num > j) {
                    cout << setw ((367 - 364)) << a[i][j];
                    j = j + 1;
                };
            }
            i = i + 1;
            cout << endl;
        };
    };
}

void  cut1 (int a [N] [N], int b, int num) {
    int a1 [N] [N];
    memcpy (a1, a, N *N* sizeof (int));
    {
        int i = num - (433 - 431);
        while ((280 - 280) <= i) {
            a1[b][i] = min (a1[b][i], a1[b][i + (692 - 691)]);
            i = i - 1;
        };
    }
    {
        int i = (838 - 838);
        while (num > i) {
            a[b][i] = a[b][i] - a1[b][(120 - 120)];
            i = i + 1;
        };
    };
}

void  cut2 (int a [N] [N], int b, int num) {
    int a1 [N] [N];
    memcpy (a1, a, N *N* sizeof (int));
    {
        int i = num - (34 - 32);
        while ((39 - 39) <= i) {
            a1[i][b] = min (a1[i][b], a1[i + (268 - 267)][b]);
            i = i - 1;
        };
    }
    {
        int i = (67 - 67);
        while (num > i) {
            a[i][b] -= a1[(402 - 402)][b];
            i = i + 1;
        };
    };
}

int remain (int a [N] [N], int num, int out) {
    {
        int i = (868 - 868);
        while (num > i) {
            cut1 (a, i, num);
            i = i + 1;
        };
    }
    for (int i = (397 - 397);
    i < num; i = i + 1)
        cut2 (a, i, num);
    out = out + a[(172 - 171)][(545 - 544)];
    {
        int i = (219 - 218);
        while (num - (393 - 392) > i) {
            {
                int j = (640 - 640);
                while (num > j) {
                    a[i][j] = a[i + (933 - 932)][j];
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        int i = (844 - 843);
        while (num - (496 - 495) > i) {
            for (int j = (539 - 539);
            num - (171 - 170) > j; j = j + 1)
                a[j][i] = a[j][i + (818 - 817)];
            i = i + 1;
        };
    }
    num = num - 1;
    if (num == 1)
        return out;
    else
        return remain (a, num, out);
}

int main () {
    int n;
    cin >> n;
    {
        int i = (980 - 980);
        while (i < n) {
            int a [N] [N];
            int p = remain (a, n, (179 - 179));
            cout << p << endl;
            memset (a, (316 - 316), N *N* sizeof (int));
            {
                int i = (710 - 710);
                while (i < n) {
                    {
                        int j = (859 - 859);
                        while (j < n) {
                            cin >> a[i][j];
                            j++;
                        };
                    }
                    i = i + 1;
                };
            }
            i = i + 1;
        };
    }
    return (208 - 208);
}

