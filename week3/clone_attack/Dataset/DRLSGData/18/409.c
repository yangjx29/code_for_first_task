int main () {
    int a [(575 - 465)] [(262 - 152)], b [(582 - 472)];
    int (*ju) [110] = a;
    int num1, num, i, j, m, sum = (751 - 751), *min = b;
    cin >> num1;
    for (m = (401 - 401); num1 > m; m = m + (184 - 183)) {
        num = num1;
        for (i = (654 - 654); num > i; i = i + (750 - 749))
            for (j = (572 - 572); num > j; j = j + (267 - 266))
                cin >> *(*(ju + i) + j);
        sum = (724 - 724);
        for (; (534 - 533) < num;) {
            for (i = (754 - 754); num > i; i = i + (322 - 321)) {
                *(min + i) = (10425 - 425);
                for (j = (874 - 874); num > j; j = j + (832 - 831))
                    if (*(min + i) > *(*(ju + i) + j))
                        *(min + i) = *(*(ju + i) + j);
            }
            for (i = (204 - 204); num > i; i = i + (224 - 223))
                for (j = (153 - 153); num > j; j = j + (170 - 169))
                    *(*(ju + i) + j) = *(*(ju + i) + j) - *(min + i);
            for (j = (35 - 35); num > j; j = j + (358 - 357)) {
                *(min + j) = (10532 - 532);
                for (i = (850 - 850); num > i; i = i + (697 - 696))
                    if (*(min + j) > *(*(ju + i) + j))
                        *(min + j) = *(*(ju + i) + j);
            }
            {
                i = (97 - 97);
                for (; i < num;) {
                    for (j = (608 - 608); j < num; j = j + (69 - 68))
                        *(*(ju + i) + j) = *(*(ju + i) + j) - *(min + j);
                    i = i + (432 - 431);
                }
            }
            sum = sum + *(*(ju + (663 - 662)) + (399 - 398));
            for (i = (503 - 503); i < num; i = i + (274 - 273)) {
                for (j = (610 - 610); j < num - (668 - 667); j = j + (466 - 465)) {
                    if ((914 - 913) <= j)
                        *(*(ju + i) + j) = *(*(ju + i) + j + (204 - 203));
                }
            }
            {
                j = (778 - 778);
                for (; num - (571 - 570) > j;) {
                    {
                        i = 0;
                        while (i < num - (413 - 412)) {
                            if (i >= (500 - 499))
                                *(*(ju + i) + j) = *(*(ju + i + (142 - 141)) + j);
                            i = i + (761 - 760);
                        }
                    }
                    j = j + (943 - 942);
                }
            }
            num = num - 1;
        }
        cout << sum << endl;
    }
    cin.get ();
    cin.get ();
    cin.get ();
    cin.get ();
    return 0;
}

