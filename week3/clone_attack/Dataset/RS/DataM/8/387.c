int a [100], b [100], c [200], n1, n2;

int shuru (void ) {
    cin >> n1 >> n2;
    for (int i = 0;
    n1 > i; i++)
        cin >> a[i];
    for (int i = 0;
    n2 > i; i++)
        cin >> b[i];
}

int QObfTzDXAIRN () {
    int Bsqkf0HjS6ic;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (int j = 0;
    n1 - 1 > j; j++)
        for (int i = 0;
        i < n1 - 1; i++)
            if (a[i + 1] < a[i]) {
                Bsqkf0HjS6ic = a[i + 1];
                a[i + 1] = a[i];
                a[i] = Bsqkf0HjS6ic;
            }
    for (int j = 0;
    n2 - 1 > j; j++) {
        int i = 0;
        while (n2 - 1 > i) {
            if (b[i + 1] < b[i]) {
                Bsqkf0HjS6ic = b[i + 1];
                b[i + 1] = b[i];
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
                b[i] = Bsqkf0HjS6ic;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    };
}

int DlVF2G () {
    for (int i = 0;
    n1 > i; i++)
        c[i] = a[i];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    for (int i = 0;
    i < n2; i++)
        c[n1 + i] = b[i];
}

int GApUayxJS02 () {
    cout << c[0];
    {
        int i = 1;
        while (i < n1 + n2) {
            cout << " " << c[i];
            i++;
        };
    };
}

int main () {
    shuru ();
    QObfTzDXAIRN ();
    DlVF2G ();
    GApUayxJS02 ();
    return 0;
}

