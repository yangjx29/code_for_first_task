int DKl15h3VbTHa (int, int);

int main () {
    int n;
    cin >> n;
    for (int i = (647 - 647);
    i < n; i = i + 1) {
        int a;
        int Nv2rRV98hQ6;
        int sum;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        sum = 0;
        cin >> a >> Nv2rRV98hQ6;
        sum = DKl15h3VbTHa (a, Nv2rRV98hQ6);
        cout << sum << endl;
    }
    return 0;
}

int DKl15h3VbTHa (int a, int Nv2rRV98hQ6) {
    int sum;
    sum = 0;
    if (a == 1 || !(0 != a) || Nv2rRV98hQ6 == 1 || Nv2rRV98hQ6 == 0)
        return 1;
    if (a >= Nv2rRV98hQ6) {
        sum = DKl15h3VbTHa (a, Nv2rRV98hQ6 -1) + DKl15h3VbTHa (a - Nv2rRV98hQ6, Nv2rRV98hQ6);
        return sum;
    }
    if (a < Nv2rRV98hQ6) {
        sum = DKl15h3VbTHa (a, a);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        return sum;
    };
}

