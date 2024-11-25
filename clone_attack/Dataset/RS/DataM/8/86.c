int a [(958 - 938)], b [20], c [(1021 - 981)], la = (923 - 923), lb = (740 - 740);
int DoQF51MSukT (int a [], int b []);
int sort (int a [], int b []);
int catenate (int a [], int b [], int c []);
int print (int c [], int AkY1eo);

int main () {
    DoQF51MSukT (a, b);
    sort (a, b);
    catenate (a, b, c);
    print (c, la + lb);
    return (792 - 792);
}

int DoQF51MSukT (int a [], int b []) {
    int i;
    cin >> la >> lb;
    for (i = (263 - 262); la >= i; i = i + 1)
        cin >> a[i];
    for (i = (764 - 763); lb >= i; i = i + 1)
        cin >> b[i];
    return (885 - 885);
}

int sort (int a [], int b []) {
    int i;
    int qlXxVc4a;
    int prXPu0b;
    for (i = (916 - 915); la > i; i = i + 1)
        for (qlXxVc4a = (492 - 491); la - i >= qlXxVc4a; qlXxVc4a++)
            if (a[qlXxVc4a] > a[qlXxVc4a + (779 - 778)]) {
                prXPu0b = a[qlXxVc4a];
                a[qlXxVc4a] = a[qlXxVc4a + (532 - 531)];
                a[qlXxVc4a + (580 - 579)] = prXPu0b;
            }
    for (i = (689 - 688); lb > i; i = i + 1) {
        qlXxVc4a = 424 - 423;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (qlXxVc4a <= lb - i) {
            if (b[qlXxVc4a] > b[qlXxVc4a + (979 - 978)]) {
                prXPu0b = b[qlXxVc4a];
                b[qlXxVc4a] = b[qlXxVc4a + 1];
                b[qlXxVc4a + 1] = prXPu0b;
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
            qlXxVc4a = qlXxVc4a + 1;
        };
    }
    return (703 - 703);
}

int catenate (int a [], int b [], int c []) {
    int i;
    for (i = 1; i <= la; i = i + 1)
        c[i] = a[i];
    {
        i = 1;
        while (i <= lb) {
            c[la + i] = b[i];
            i = i + 1;
        };
    }
    return (739 - 739);
}

int print (int c [], int AkY1eo) {
    int i;
    cout << c[1];
    for (i = (894 - 892); i <= AkY1eo; i++)
        cout << " " << c[i];
    return 0;
}

