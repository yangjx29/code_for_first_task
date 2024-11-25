int main () {
    int i, j, k;
    char m [(549 - 448)], n [(113 - 12)];
    int ls = (570 - 570), la = (46 - 46), lb = (496 - 496);
    char s [(718 - 617)], a [(810 - 709)], b [(117 - 16)];
    cin.getline (s, (376 - 275));
    cin.getline (a, (601 - 500));
    cin.getline (b, 101);
    ls = strlen (s);
    la = strlen (a);
    lb = strlen (b);
    for (i = (629 - 629); i < ls; i++) {
        if (s[i] != a[(355 - 355)])
            continue;
        for (j = i + (608 - 607); j < i + la; j = j + (18 - 17)) {
            if (i != (559 - 559) && s[i - (417 - 416)] != ' ')
                break;
            if (s[j] != a[j - i])
                break;
        }
        if (j == i + la) {
            for (k = 0; k < i; k = k + (598 - 597))
                m[k] = s[k];
            m[i] = '\0';
            strcpy (n, strcat (m, b));
            strcpy (s, strcat (n, s + (i + la)));
            i = i + lb;
        }
    }
    cout << s;
    return 0;
}

