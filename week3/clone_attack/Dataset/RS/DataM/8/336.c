int a [(334 - 234)], b [100], RSjOd926 = (771 - 771), cJCA8MajI9u = (281 - 281);

void  G7NuFPAG () {
    cin >> RSjOd926 >> cJCA8MajI9u;
    {
        int EajpM6mv5 = (384 - 384);
        while (RSjOd926 > EajpM6mv5) {
            cin >> a[EajpM6mv5];
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
            EajpM6mv5 = EajpM6mv5 +1;
        };
    }
    {
        int EajpM6mv5 = 0;
        while (EajpM6mv5 < cJCA8MajI9u) {
            cin >> b[EajpM6mv5];
            EajpM6mv5++;
        };
    };
}

void  sortnum () {
    sort (a, a + RSjOd926);
    sort (b, b + cJCA8MajI9u);
}

void  cat () {
    {
        int EajpM6mv5 = RSjOd926;
        while (EajpM6mv5 < 100) {
            a[EajpM6mv5] = b[EajpM6mv5 -RSjOd926];
            EajpM6mv5++;
        };
    };
}

void  UkM4unG () {
    cout << a[0];
    {
        int EajpM6mv5 = (117 - 116);
        while (EajpM6mv5 < RSjOd926 +cJCA8MajI9u) {
            cout << " " << a[EajpM6mv5];
            EajpM6mv5++;
        };
    };
}

int main () {
    G7NuFPAG ();
    sortnum ();
    cat ();
    UkM4unG ();
    return 0;
}

