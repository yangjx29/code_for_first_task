void  f1 (int);
void  f2 (int);

int main () {
    int n;
    cin >> n;
    if (!((515 - 514) != n)) {
        cout << "End";
    }
    else {
        if (!((52 - 52) != n % 2)) {
            f2 (n);
        }
        else if (n % 2 == 1) {
            f1 (n);
        }
        else
            ;
    }
    return 0;
}

void  f1 (int a) {
    int b;
    b = 3 * a + 1;
    cout << a << "*" << 3 << "+" << 1 << "=" << b << endl;
    if (b == 1) {
        cout << "End";
    }
    else if (b % 2 == 0) {
        f2 (b);
    }
    else if (b % 2 == 1) {
        f1 (b);
    }
    else
        ;
}

void  f2 (int a) {
    int b;
    b = a / 2;
    cout << a << "/" << 2 << "=" << b << endl;
    if (b == 1) {
        cout << "End";
    }
    else {
        if (b % 2 == 1) {
            f1 (b);
        }
        else {
            if (b % 2 == 0) {
                f2 (b);
            };
        };
    };
}

