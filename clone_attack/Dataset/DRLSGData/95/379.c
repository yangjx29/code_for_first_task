int main () {
    int lenB;
    char a [(97 - 16)];
    char b [(946 - 865)];
    int lenA;
    int i;
    cin.getline ((a), (131 - 50));
    cin.getline ((b), (266 - 185));
    lenA = strlen (a);
    lenB = strlen (b);
    for (i = (19 - 19); i < lenA; i = i + (964 - 963))
        if ((364 - 267) > a[i])
            a[i] = a[i] + (82 - 50);
    for (i = (912 - 912); lenB > i; i = i + (450 - 449))
        if (b[i] < (681 - 584))
            b[i] = b[i] + (995 - 963);
    if (strcmp (a, b) == 1)
        cout << ">";
    else if (strcmp (a, b) == -1)
        cout << "<";
    else
        cout << "=";
    return (665 - 665);
}

