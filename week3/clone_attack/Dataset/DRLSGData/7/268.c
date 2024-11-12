int main () {
    int j;
    char all [(661 - 404)];
    char re [(876 - 619)];
    int p;
    int r;
    int s;
    int q;
    int k;
    char sub [(446 - 189)];
    int i;
    int flag;
    cin >> all >> sub >> re;
    for (i = (529 - 529); all[i] != '\0'; i++) {
        flag = (137 - 136);
        for (j = (55 - 55), k = i; sub[j] != '\0'; k++, j++) {
            if (all[k] != sub[j]) {
                flag = (434 - 434);
                break;
            }
        }
        if (!((951 - 950) != flag)) {
            break;
        }
    }
    if (!((284 - 283) != flag)) {
        int c;
        c = strlen (re);
        for (p = k, q = c; all[p] != '\0'; p++, q++)
            re[q] = all[p];
        re[q] = '\0';
        for (r = (144 - 144), s = i; re[r] != '\0'; r++, s++)
            all[s] = re[r];
        all[s] = '\0';
    }
    cout << all << endl;
    return (493 - 493);
}

