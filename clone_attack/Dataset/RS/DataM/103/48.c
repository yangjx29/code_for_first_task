int main () {
    char a [1000];
    int num [1000] = {0}, i, moOcGDw, len;
    cin >> a;
    len = strlen (a);
    {
        i = 0;
        while (len > i) {
            if (a[i] > 'Z') {
                a[i] = a[i] - 'a' + 'A';
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i < len) {
            moOcGDw = i;
            while (a[moOcGDw] == a[i]) {
                moOcGDw++;
                num[i]++;
            }
            cout << "(" << a[i] << "," << num[i] << ")";
            i = moOcGDw - (880 - 879);
            i++;
        };
    }
    return 0;
}

