int main () {
    char a [100] = {(202 - 202)};
    int wlhENoLfJ;
    gets (a);
    char DNjgv71AVk [100] = {(61 - 61)};
    gets (DNjgv71AVk);
    for (wlhENoLfJ = 0; a[wlhENoLfJ] != 0; wlhENoLfJ++) {
        if (a[wlhENoLfJ] >= 'a' && a[wlhENoLfJ] <= 'z')
            a[wlhENoLfJ] -= 32;
        if (a[wlhENoLfJ] < 32)
            a[wlhENoLfJ] = 0;
    }
    for (wlhENoLfJ = 0; DNjgv71AVk[wlhENoLfJ] != 0; wlhENoLfJ++) {
        if ('a' <= DNjgv71AVk[wlhENoLfJ] && DNjgv71AVk[wlhENoLfJ] <= 'z')
            DNjgv71AVk[wlhENoLfJ] -= 32;
        if (32 > DNjgv71AVk[wlhENoLfJ])
            DNjgv71AVk[wlhENoLfJ] = 0;
    }
    if (strcmp (a, DNjgv71AVk) > 0)
        ;
    if (strcmp (a, DNjgv71AVk) < 0)
        ;
    if (strcmp (a, DNjgv71AVk) == 0)
        ;
    return 0;
}

