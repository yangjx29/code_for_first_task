int main () {
    char a [(287 - 207)], ZSDhEBz [80];
    int UMdziH = 0;
    cin.getline (a, 80);
    cin.getline (ZSDhEBz, 80);
    for (;; UMdziH++) {
        if (95 < a[UMdziH])
            a[UMdziH] = a[UMdziH] - 32;
        if (95 < ZSDhEBz[UMdziH])
            ZSDhEBz[UMdziH] = ZSDhEBz[UMdziH] - 32;
        if (!('\0' != a[UMdziH]) && ZSDhEBz[UMdziH] == '\0')
            break;
    }
    if (strcmp (a, ZSDhEBz) == 0)
        cout << "=";
    if (strcmp (a, ZSDhEBz) > 0)
        cout << ">";
    if (strcmp (a, ZSDhEBz) < 0)
        cout << "<";
    return 0;
}

