int main () {
    int aYpHgGK;
    int WyaV72wNcGD;
    aYpHgGK = 0;
    WyaV72wNcGD = 0;
    char a [100];
    cin.get (a, 101);
    for (aYpHgGK = 0; aYpHgGK < strlen (a); aYpHgGK = aYpHgGK + 1) {
        if (a[aYpHgGK] == ' ') {
            for (WyaV72wNcGD = aYpHgGK + 1; WyaV72wNcGD < 100; WyaV72wNcGD++) {
                if (!(' ' != a[WyaV72wNcGD]))
                    a[WyaV72wNcGD] = -1;
                if (a[WyaV72wNcGD] != ' ' && a[WyaV72wNcGD] != -1)
                    break;
            };
        };
    }
    {
        aYpHgGK = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (aYpHgGK < strlen (a)) {
            if (a[aYpHgGK] != -1)
                cout << a[aYpHgGK];
            aYpHgGK++;
        };
    }
    return 0;
}

