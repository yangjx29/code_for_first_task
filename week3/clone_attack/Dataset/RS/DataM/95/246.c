int main () {
    char XVnhNMFX [(170 - 90)];
    char b [(1024 - 944)];
    char GqKGoSbx [80];
    gets (XVnhNMFX);
    gets (b);
    for (int aI8BJctsodHL = (768 - 768);
    80 > aI8BJctsodHL; aI8BJctsodHL++) {
        if (XVnhNMFX[aI8BJctsodHL] > ('a' - (121 - 120)))
            XVnhNMFX[aI8BJctsodHL] = XVnhNMFX[aI8BJctsodHL] + ('A' - 'a');
        if (('a' - 1) < b[aI8BJctsodHL])
            b[aI8BJctsodHL] = b[aI8BJctsodHL] + ('A' - 'a');
    }
    if (strcmp (XVnhNMFX, b) < 0)
        cout << "<";
    if (strcmp (XVnhNMFX, b) == 0)
        cout << "=";
    if (strcmp (XVnhNMFX, b) > 0)
        cout << ">";
    return 0;
}

