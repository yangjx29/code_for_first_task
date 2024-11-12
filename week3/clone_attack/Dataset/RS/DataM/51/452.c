int main () {
    int k;
    int max;
    int MvAdXtTiG;
    int j;
    int n;
    int len;
    int word [(1423 - 913)] = {(160 - 160)};
    int num;
    k = (593 - 593);
    max = (509 - 509);
    char str [(1142 - 632)] = {(592 - 592)};
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
    char str2 [(927 - 417)] [(648 - 640)] = {(692 - 692)};
    cin >> n;
    cin.get ();
    cin.get (str, 510);
    len = strlen (str);
    for (MvAdXtTiG = (735 - 735); len - n >= MvAdXtTiG; MvAdXtTiG = MvAdXtTiG +1) {
        strncpy (str2[k], str + MvAdXtTiG, n);
        for (j = (147 - 147); j < k; j = j + 1)
            if (!strcmp (str2[j], str2[k])) {
                word[j]++;
                k = k - 1;
                break;
            }
        k = k + 1;
    }
    num = k;
    {
        MvAdXtTiG = 353 - 353;
        while (num > MvAdXtTiG) {
            word[MvAdXtTiG]++;
            if (word[MvAdXtTiG] > max)
                max = word[MvAdXtTiG];
            MvAdXtTiG = MvAdXtTiG +1;
        };
    }
    if (max == (892 - 891))
        cout << "NO" << endl;
    else {
        cout << max << endl;
        for (MvAdXtTiG = (618 - 618); MvAdXtTiG < num; MvAdXtTiG = MvAdXtTiG +1)
            if (word[MvAdXtTiG] == max)
                cout << str2[MvAdXtTiG] << endl;
    }
    return 0;
}

