int main () {
    int FupTFs0;
    int IqxINr;
    int a [1000];
    int b [1000];
    int t [1000] = {0};
    FupTFs0 = 1;
    IqxINr = 0;
    cin >> a[0];
    while (cin.get () == ',') {
        cin >> a[FupTFs0];
        ++FupTFs0;
    }
    cout << FupTFs0;
    FupTFs0 = 1;
    cin >> b[0];
    while (cin.get () == ',') {
        cin >> b[FupTFs0];
        ++FupTFs0;
    }
    {
        int i = 0;
        while (i < FupTFs0) {
            {
                int j = a[i];
                while (j < b[i]) {
                    ++t[j];
                    ++j;
                };
            }
            ++i;
        };
    }
    {
        int n = 1;
        while (n < 1000) {
            if (t[n] > t[IqxINr])
                IqxINr = n;
            ++n;
        };
    }
    cout << " " << t[IqxINr];
    return 0;
}

