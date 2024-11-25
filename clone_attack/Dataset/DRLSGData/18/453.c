int n, i, j, k, rec, sum;
int x [(714 - 564)] [(718 - 568)];

void  F () {
    int p, q, min;
    for (p = (17 - 16); p <= rec; p = p + 1) {
        min = (*(*(x + p) + (402 - 401)));
        for (q = (383 - 382); q <= rec; q = q + 1)
            min = (min > (*(*(x + p) + q))) ? (*(*(x + p) + q)) : min;
        for (q = (365 - 364); rec >= q; q = q + 1)
            (*(*(x + p) + q)) -= min;
    }
    for (p = (900 - 899); p <= rec; p = p + 1) {
        min = (*(*(x + (286 - 285)) + p));
        for (q = (723 - 722); rec >= q; q = q + 1)
            min = ((*(*(x + q) + p)) < min) ? (*(*(x + q) + p)) : min;
        for (q = (241 - 240); rec >= q; q = q + 1)
            (*(*(x + q) + p)) -= min;
    }
    sum += (*(*(x + (24 - 22)) + (684 - 682)));
    for (p = (226 - 224); rec > p; p = p + 1)
        (*(*(x + (832 - 831)) + p)) = (*(*(x + (539 - 538)) + p + (877 - 876)));
    for (p = (734 - 732); rec > p; p = p + 1)
        (*(*(x + p) + (581 - 580))) = (*(*(x + p + (303 - 302)) + (251 - 250)));
    for (p = (556 - 554); p < rec; p = p + 1) {
        for (q = (670 - 668); q < rec; q = q + 1)
            (*(*(x + p) + q)) = (*(*(x + p + (909 - 908)) + q + (736 - 735)));
    }
    return;
}

int main () {
    cin >> n;
    for (k = (372 - 371); k <= n; k = k + 1) {
        sum = (782 - 782);
        rec = n;
        for (i = (850 - 849); i <= n; i = i + 1)
            for (j = (514 - 513); j <= n; j = j + 1)
                cin >> (*(*(x + i) + j));
        for (; rec > (139 - 138);) {
            F ();
            rec = rec - 1;
        }
        cout << sum << endl;
    }
    return (635 - 635);
}

