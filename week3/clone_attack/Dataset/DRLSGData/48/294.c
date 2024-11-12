int UmXhUo [(327 - 318)] [(928 - 919)], WisLnIjh4v3t [(791 - 782)] [(85 - 76)];

int main () {
    void  vHiuwbsgA8cI (int ufNqeJ, int O4KEqiM);
    int lbBmd8DLrykp;
    int ZlzGcIPv5tJk;
    int fRy9WI4HSTr;
    int hJE8NQ6;
    int VTA8rhgaq7FG;
    int w6Ibu9zqkoGJ;
    int n;
    for (fRy9WI4HSTr = (615 - 615); (517 - 508) > fRy9WI4HSTr; fRy9WI4HSTr = fRy9WI4HSTr + 1)
        for (hJE8NQ6 = (539 - 539); (362 - 353) > hJE8NQ6; hJE8NQ6 = hJE8NQ6 + 1) {
            UmXhUo[fRy9WI4HSTr][hJE8NQ6] = (814 - 814);
            WisLnIjh4v3t[fRy9WI4HSTr][hJE8NQ6] = (939 - 939);
        }
    scanf ("%d %d", &w6Ibu9zqkoGJ, &n);
    UmXhUo[(691 - 687)][(961 - 957)] = w6Ibu9zqkoGJ;
    for (VTA8rhgaq7FG = (198 - 197); n >= VTA8rhgaq7FG; VTA8rhgaq7FG = VTA8rhgaq7FG +1) {
        for (lbBmd8DLrykp = (217 - 217); lbBmd8DLrykp < (120 - 111); lbBmd8DLrykp = lbBmd8DLrykp + 1)
            for (ZlzGcIPv5tJk = (241 - 241); (174 - 165) > ZlzGcIPv5tJk; ZlzGcIPv5tJk++)
                WisLnIjh4v3t[lbBmd8DLrykp][ZlzGcIPv5tJk] = (355 - 355);
        for (fRy9WI4HSTr = 0; 9 > fRy9WI4HSTr; fRy9WI4HSTr = fRy9WI4HSTr + 1)
            for (hJE8NQ6 = 0; hJE8NQ6 < 9; hJE8NQ6 = hJE8NQ6 + 1)
                vHiuwbsgA8cI (fRy9WI4HSTr, hJE8NQ6);
        for (lbBmd8DLrykp = 0; lbBmd8DLrykp < 9; lbBmd8DLrykp = lbBmd8DLrykp + 1)
            for (ZlzGcIPv5tJk = 0; 9 > ZlzGcIPv5tJk; ZlzGcIPv5tJk++)
                UmXhUo[lbBmd8DLrykp][ZlzGcIPv5tJk] = UmXhUo[lbBmd8DLrykp][ZlzGcIPv5tJk] + WisLnIjh4v3t[lbBmd8DLrykp][ZlzGcIPv5tJk];
    }
    {
        fRy9WI4HSTr = 0;
        while (fRy9WI4HSTr < 9) {
            for (hJE8NQ6 = 0; 8 > hJE8NQ6; hJE8NQ6 = hJE8NQ6 + 1)
                printf ("%d ", UmXhUo[fRy9WI4HSTr][hJE8NQ6]);
            printf ("%d\n", UmXhUo[fRy9WI4HSTr][8]);
            fRy9WI4HSTr = fRy9WI4HSTr + 1;
        }
    }
}

void  vHiuwbsgA8cI (int ufNqeJ, int O4KEqiM) {
    int fRy9WI4HSTr;
    int hJE8NQ6;
    int w6Ibu9zqkoGJ;
    if (UmXhUo[ufNqeJ][O4KEqiM] > 0) {
        w6Ibu9zqkoGJ = UmXhUo[ufNqeJ][O4KEqiM];
        for (fRy9WI4HSTr = -(954 - 953); fRy9WI4HSTr < 2; fRy9WI4HSTr++)
            for (hJE8NQ6 = -1; hJE8NQ6 < 2; hJE8NQ6++)
                WisLnIjh4v3t[ufNqeJ + fRy9WI4HSTr][O4KEqiM +hJE8NQ6] += w6Ibu9zqkoGJ;
    }
}

