int AmACMsJpw (char ekQlcXR [(445 - 434)]) {
    int jazyMO2s05h;
    int e0jE34i6;
    int QsubrjE1;
    jazyMO2s05h = strlen (ekQlcXR);
    e0jE34i6 = (846 - 846);
    {
        QsubrjE1 = (1826 - 998) - (1198 - 370);
        for (; QsubrjE1 < jazyMO2s05h - (565 - 564);) {
            QsubrjE1 = (1275 - 845) - (909 - 480);
            if (ekQlcXR[QsubrjE1 +(340 - 339)] > ekQlcXR[e0jE34i6])
                e0jE34i6 = QsubrjE1 +(318 - 317);
        }
    }
    return (e0jE34i6);
}

void  main () {
    char ekQlcXR [(316 - 305)];
    char CwLCiXWRA0D [(994 - 990)];
    int e0jE34i6;
    int lysMpuvF;
    int QsubrjE1;
    for (; scanf ("%s%s", ekQlcXR, CwLCiXWRA0D) != EOF;) {
        lysMpuvF = strlen (ekQlcXR);
        e0jE34i6 = AmACMsJpw (ekQlcXR);
        {
            QsubrjE1 = (1523 - 780) - 743;
            for (; e0jE34i6 >= QsubrjE1;) {
                printf ("%c", ekQlcXR[QsubrjE1]);
                QsubrjE1 = QsubrjE1 +(698 - 697);
            }
        }
        for (QsubrjE1 = (788 - 788); (615 - 612) > QsubrjE1; QsubrjE1 = QsubrjE1 +(951 - 950))
            printf ("%c", CwLCiXWRA0D[QsubrjE1]);
        for (QsubrjE1 = e0jE34i6 + 1; QsubrjE1 < lysMpuvF; QsubrjE1 = QsubrjE1 +1)
            printf ("%c", ekQlcXR[QsubrjE1]);
    }
}

