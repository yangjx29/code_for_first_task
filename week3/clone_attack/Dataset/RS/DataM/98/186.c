int main () {
    int EJ87E1;
    EJ87E1 = 0;
    int m;
    char a [45];
    cin >> m;
    {
        int i = 1;
        while (i <= m) {
            i++;
            cin >> a;
            if (EJ87E1 == 0) {
                cout << a;
                EJ87E1 = strlen (a);
            }
            else if (EJ87E1 +strlen (a) + 1 < 80) {
                cout << " " << a;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                EJ87E1 = EJ87E1 +strlen (a) + 1;
            }
            else if (EJ87E1 +strlen (a) + 1 == 80) {
                EJ87E1 = 0;
                cout << " " << a << endl;
            }
            else {
                cout << endl;
                cout << a;
                EJ87E1 = strlen (a);
            };
        };
    }
    return 0;
}

