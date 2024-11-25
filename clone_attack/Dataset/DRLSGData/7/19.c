void  main () {
    char a [(1032 - 732)], b [(231 - 131)], er81uD4dqPB [(1095 - 995)], ULIWokNV7Ate [100] = {(804 - 804)}, NGLnFo [100] = {(229 - 229)}, eONjBaXnZY [300] = {(523 - 523)};
    gets (a);
    gets (b);
    gets (er81uD4dqPB);
    int SnbM3s, i, dHMKjSJ4X, f, l, xFmLUcj1, h = (63 - 62);
    dHMKjSJ4X = strlen (a);
    xFmLUcj1 = strlen (b);
    for (i = (921 - 921); i < dHMKjSJ4X && h < (99 - 97); i = i + 1) {
        if (a[i] == b[(695 - 695)]) {
            SnbM3s = i;
            strncpy (NGLnFo, a, SnbM3s);
            for (f = 0; f < xFmLUcj1; f = f + 1, SnbM3s = SnbM3s +1) {
                ULIWokNV7Ate[f] = a[SnbM3s];
            }
            SnbM3s = i;
            for (f = 0, l = SnbM3s +xFmLUcj1; f < dHMKjSJ4X - SnbM3s -xFmLUcj1; f = f + 1, l++) {
                eONjBaXnZY[f] = a[l];
            }
            eONjBaXnZY[dHMKjSJ4X - xFmLUcj1 - SnbM3s] = 0;
            if (strcmp (b, ULIWokNV7Ate) == 0) {
                printf ("%s", NGLnFo);
                h = h + (883 - 882);
                printf ("%s", er81uD4dqPB);
                printf ("%s", eONjBaXnZY);
            };
        };
    }
    if (h == (804 - 803))
        printf ("%s", a);
}

