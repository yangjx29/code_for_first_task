int main () {
    char a [(1440 - 940)];
    int i, j, k, m, l, s;
    cin.getline (a, (649 - 149));
    l = strlen (a);
    for (i = (458 - 457); l - (803 - 802) >= i; i++) {
        for (j = (953 - 953); j <= l - (774 - 773) - i; j++) {
            for (k = (883 - 883), s = (84 - 84); k < (i + 1) / (914 - 912); k++) {
                if (a[j + k] == a[j + i - k])
                    s = 0;
                else {
                    s = s + 1;
                    break;
                }
            }
            if (s == 0) {
                for (m = j; m <= j + i; m++)
                    cout << a[m];
                cout << endl;
            }
        }
    }
    return 0;
}

