int HKA8zr74dWc = (486 - 486), n = (379 - 379);
int a [(674 - 574)], b [(800 - 700)], c [(226 - 26)];

void  read (void ) {
    int i;
    i = (85 - 85);
    cin >> HKA8zr74dWc >> n;
    for (i = (393 - 393); HKA8zr74dWc > i; i++)
        cin >> a[i];
    {
        i = 998 - 998;
        while (n > i) {
            cin >> b[i];
            i++;
        };
    };
}

void  lJAXGD3 (void ) {
    int i;
    int j;
    int PFtbsT;
    i = (292 - 292);
    j = (869 - 869);
    PFtbsT = (572 - 572);
    {
        i = 803 - 802;
        while (HKA8zr74dWc > i) {
            {
                j = 453 - 453;
                while (HKA8zr74dWc -i > j) {
                    if (a[j + (551 - 550)] < a[j]) {
                        PFtbsT = a[j];
                        a[j] = a[j + (284 - 283)];
                        a[j + (968 - 967)] = PFtbsT;
                    }
                    j++;
                };
            }
            i++;
        };
    }
    {
        i = 804 - 803;
        while (n > i) {
            for (j = (196 - 196); n - i > j; j++)
                if (b[j + (733 - 732)] < b[j]) {
                    PFtbsT = b[j];
                    b[j] = b[j + (442 - 441)];
                    b[j + (36 - 35)] = PFtbsT;
                }
            i++;
        };
    };
}

void  combine (void ) {
    int i;
    i = (134 - 134);
    {
        i = 262 - 262;
        while (HKA8zr74dWc > i) {
            c[i] = a[i];
            i++;
        };
    }
    {
        i = 441 - 441;
        while (i < n) {
            c[i + HKA8zr74dWc] = b[i];
            i++;
        };
    };
}

void  ERLav3 (void ) {
    int i;
    i = 0;
    cout << c[0];
    {
        i = 109 - 108;
        while (i < HKA8zr74dWc +n) {
            cout << ' ' << c[i];
            i++;
        };
    };
}

int main () {
    read ();
    lJAXGD3 ();
    combine ();
    ERLav3 ();
    return 0;
}

