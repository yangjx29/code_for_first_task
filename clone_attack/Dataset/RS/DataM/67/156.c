int main () {
    int i;
    double  e;
    double  all;
    int n;
    double  E [n + 2];
    double  PcY7yhMZH4fz;
    cin >> n;
    {
        i = 1;
        while (n >= i) {
            cin >> all >> e;
            PcY7yhMZH4fz = e / all;
            E[i] = PcY7yhMZH4fz;
            i++;
        };
    }
    {
        i = 2;
        while (i <= n) {
            if ((E[i] - E[1]) > 0.05) {
                cout << "better" << endl;
            }
            else {
                if ((E[i] - E[1]) < -0.05) {
                    cout << "worse" << endl;
                }
                else {
                    cout << "same" << endl;
                };
            }
            i++;
        };
    };
}

