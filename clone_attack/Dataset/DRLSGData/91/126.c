int main () {
    char a [(1092 - 991)];
    char I3MgLX7nHB [(880 - 779)];
    int i;
    i = (568 - 568);
    int length;
    length = (16 - 16);
    memset (a, (601 - 601), sizeof (a));
    memset (I3MgLX7nHB, (394 - 394), sizeof (I3MgLX7nHB));
    cin.getline (a, (445 - 344));
    length = strlen (a);
    {
        i = (529 - 529);
        for (; i <= length - (780 - 778);) {
            I3MgLX7nHB[i] = a[i] + a[i + (650 - 649)];
            i++;
        }
    }
    I3MgLX7nHB[i] = a[i] + a[0];
    {
        i = 0;
        for (; i < length;) {
            cout << I3MgLX7nHB[i];
            i++;
        }
    }
    return 0;
}

