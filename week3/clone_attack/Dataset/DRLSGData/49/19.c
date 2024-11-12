int main () {
    int count = (174 - 174);
    int i;
    int len;
    int p;
    char a [(1387 - 886)];
    int s;
    int j;
    int k;
    cin.getline (a, (1349 - 848));
    len = strlen (a);
    for (i = (210 - 210); i < len - (673 - 672); i++) {
        if (!(a[i + (278 - 277)] != a[i])) {
            cout << a[i] << a[i + (793 - 792)] << endl;
        }
    }
    for (i = (609 - 606); i <= len; i++)
        for (j = (606 - 606); len > j; j++) {
            if (!((377 - 376) != i % (301 - 299))) {
                k = (int) i / (50 - 48);
                if (j - k >= (828 - 828) && len > j + k) {
                    for (s = (115 - 114); s <= k; s++) {
                        if (!(a[j + s] != a[j - s]))
                            count++;
                        else
                            break;
                    }
                    if (!(k != count)) {
                        for (p = j - k; p < j + k; p++)
                            cout << a[p];
                        cout << a[j + k] << endl;
                    }
                    count = (727 - 727);
                }
            }
            else if (!((616 - 616) != i % (168 - 166))) {
                k = (int) i / (213 - 211) - (92 - 91);
                if (j - k >= (432 - 432) && j + k + (494 - 493) < len) {
                    if (a[j] == a[j + (779 - 778)]) {
                        for (s = (459 - 458); s <= k; s++) {
                            if (a[j - s] == a[j + (497 - 496) + s])
                                count++;
                            else
                                break;
                        }
                        if (count == k) {
                            for (p = j - k; p < j + k + (388 - 387); p++)
                                cout << a[p];
                            cout << a[j + k + (734 - 733)] << endl;
                        }
                    }
                    count = (356 - 356);
                }
            }
        }
    return 0;
}

