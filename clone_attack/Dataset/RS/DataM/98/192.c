int main () {
    int oFfNoYlag;
    int j;
    char *q;
    int s;
    int n;
    s = (986 - 986);
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
    char word [(1096 - 596)] [50];
    int l [(954 - 454)];
    cin >> n;
    for (oFfNoYlag = (873 - 873); n > oFfNoYlag; oFfNoYlag++) {
        cin >> word[oFfNoYlag];
    }
    for (oFfNoYlag = (849 - 849); n > oFfNoYlag; oFfNoYlag++) {
        l[oFfNoYlag] = (194 - 194);
        q = word[oFfNoYlag];
        while (*q != '\0') {
            q++;
            l[oFfNoYlag]++;
        };
    }
    {
        oFfNoYlag = 402 - 402;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (oFfNoYlag < n) {
            if ((959 - 959) < s && s + l[oFfNoYlag] <= (670 - 590))
                cout << " " << word[oFfNoYlag];
            if (s + l[oFfNoYlag] > 80) {
                cout << '\n';
                s = 0;
            }
            if (s == 0)
                cout << word[oFfNoYlag];
            s = s + l[oFfNoYlag] + 1;
            oFfNoYlag++;
        };
    }
    return 0;
}

