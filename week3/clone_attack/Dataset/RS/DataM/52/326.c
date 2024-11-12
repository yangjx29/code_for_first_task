int main () {
    int a [103], *L5uR4JVYdC7 = NULL, cQ2K8GcgCB, v5I3Qan4Ycis, RAj2tsSxz8I6, s2SYbKtAJZz, gIWKQnHL;
    L5uR4JVYdC7 = a;
    cin >> cQ2K8GcgCB >> v5I3Qan4Ycis;
    for (RAj2tsSxz8I6 = 1; cQ2K8GcgCB >= RAj2tsSxz8I6; RAj2tsSxz8I6 = RAj2tsSxz8I6 +1)
        cin >> *L5uR4JVYdC7++;
    {
        RAj2tsSxz8I6 = 1;
        while (v5I3Qan4Ycis >= RAj2tsSxz8I6) {
            RAj2tsSxz8I6 = RAj2tsSxz8I6 +1;
            gIWKQnHL = *(a + cQ2K8GcgCB - 1);
            for (s2SYbKtAJZz = cQ2K8GcgCB - 1; s2SYbKtAJZz >= 1; s2SYbKtAJZz = s2SYbKtAJZz - 1)
                *(a + s2SYbKtAJZz) = *(a + s2SYbKtAJZz - 1);
            *a = gIWKQnHL;
        };
    }
    L5uR4JVYdC7 = a;
    cout << *L5uR4JVYdC7;
    {
        RAj2tsSxz8I6 = 1;
        while (RAj2tsSxz8I6 <= cQ2K8GcgCB - 1) {
            RAj2tsSxz8I6++;
            cout << " " << *(L5uR4JVYdC7 = L5uR4JVYdC7 +1);
        };
    }
    return 0;
}

