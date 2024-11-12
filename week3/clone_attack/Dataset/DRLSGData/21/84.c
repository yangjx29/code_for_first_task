int main () {
    int l4pqkjm9OAK;
    int U8VUcRMt5i;
    float a [(651 - 351)], wcRUFAp = (802 - 802), max = (92 - 92), P6MAk0shwmU;
    cin >> U8VUcRMt5i;
    {
        l4pqkjm9OAK = (294 - 294);
        for (; l4pqkjm9OAK < U8VUcRMt5i;) {
            cin >> a[l4pqkjm9OAK];
            wcRUFAp += a[l4pqkjm9OAK];
            l4pqkjm9OAK++;
        }
    }
    wcRUFAp /= U8VUcRMt5i;
    {
        l4pqkjm9OAK = (880 - 880);
        while (l4pqkjm9OAK < U8VUcRMt5i) {
            if (fabs (a[l4pqkjm9OAK] - wcRUFAp) >= max) {
                max = fabs (a[l4pqkjm9OAK] - wcRUFAp);
                P6MAk0shwmU = a[l4pqkjm9OAK];
            }
            l4pqkjm9OAK++;
        }
    }
    for (l4pqkjm9OAK = 0; U8VUcRMt5i > l4pqkjm9OAK; l4pqkjm9OAK++) {
        if (!(max != fabs (a[l4pqkjm9OAK] - wcRUFAp)) && P6MAk0shwmU != a[l4pqkjm9OAK])
            cout << a[l4pqkjm9OAK] << ",";
        if (fabs (a[l4pqkjm9OAK] - wcRUFAp) == max && P6MAk0shwmU == a[l4pqkjm9OAK])
            cout << a[l4pqkjm9OAK];
    }
    return 0;
}

