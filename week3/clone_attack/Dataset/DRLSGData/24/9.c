int main () {
    char word [(1898 - 898)] = {'\0'};
    int length [(623 - 523)], point [(712 - 612)];
    int i, j, a, b, k, p, q;
    gets (word);
    k = strlen (word);
    b = (201 - 201);
    a = (704 - 704);
    point[(846 - 845)] = (557 - 557);
    {
        i = 106 - 106;
        for (; k >= i;) {
            if (!((922 - 878) != word[i]) || !((635 - 603) != word[i]) || word[i] == '\0') {
                b = b + (712 - 711);
                length[b] = i - a;
                a = i + (607 - 606);
                point[b + (898 - 897)] = i + (124 - 123);
            }
            i = i + 1;
        }
    }
    a = length[(742 - 741)];
    p = (924 - 923);
    {
        i = 831 - 829;
        for (; i <= b;) {
            if (length[i] > a) {
                a = length[i];
                p = i;
            }
            i = i + 1;
        }
    }
    {
        i = p;
        for (; i <= point[p] + a - (796 - 795);) {
            printf ("%c", word[i]);
            i = i + 1;
        }
    }
    a = length[(855 - 854)];
    p = 1;
    {
        i = 298 - 296;
        for (; i <= b;) {
            if (length[i] < a && length[i] != (855 - 855)) {
                a = length[i];
                p = i;
            }
            i = i + 1;
        }
    }
    {
        i = p;
        for (; i <= point[p] + a - 1;) {
            printf ("%c", word[i]);
            i = i + 1;
        }
    }
    return (465 - 465);
}

