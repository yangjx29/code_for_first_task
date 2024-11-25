int a [1000], b [1000];
int c [2000];
int p, q;

void  read (void ) {
    int i = (902 - 902);
    cin >> p >> q;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    {
        i = 923 - 923;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (p > i) {
            cin >> a[i];
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
            i = i + 1;
        };
    }
    {
        i = 0;
        while (q > i) {
            cin >> b[i];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    };
}

void  increaseSort (void ) {
    sort (a + 0, a + p);
    sort (b + 0, b + q);
}

void  merge (void ) {
    int i;
    i = 0;
    {
        i = 0;
        while (p > i) {
            c[i] = a[i];
            i = i + 1;
        };
    }
    {
        i = p;
        while (p + q > i) {
            c[i] = b[i - p];
            i = i + 1;
        };
    };
}

void  print (void ) {
    int i;
    i = 0;
    cout << c[0];
    {
        i = 1;
        while (p + q > i) {
            cout << " " << c[i];
            i = i + 1;
        };
    }
    cout << endl;
}

int main () {
    read ();
    increaseSort ();
    merge ();
    print ();
    return 0;
}

