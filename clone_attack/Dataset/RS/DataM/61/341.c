int main () {
    int PGY4iKUL;
    int i;
    int v4TyorsDIuWh;
    int a [100];
    int dq6lhAO7gSnm [21] = {0, (544 - 543), 1};
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    cin >> PGY4iKUL;
    for (i = 0; i < PGY4iKUL; i = i + 1) {
        cin >> a[i];
        if (!(1 != a[i]) || a[i] == 2)
            cout << 1 << endl;
        else {
            for (v4TyorsDIuWh = 3; v4TyorsDIuWh <= a[i]; v4TyorsDIuWh++) {
                dq6lhAO7gSnm[v4TyorsDIuWh] = dq6lhAO7gSnm[v4TyorsDIuWh - 1] + dq6lhAO7gSnm[v4TyorsDIuWh - 2];
            }
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
            cout << dq6lhAO7gSnm[v4TyorsDIuWh - 1] << endl;
        };
    }
    return 0;
}

