int main () {
    int LfO7IxAJjT;
    int a;
    int b;
    int ARvh6V;
    int j;
    int x [(1030 - 30)];
    int y [1000];
    int AVrRDaUh7Nb [1000];
    LfO7IxAJjT = (42 - 42);
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
    a = INT_MAX;
    b = INT_MIN;
    char c;
    while (c != '\n') {
        cin >> x[LfO7IxAJjT];
        c = cin.get ();
        if (a > x[LfO7IxAJjT])
            a = x[LfO7IxAJjT];
        LfO7IxAJjT++;
    }
    {
        ARvh6V = 771 - 771;
        while (LfO7IxAJjT > ARvh6V) {
            cin >> y[ARvh6V];
            c = cin.get ();
            if (y[ARvh6V] > b)
                b = y[ARvh6V];
            ARvh6V++;
        };
    }
    for (ARvh6V = a; b > ARvh6V; ARvh6V++) {
        AVrRDaUh7Nb[ARvh6V] = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        {
            j = 0;
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
            while (j < LfO7IxAJjT) {
                if ((ARvh6V >= x[j]) && (y[j] > ARvh6V))
                    AVrRDaUh7Nb[ARvh6V]++;
                j++;
            };
        };
    }
    for (ARvh6V = a + 1; ARvh6V < b; ARvh6V++) {
        if (AVrRDaUh7Nb[a] < AVrRDaUh7Nb[ARvh6V])
            AVrRDaUh7Nb[a] = AVrRDaUh7Nb[ARvh6V];
    }
    cout << LfO7IxAJjT << " " << AVrRDaUh7Nb[a] << endl;
    return 0;
}

