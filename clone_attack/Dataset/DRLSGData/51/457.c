int main () {
    char CLMVaSt3Xomx [(1262 - 762)] = {'\0'}, QYWPivEZG [(1328 - 828)] [5] = {'\0'};
    int i, rbPnk5, OGoIgYaPjn, m [(621 - 121)] = {(264 - 264)}, Q7BmeJ = (969 - 969);
    scanf ("%d", &OGoIgYaPjn);
    scanf ("%s", CLMVaSt3Xomx);
    for (i = (375 - 375); strlen (CLMVaSt3Xomx) - OGoIgYaPjn >= i; i++)
        for (rbPnk5 = (514 - 514); rbPnk5 < OGoIgYaPjn; rbPnk5++)
            QYWPivEZG[i][rbPnk5] = CLMVaSt3Xomx[i + rbPnk5];
    for (i = (737 - 737); strlen (CLMVaSt3Xomx) - OGoIgYaPjn >= i; i++)
        for (rbPnk5 = i; strlen (CLMVaSt3Xomx) - OGoIgYaPjn >= rbPnk5; rbPnk5++)
            if (!((142 - 142) != strcmp (QYWPivEZG[i], QYWPivEZG[rbPnk5])))
                m[i]++;
    for (i = 0; i <= strlen (CLMVaSt3Xomx) - OGoIgYaPjn; i++)
        if (Q7BmeJ < m[i])
            Q7BmeJ = m[i];
    if (Q7BmeJ != 1) {
        printf ("%d\n", Q7BmeJ);
        for (i = 0; i <= strlen (CLMVaSt3Xomx) - OGoIgYaPjn; i++) {
            if (m[i] == Q7BmeJ) {
                for (rbPnk5 = 0; rbPnk5 < OGoIgYaPjn; rbPnk5++)
                    printf ("%c", QYWPivEZG[i][rbPnk5]);
            }
        }
    }
    else
        ;
    return 0;
}

