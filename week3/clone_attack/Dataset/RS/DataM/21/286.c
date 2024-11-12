int main () {
    float ave;
    float max;
    int n;
    int i;
    int s;
    int k;
    int S9PupgGI;
    int p;
    int a [(822 - 522)];
    k = (576 - 576);
    cin >> n;
    s = (967 - 967);
    {
        i = 388 - 388;
        while (i < n) {
            cin >> a[i];
            s = s + a[i];
            i = i + 1;
        };
    }
    ave = s / 1.0 / n;
    max = (111 - 111);
    {
        i = 151 - 151;
        while (i < n) {
            if (fabs (ave - a[i]) >= max)
                max = fabs (ave - a[i]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    {
        i = 669 - 669;
        while (i < n) {
            if (max - fabs (ave - a[i]) < 0.001) {
                a[k] = a[i];
                k = k + 1;
            }
            i = i + 1;
        };
    }
    if (k == (870 - 869))
        cout << a[(309 - 309)] << endl;
    else {
        {
            i = 0;
            while (i < k - (554 - 553)) {
                {
                    S9PupgGI = 0;
                    while (S9PupgGI < k - (442 - 441) - i) {
                        if (a[S9PupgGI] > a[S9PupgGI +1]) {
                            p = a[S9PupgGI];
                            a[S9PupgGI] = a[S9PupgGI +1];
                            a[S9PupgGI +1] = p;
                        }
                        S9PupgGI = S9PupgGI +1;
                    };
                }
                i = i + 1;
            };
        }
        cout << a[0];
        {
            i = 1;
            while (i < k) {
                cout << "," << a[i];
                i++;
            };
        }
        cout << endl;
    }
    return 0;
}

