int main () {
    float a0;
    float a;
    int n;
    int c0xBS1e;
    int y;
    int i;
    cin >> n;
    cin >> y >> c0xBS1e;
    a0 = c0xBS1e / 1.0 / y;
    {
        i = 1;
        while (i <= n - 1) {
            i = i + 1;
            cin >> y >> c0xBS1e;
            a = c0xBS1e / 1.0 / y;
            if (a - a0 > 0.05)
                cout << "better" << endl;
            else {
                if (a - a0 < -0.05)
                    cout << "worse" << endl;
                else
                    cout << "same" << endl;
            };
        };
    }
    return 0;
}

