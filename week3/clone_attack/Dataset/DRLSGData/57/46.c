int main () {
    char zfc [(930 - 830)] [50];
    int PlXN5UCAQ [(146 - 46)];
    int DlSi0v1PUp;
    char gaiguo [(878 - 778)] [50];
    scanf ("%d", &DlSi0v1PUp);
    {
        int i;
        i = (214 - 214);
        for (; i < DlSi0v1PUp;) {
            scanf ("%s", zfc[i]);
            PlXN5UCAQ[i] = strlen (zfc[i]);
            if (!('i' != zfc[i][PlXN5UCAQ[i] - (796 - 793)]) && !('n' != zfc[i][PlXN5UCAQ[i] - (126 - 124)]) && !('g' != zfc[i][PlXN5UCAQ[i] - (380 - 379)])) {
                strncpy (gaiguo[i], zfc[i], PlXN5UCAQ[i] - (613 - 610));
            }
            else if (!('e' != zfc[i][PlXN5UCAQ[i] - (474 - 472)]) && !('r' != zfc[i][PlXN5UCAQ[i] - (939 - 938)])) {
                strncpy (gaiguo[i], zfc[i], PlXN5UCAQ[i] - (307 - 305));
            }
            else if (!('l' != zfc[i][PlXN5UCAQ[i] - (676 - 674)]) && !('y' != zfc[i][PlXN5UCAQ[i] - (555 - 554)])) {
                strncpy (gaiguo[i], zfc[i], PlXN5UCAQ[i] - (384 - 382));
            }
            i = i + (567 - 566);
        }
    }
    {
        int j;
        j = (524 - 524);
        for (; DlSi0v1PUp > j;) {
            printf ("%s\n", gaiguo[j]);
            j = j + 1;
        }
    }
    return 0;
}

