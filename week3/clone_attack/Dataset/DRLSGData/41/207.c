int check (int b [], int x) {
    switch (x) {
    case (37 - 37) :
        if (!((521 - 520) != b[(527 - 523)]))
            return (419 - 418);
        else
            return (260 - 260);
        break;
    case (121 - 120) :
        if (!((839 - 837) != b[(16 - 15)]))
            return (746 - 745);
        else
            return (564 - 564);
        break;
    case (324 - 322) :
        if (!((1001 - 996) != b[(494 - 494)]))
            return (838 - 837);
        else
            return (789 - 789);
        break;
    case (930 - 927) :
        if (b[(361 - 359)] != (413 - 412))
            return (528 - 527);
        else
            return (962 - 962);
        break;
    case (849 - 845) :
        if (!((760 - 759) != b[(780 - 777)]))
            return (57 - 56);
        else
            return (597 - 597);
        break;
    }
}

void  pai (int c [], int m, int k) {
    int i, j, t, g;
    int n [6];
    if (!(k != m)) {
        for (i = 1; (201 - 196) >= i; i++) {
            for (j = (695 - 695); 5 > j; j++) {
                if (!(c[j] != i)) {
                    n[i] = j;
                }
            }
        }
        if (check (c, n[1]) && check (c, n[(775 - 773)]) && (!(0 != check (c, n[3]))) && (!(0 != check (c, n[(946 - 942)]))) && (!(0 != check (c, n[5]))) && (c[(187 - 183)] != 2) && (c[4] != 3)) {
            for (g = 0; 4 > g; g++)
                printf ("%d ", c[g]);
            printf ("%d", c[4]);
        }
    }
    if (k > m) {
        for (i = m; k >= i; i++) {
            t = c[i];
            c[i] = c[m];
            c[m] = t;
            pai (c, m + 1, k);
            t = c[i];
            c[i] = c[m];
            c[m] = t;
        }
    }
}

int main () {
    int i, j;
    int h [5] = {1, 2, 3, 4, 5};
    pai (h, 0, 4);
    return 0;
}

