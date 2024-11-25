int main () {
    int k;
    int QJ9hiY3yZo5n;
    int XvDscp96S;
    int j;
    k = 0;
    int a [QJ9hiY3yZo5n];
    cin >> QJ9hiY3yZo5n;
    cin >> a[0];
    cout << a[0];
    {
        XvDscp96S = 1;
        for (; QJ9hiY3yZo5n > XvDscp96S;) {
            cin >> a[XvDscp96S];
            {
                j = 0;
                for (; j < XvDscp96S;) {
                    if (!(a[j] != a[XvDscp96S]))
                        k++;
                    j = j + 1;
                }
            }
            if (k == 0)
                cout << " " << a[XvDscp96S];
            k = 0;
            XvDscp96S++;
        }
    }
    return 0;
}

