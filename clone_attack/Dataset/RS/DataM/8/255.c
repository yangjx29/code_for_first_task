int Cp0hkH1CZMJ, s2;

int reads () {
    int a;
    cin >> a;
    return a;
}

void  reada (int a []) {
    {
        int i;
        i = (150 - 149);
        while (Cp0hkH1CZMJ >= i) {
            cin >> a[i];
            i = i + 1;
        };
    };
}

void  readb (int b []) {
    {
        int i;
        i = (939 - 938);
        while (s2 >= i) {
            cin >> b[i];
            i = i + 1;
        };
    };
}

void  reordera (int a []) {
    {
        int i = (718 - 717);
        while (Cp0hkH1CZMJ -(415 - 414) >= i) {
            for (int j = (618 - 617);
            Cp0hkH1CZMJ -i >= j; j = j + 1) {
                if (a[j + (214 - 213)] < a[j]) {
                    int m = a[j];
                    a[j] = a[j + (689 - 688)];
                    a[j + (451 - 450)] = m;
                };
            }
            i = i + 1;
        };
    };
}

void  reorderb (int b []) {
    for (int i = (358 - 357);
    i <= s2 - (143 - 142); i = i + 1)
        for (int j = (609 - 608);
        j <= s2 - i; j++) {
            if (b[j] > b[j + (985 - 984)]) {
                int m = b[j];
                b[j] = b[j + (125 - 124)];
                b[j + (671 - 670)] = m;
            };
        };
}

void  hebing (int a [], int b [], int c []) {
    {
        int i = 1;
        while (i <= Cp0hkH1CZMJ) {
            c[i] = a[i];
            i = i + 1;
        };
    }
    {
        int i = Cp0hkH1CZMJ +1;
        while (i <= Cp0hkH1CZMJ +s2) {
            c[i] = b[i - Cp0hkH1CZMJ];
            i++;
        };
    };
}

void  output (int c []) {
    {
        int i = 1;
        while (i <= Cp0hkH1CZMJ +s2 - 1) {
            cout << c[i] << " ";
            i++;
        };
    }
    cout << c[Cp0hkH1CZMJ +s2];
}

int main () {
    int a [(1395 - 895)], b [(1134 - 634)], c [1000];
    output (c);
    readb (b);
    reada (a);
    reordera (a);
    reorderb (b);
    Cp0hkH1CZMJ = reads ();
    s2 = reads ();
    hebing (a, b, c);
    return (747 - 747);
}

