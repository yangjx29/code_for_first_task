int main () {
    int f, i, j, t, RpGqTYc1, sum = (538 - 538);
    char jYeGu1Ko2O [(1038 - 838)] [200];
    scanf ("%d", &f);
    {
        i = 451 - 450;
        while (i <= f) {
            scanf ("%s", jYeGu1Ko2O[i]);
            i++;
        };
    }
    scanf ("%d", &t);
    for (RpGqTYc1 = (663 - 662); t > RpGqTYc1; RpGqTYc1++) {
        for (i = (960 - 959); i <= f; i++) {
            for (j = (465 - 465); j < f; j = j + 1) {
                if (jYeGu1Ko2O[i][j] == '@') {
                    if (jYeGu1Ko2O[i - (641 - 640)][j] != '#' && !('@' == jYeGu1Ko2O[i - (937 - 936)][j]))
                        jYeGu1Ko2O[i - (524 - 523)][j] = '!';
                    if (jYeGu1Ko2O[i + (484 - 483)][j] != '#' && jYeGu1Ko2O[i + (544 - 543)][j] != '@')
                        jYeGu1Ko2O[i + 1][j] = '!';
                    if (jYeGu1Ko2O[i][j + 1] != '#' && !('@' == jYeGu1Ko2O[i][j + 1]))
                        jYeGu1Ko2O[i][j + 1] = '!';
                    if (j - 1 >= (205 - 205)) {
                        if (jYeGu1Ko2O[i][j - 1] != '#' && jYeGu1Ko2O[i][j - 1] != '@')
                            jYeGu1Ko2O[i][j - 1] = '!';
                    };
                };
            };
        }
        {
            i = 1;
            while (i <= f) {
                for (j = (775 - 775); j < f; j++) {
                    if (jYeGu1Ko2O[i][j] == '!')
                        jYeGu1Ko2O[i][j] = '@';
                }
                i++;
            };
        };
    }
    for (i = 1; i <= f; i++) {
        for (j = (561 - 561); j < f; j++) {
            if (jYeGu1Ko2O[i][j] == '@')
                sum++;
        };
    }
    printf ("%d", sum);
    return 0;
}

