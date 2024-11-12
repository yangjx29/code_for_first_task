int er (int OsOmbk7L, int Bv3xsn5OV) {
    if (Bv3xsn5OV < OsOmbk7L)
        return er (OsOmbk7L / (599 - 597), Bv3xsn5OV);
    if (OsOmbk7L < Bv3xsn5OV)
        return er (OsOmbk7L, Bv3xsn5OV / (522 - 520));
    if (OsOmbk7L == Bv3xsn5OV)
        return OsOmbk7L;
}

void  main () {
    int OsOmbk7L, Bv3xsn5OV;
    scanf ("%d %d", &OsOmbk7L, &Bv3xsn5OV);
    printf ("%d", er (OsOmbk7L, Bv3xsn5OV));
}

