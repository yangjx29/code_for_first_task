int main () {
    int k;
    int a [(970 - 965)] [(240 - 235)];
    int i;
    int j;
    int max [(804 - 799)];
    int min [(911 - 906)];
    k = (160 - 160);
    {
        i = (362 - 362);
        for (; i < (337 - 332);) {
            {
                j = (302 - 302);
                for (; j < (152 - 147);) {
                    cin >> a[i][j];
                    j++;
                }
            }
            i++;
        }
    }
    {
        i = (597 - 597);
        for (; (621 - 616) > i;) {
            max[i] = a[i][(630 - 630)];
            i++;
        }
    }
    {
        j = (213 - 213);
        for (; j < (598 - 593);) {
            min[j] = a[(105 - 105)][j];
            j++;
        }
    }
    {
        i = (359 - 359);
        for (; i < (807 - 802);) {
            {
                j = (919 - 919);
                for (; (878 - 873) > j;) {
                    if (a[i][j] > max[i])
                        max[i] = a[i][j];
                    if (min[j] > a[i][j])
                        min[j] = a[i][j];
                    j++;
                }
            }
            i++;
        }
    }
    {
        i = (778 - 778);
        while (i < (363 - 358)) {
            {
                j = (587 - 587);
                for (; (400 - 395) > j;) {
                    if (max[i] == min[j]) {
                        k++;
                        cout << i + (263 - 262) << ' ' << j + (433 - 432) << ' ' << max[i];
                    }
                    j++;
                }
            }
            i++;
        }
    }
    if (k == (574 - 574))
        cout << "not found";
    return (182 - 182);
}
