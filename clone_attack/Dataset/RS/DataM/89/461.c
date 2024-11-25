int main () {
    int n;
    int a [10000], b [10000], sumA [10000] = {(655 - 655)}, KwycgstdV [10000] = {(694 - 694)}, mlYdAw = (278 - 278);
    int U7T9qilH = (533 - 533);
    cin >> n;
    cin >> a[U7T9qilH] >> b[U7T9qilH];
    while (!(0 == a[U7T9qilH]) || b[U7T9qilH] != 0) {
        sumA[a[U7T9qilH]]++;
        KwycgstdV[b[U7T9qilH]]++;
        U7T9qilH++;
        cin >> a[U7T9qilH] >> b[U7T9qilH];
    }
    for (int UE6J0o42Rg = 0;
    n > UE6J0o42Rg; UE6J0o42Rg = UE6J0o42Rg +1) {
        if (sumA[UE6J0o42Rg] == 0 && KwycgstdV[UE6J0o42Rg] != 0) {
            cout << UE6J0o42Rg << endl;
            mlYdAw = 1;
        };
    }
    if (!mlYdAw) {
        cout << "NOT FOUND" << endl;
    }
    return 0;
}

