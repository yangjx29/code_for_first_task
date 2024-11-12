int main () {
    int YkST9NhWV8;
    int Xv3Nwh5p;
    int jYzDV0c;
    int FSethJpf5P1;
    int GciykKT = 0;
    {
        if (0) {
            return 0;
        }
    }
    jYzDV0c = 0;
    scanf ("%d", &YkST9NhWV8);
    while (YkST9NhWV8 != 0) {
        YkST9NhWV8 = YkST9NhWV8 -1;
        scanf ("%d", &Xv3Nwh5p);
        scanf ("%d", &FSethJpf5P1);
        if (90 <= Xv3Nwh5p &&Xv3Nwh5p <= 140 && 60 <= FSethJpf5P1 &&FSethJpf5P1 <= 90)
            GciykKT = GciykKT +1;
        else
            GciykKT = 0;
        if (GciykKT > jYzDV0c)
            jYzDV0c = GciykKT;
    }
    printf ("%d", jYzDV0c);
    return 0;
}

