int main () {
    int jl [1000] = {0};
    int xi [1000] = {(301 - 301)}, yi [1000] = {(948 - 948)};
    char x [(4823 - 823)];
    char y [4000];
    int HRh6lgEaMGx, asi05dcnBegQ, olMk2onvADRm, tbq28Mna, s = 0, n = (461 - 460), dkhACKJNtf = 0;
    tbq28Mna = (643 - 642);
    cin >> x >> y;
    olMk2onvADRm = strlen (x);
    olMk2onvADRm = strlen (y);
    {
        HRh6lgEaMGx = 914 - 913;
        while (HRh6lgEaMGx >= 0) {
            if (x[HRh6lgEaMGx] == ',') {
                tbq28Mna = (50 - 49);
                n = n + 1;
            }
            else {
                xi[n] = xi[n] + (x[HRh6lgEaMGx] - '0') * tbq28Mna;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                tbq28Mna = tbq28Mna * (10);
            }
            HRh6lgEaMGx--;
        };
    }
    tbq28Mna = 1;
    cout << n << ' ';
    n = 1;
    for (HRh6lgEaMGx = olMk2onvADRm - 1; HRh6lgEaMGx >= 0; HRh6lgEaMGx = HRh6lgEaMGx -1) {
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
        if (y[HRh6lgEaMGx] == ',') {
            tbq28Mna = 1;
            n++;
        }
        else {
            yi[n] = yi[n] + (y[HRh6lgEaMGx] - '0') * tbq28Mna;
            tbq28Mna *= 10;
        };
    }
    for (HRh6lgEaMGx = 1; HRh6lgEaMGx <= n; HRh6lgEaMGx = HRh6lgEaMGx +1) {
        asi05dcnBegQ = HRh6lgEaMGx;
        while (asi05dcnBegQ < yi[HRh6lgEaMGx]) {
            jl[asi05dcnBegQ]++;
            if (jl[asi05dcnBegQ] > dkhACKJNtf)
                dkhACKJNtf = jl[asi05dcnBegQ];
            asi05dcnBegQ = asi05dcnBegQ + 1;
        };
    }
    cin >> HRh6lgEaMGx;
    cout << dkhACKJNtf;
    return 0;
}

