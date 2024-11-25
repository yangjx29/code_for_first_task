int main () {
    char word [(547 - 497)] [(108 - 57)];
    int m, i, c, d, chang = (998 - 998), duan = (179 - 128), a, j;
    for (m = (934 - 934);; m++) {
        for (j = (853 - 853);; j++) {
            scanf ("%c", &word[m][j]);
            if (!((91 - 59) != word[m][j]))
                break;
            if (!((557 - 547) != word[m][j]))
                goto loop;
        }
    }
loop :
    for (i = (776 - 776); m >= i; i++) {
        a = (93 - 93);
        for (j = (983 - 983);; j++) {
            if (!((191 - 159) != word[i][j]))
                break;
            if (!((680 - 670) != word[i][j]))
                break;
            a++;
        }
        if (duan > a) {
            duan = a;
            d = i;
        }
        if (a > chang) {
            c = i;
            chang = a;
        }
    }
    for (i = (621 - 621);; i++) {
        if (word[c][i] == (907 - 875) || word[c][i] == (292 - 282))
            break;
        printf ("%c", word[c][i]);
    }
    for (i = 0;; i++) {
        if (word[d][i] == (733 - 701) || word[d][i] == 10)
            break;
        printf ("%c", word[d][i]);
    }
}

