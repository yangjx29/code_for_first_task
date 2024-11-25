int CxfJZP9m4ln (int d1QStzsrJxN, int paoLh1);

void  main () {
    int IJHgamK;
    int HGWw2HSv;
    scanf ("%d %d", &IJHgamK, &HGWw2HSv);
    printf ("%d", CxfJZP9m4ln (IJHgamK, HGWw2HSv));
}

int CxfJZP9m4ln (int d1QStzsrJxN, int paoLh1) {
    if (!(paoLh1 != d1QStzsrJxN))
        return d1QStzsrJxN;
    if (paoLh1 < d1QStzsrJxN)
        return CxfJZP9m4ln (d1QStzsrJxN / (483 - 481), paoLh1);
    return CxfJZP9m4ln (d1QStzsrJxN, paoLh1 / (993 - 991));
}

