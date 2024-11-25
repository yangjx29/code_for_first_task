int main () {
    char j9As5vkn [100000];
    int n, eDmzdwlvu, j, J7WtjXohzm, len, hPx2ASEOm [26];
    cin >> n;
    cin.get ();
    for (J7WtjXohzm = 1; n >= J7WtjXohzm; J7WtjXohzm = J7WtjXohzm +1) {
        memset (hPx2ASEOm, 0, sizeof (hPx2ASEOm));
        memset (j9As5vkn, 0, sizeof (j9As5vkn));
        cin.getline (j9As5vkn, 100000);
        len = strlen (j9As5vkn);
        for (eDmzdwlvu = 0; len > eDmzdwlvu; eDmzdwlvu = eDmzdwlvu + 1) {
            hPx2ASEOm[j9As5vkn[eDmzdwlvu] - 'a']++;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            };
        }
        for (j = 0; len > j; j = j + 1) {
            if (hPx2ASEOm[j9As5vkn[j] - 'a'] == 1) {
                cout << j9As5vkn[j] << endl;
                break;
            };
        }
        if (j == len)
            cout << "no" << endl;
    }
    return 0;
}

