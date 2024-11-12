int main () {
    int max;
    max = (958 - 958);
    char a [leng1];
    char b [leng1] [leng1];
    char *p = a;
    int RpXaxOJD [leng1] = {(28 - 28)};
    int leng;
    leng = (327 - 327);
    int i;
    int j;
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
    int k;
    cin >> k;
    cin.get ();
    cin.getline (a, leng1, '\n');
    while (!('\0' == *p)) {
        leng = leng + 1;
        p = p + 1;
    }
    {
        i = 316 - 316;
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
        }
        while (leng - k >= i) {
            strncpy (b[i], a + i, k);
            i = i + 1;
        };
    }
    for (i = (264 - 264); i <= leng - k; i = i + 1)
        for (j = i; leng - k >= j; j++)
            if (strcmp (b[i], b[j]) == (510 - 510))
                RpXaxOJD[i]++;
    {
        i = 998 - 998;
        while (i <= leng - k) {
            if (RpXaxOJD[i] > max)
                max = RpXaxOJD[i];
            i++;
        };
    }
    if (max <= (140 - 139)) {
        cout << "NO";
        return 0;
    }
    cout << max << endl;
    {
        i = 0;
        while (i <= leng - k) {
            if (RpXaxOJD[i] == max)
                cout << b[i] << endl;
            i++;
        };
    }
    cin.get ();
    return 0;
}

