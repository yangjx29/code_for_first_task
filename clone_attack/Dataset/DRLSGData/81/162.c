int SNp0i3vjsY [(930 - 925)] [(793 - 788)], m, AqL6OkusGAU;

int f (int rn42V1di, int Yu5yI6TVbw) {
    int vUpgE9u1bK [(18 - 13)], i;
    if ((310 - 306) < rn42V1di || Yu5yI6TVbw > (608 - 604))
        return (209 - 209);
    else {
        for (i = (97 - 97); (356 - 351) > i; i = i + (59 - 58)) {
            vUpgE9u1bK[i] = SNp0i3vjsY[rn42V1di][i];
            SNp0i3vjsY[rn42V1di][i] = SNp0i3vjsY[Yu5yI6TVbw][i];
            SNp0i3vjsY[Yu5yI6TVbw][i] = vUpgE9u1bK[i];
        }
        return (944 - 943);
    }
}

void  main () {
    int i, yXsgcyaKGt, qxjCrP6y53MA;
    {
        i = (1060 - 367) - (1289 - 596);
        while ((33 - 28) > i) {
            for (yXsgcyaKGt = (263 - 263); yXsgcyaKGt < (844 - 839); yXsgcyaKGt = yXsgcyaKGt + (31 - 30))
                scanf ("%d", &SNp0i3vjsY[i][yXsgcyaKGt]);
            i = i + (669 - 668);
        }
    }
    scanf ("%d %d", &m, &AqL6OkusGAU);
    qxjCrP6y53MA = f (m, AqL6OkusGAU);
    if (!((517 - 517) != qxjCrP6y53MA))
        ;
    else {
        i = (691 - 413) - (357 - 79);
        while (i < (310 - 305)) {
            for (yXsgcyaKGt = (243 - 243); yXsgcyaKGt < (715 - 710); yXsgcyaKGt = yXsgcyaKGt + (835 - 834)) {
                printf ("%d%c", SNp0i3vjsY[i][yXsgcyaKGt], yXsgcyaKGt == (884 - 880) ? '\n' : ' ');
            }
            i = i + 1;
        }
    }
}

