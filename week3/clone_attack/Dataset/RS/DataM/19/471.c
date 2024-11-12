int main () {
    int cFMdAb3e = (250 - 250), Mvh0CnHRUDwK = 0, n, JZAK8a, p;
    char XLmkI9c [(218 - 118)], a [(825 - 725)], vljUu6SA2bsI [(672 - 572)];
    gets (XLmkI9c);
    gets (a);
    gets (vljUu6SA2bsI);
    char MlTo5YciRd [(1018 - 918)] [100];
    n = strlen (XLmkI9c);
    {
        JZAK8a = 0;
        while (JZAK8a < n) {
            if (XLmkI9c[JZAK8a] != ' ') {
                MlTo5YciRd[cFMdAb3e][Mvh0CnHRUDwK] = XLmkI9c[JZAK8a];
                Mvh0CnHRUDwK = Mvh0CnHRUDwK +1;
            }
            else {
                MlTo5YciRd[cFMdAb3e][Mvh0CnHRUDwK] = '\0';
                Mvh0CnHRUDwK = 0;
                cFMdAb3e = cFMdAb3e + 1;
            }
            JZAK8a++;
        };
    }
    MlTo5YciRd[cFMdAb3e][Mvh0CnHRUDwK] = '\0';
    cFMdAb3e = cFMdAb3e + 1;
    for (p = 0; p < cFMdAb3e; p = p + 1) {
        if (strcmp (MlTo5YciRd[p], a) == 0) {
            strcpy (MlTo5YciRd[p], vljUu6SA2bsI);
        };
    }
    for (p = 0; p < cFMdAb3e - 1; p++) {
        printf ("%s ", MlTo5YciRd[p]);
    }
    printf ("%s", MlTo5YciRd[cFMdAb3e - 1]);
    return 0;
}

