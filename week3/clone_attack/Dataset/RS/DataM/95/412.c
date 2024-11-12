int main () {
    char a1 [80];
    char lcydbSNsY [80];
    cin.getline (a1, 80);
    cin.getline (lcydbSNsY, 80);
    for (int i = 0;
    80 >= i; i++) {
        if (a1[i] >= 65 && a1[i] <= 90)
            a1[i] = a1[i] + 32;
    }
    for (int i = 0;
    i <= 80; i++) {
        if (65 <= lcydbSNsY[i] && lcydbSNsY[i] <= 90)
            lcydbSNsY[i] = lcydbSNsY[i] + 32;
    }
    if (strcmp (a1, lcydbSNsY) == -1) {
        cout << '<';
    }
    else if (strcmp (a1, lcydbSNsY) == 0) {
        cout << '=';
    }
    else if (strcmp (a1, lcydbSNsY) == 1) {
        cout << '>';
    }
    else {
    }
    return 0;
}

