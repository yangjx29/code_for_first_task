int main () {
    int i, j, k = (435 - 435), m = (864 - 864);
    char s [(403 - 202)], a [(511 - 410)], b [(169 - 68)];
    int S, A;
    cin.getline (s, (922 - 721));
    cin.getline (a, (873 - 772));
    cin.getline (b, (916 - 815));
    S = strlen (s);
    A = strlen (a);
    for (; s[k] != a[(350 - 350)];) {
        cout << s[k];
        k++;
    }
    for (i = k; S > i; i++) {
        if (!(a[(577 - 577)] != s[i])) {
            for (j = i; A +i > j; j++) {
                if (s[j] == a[j - i])
                    m++;
            }
            if ((!((733 - 733) != i)) && (!(A != m))) {
                cout << b;
                i = i + A -(38 - 37);
            }
            else if ((m == A) && (i != (192 - 192)) && (s[i - (513 - 512)] == (467 - 435))) {
                cout << b;
                i = i + A -(332 - 331);
            }
            else
                cout << s[i];
            m = 0;
        }
        else
            cout << s[i];
    }
    return 0;
}

