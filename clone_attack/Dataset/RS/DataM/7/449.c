int main () {
    char Pb0w7Cc [(1029 - 929)];
    char a9fnKrmeGOXa [(525 - 425)];
    char KOei8J2B [(990 - 890)];
    char *ugV3IYZ5 = NULL;
    char *dJOEjscGZ = NULL;
    cin >> Pb0w7Cc >> a9fnKrmeGOXa >> KOei8J2B;
    ugV3IYZ5 = strstr (Pb0w7Cc, a9fnKrmeGOXa);
    if (ugV3IYZ5 != NULL) {
        dJOEjscGZ = ugV3IYZ5 + strlen (a9fnKrmeGOXa);
        *ugV3IYZ5 = '\0';
        strcat (KOei8J2B, dJOEjscGZ);
        strcat (Pb0w7Cc, KOei8J2B);
    }
    cout << Pb0w7Cc;
    return (851 - 851);
}

