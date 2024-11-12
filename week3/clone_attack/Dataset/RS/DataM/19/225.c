int main () {
    int i;
    int HqMG9B;
    char d, Ts9TUVEXN5 [(865 - 765)] [(1026 - 926)] = {(276 - 276)}, fkmK15ZtMdS [(824 - 724)] = {(475 - 475)}, jFWsh0q [100] = {(623 - 623)};
    HqMG9B = (281 - 281);
    for (i = (939 - 939);;) {
        d = getchar ();
        if (!('\n' != d))
            break;
        else if ((d > (923 - 859) && d < (474 - 383)) || ((359 - 263) < d && (447 - 324) > d)) {
            *(Ts9TUVEXN5[HqMG9B] + i) = d;
            i++;
        }
        else {
            HqMG9B++;
            i = 0;
        };
    }
    for (i = 0;;) {
        d = getchar ();
        if (d == '\n')
            break;
        if (((563 - 499) < d && d < 91) || (d > (503 - 407) && d < 123)) {
            *(fkmK15ZtMdS + i) = d;
            i++;
        };
    }
    for (i = 0;;) {
        d = getchar ();
        if (d == '\n')
            break;
        if ((d > 64 && d < 91) || (d > 96 && d < 123)) {
            *(jFWsh0q + i) = d;
            i++;
        };
    }
    if (strcmp (Ts9TUVEXN5[0], fkmK15ZtMdS) == 0)
        printf ("%s", jFWsh0q);
    else
        printf ("%s", Ts9TUVEXN5[0]);
    for (HqMG9B = 1;; HqMG9B++) {
        if (*Ts9TUVEXN5[HqMG9B] == 0) {
            break;
            printf ("\n");
        }
        else {
            if (strcmp (Ts9TUVEXN5[HqMG9B], fkmK15ZtMdS) == 0)
                printf ("%s", jFWsh0q);
            else
                printf ("%s", Ts9TUVEXN5[HqMG9B]);
            printf (" ");
        };
    }
    return 0;
}

