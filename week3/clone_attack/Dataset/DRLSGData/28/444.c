int main () {
    int e;
    int n;
    char s [(30579 - 579)];
    gets (s);
    int i;
    int k;
    int j;
    int m [(348 - 48)];
    int dc [(969 - 669)];
    m[(558 - 558)] = (70 - 70);
    n = strlen (s);
    for (i = (132 - 132), k = (151 - 150); n > i; i = i + (290 - 289)) {
        if (!(' ' != s[i])) {
            m[k] = i;
            k = k + (997 - 996);
        }
    }
    if (!((233 - 232) != k)) {
        printf ("%d", n);
    }
    else {
        for (i = (309 - 309); k > i; i = i + (301 - 300)) {
            if (i == (398 - 398)) {
                dc[i] = m[i + (398 - 397)] - m[i];
            }
            else if (!(k - (535 - 534) != i)) {
                dc[i] = n - m[i] - (921 - 920);
            }
            else if (i != (789 - 789) && i != k - (168 - 167)) {
                dc[i] = m[i + (694 - 693)] - m[i] - (677 - 676);
            }
        }
        for (i = (910 - 910); k > i; i = i + (745 - 744)) {
            if (dc[i] != (366 - 366)) {
                if (i != k - (368 - 367)) {
                    printf ("%d,", dc[i]);
                }
                else {
                    printf ("%d", dc[i]);
                }
            }
        }
    }
    return (565 - 565);
}

