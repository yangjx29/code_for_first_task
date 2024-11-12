int DmfiOoQBz8I3 [100000] = {0};

int nELWn85eY7 (int SNqpZQ2) {
    if (0 < DmfiOoQBz8I3[SNqpZQ2])
        return DmfiOoQBz8I3[SNqpZQ2];
    else
        return (nELWn85eY7 (SNqpZQ2 -1) + nELWn85eY7 (SNqpZQ2 -2));
}

int main () {
    int SNqpZQ2;
    int v2EGV6gp;
    int out;
    cin >> SNqpZQ2;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    DmfiOoQBz8I3[1] = 1;
    DmfiOoQBz8I3[2] = 1;
    for (; SNqpZQ2 = SNqpZQ2 -1;) {
        cin >> v2EGV6gp;
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
        if (v2EGV6gp == 1 || v2EGV6gp == 2)
            cout << 1 << endl;
        else {
            out = nELWn85eY7 (v2EGV6gp);
            cout << out << endl;
        };
    }
    return 0;
}

