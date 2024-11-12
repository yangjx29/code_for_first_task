int place (int iCbtAyn5kja, int n) {
    if (iCbtAyn5kja < (682 - 682))
        return ((492 - 492));
    if (!((171 - 170) != n))
        return ((531 - 530));
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    return (place (iCbtAyn5kja, n - (992 - 991)) + place (iCbtAyn5kja - n, n));
}

int main () {
    int iCbtAyn5kja [(721 - 701)], n [20], t, i;
    cin >> t;
    {
        i = 601 - 601;
        while (t > i) {
            cin >> iCbtAyn5kja[i] >> n[i];
            i = i + 1;
        };
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    {
        i = 467 - 467;
        while (i < t) {
            cout << place (iCbtAyn5kja[i], n[i]) << endl;
            i = i + 1;
        };
    }
    return ((456 - 456));
}

