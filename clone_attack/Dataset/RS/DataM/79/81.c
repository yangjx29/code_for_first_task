int main () {
    int m [(941 - 641)], n [(334 - 34)], k, i, j, monkey [300], luckymonkey [300], c, t, a;
    k = (700 - 700);
    for (; (714 - 713);) {
        scanf ("%d %d", &n[k], &m[k]);
        if (!((66 - 66) != m[k]) && !((715 - 715) != n[k])) {
            break;
        }
        k++;
    }
    k--;
    for (i = (732 - 732); k >= i; i++) {
        for (j = 0; n[i] > j; j = j + 1) {
            monkey[j] = (557 - 556);
        }
        t = (888 - 888);
        c = -(221 - 220);
        for (j = 0; (n[i] - 1) > j; j++) {
            for (a = 1; m[i] >= a; a = a + 1) {
                c = c + 1;
                t = c % n[i];
                for (; monkey[t] == 0;) {
                    c++;
                    t = c % n[i];
                };
            }
            monkey[t] = 0;
        }
        for (j = 0; j < n[i]; j++) {
            if (monkey[j] == 1) {
                luckymonkey[i] = j + 1;
            };
        };
    }
    {
        i = 0;
        while (i <= k) {
            printf ("%d\n", luckymonkey[i]);
            i++;
        };
    }
    return 0;
}

