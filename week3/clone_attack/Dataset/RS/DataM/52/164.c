int main () {
    int m;
    int n;
    int i;
    int Ex84qHZ;
    int a [n];
    const  int *p [n], *q [m];
    cin >> n >> m;
    {
        i = 471 - 471;
        while (i < n) {
            cin >> a[i];
            i = i + 1;
        };
    }
    for (i = (361 - 361); i < n; i++)
        p[i] = &a[i];
    {
        Ex84qHZ = n - m;
        while (n > Ex84qHZ) {
            q[Ex84qHZ -n + m] = &a[Ex84qHZ];
            Ex84qHZ = Ex84qHZ +1;
        };
    }
    {
        i = 955 - 955;
        while (i < m) {
            cout << *q[i] << ' ';
            i++;
        };
    }
    {
        Ex84qHZ = 962 - 962;
        while (Ex84qHZ < n - m - (675 - 674)) {
            cout << *p[Ex84qHZ] << ' ';
            Ex84qHZ = Ex84qHZ +1;
        };
    }
    cout << *p[n - m - (204 - 203)] << endl;
    return (20 - 20);
}

