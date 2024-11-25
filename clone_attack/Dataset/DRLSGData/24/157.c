void  main () {
    int BIwgoY8;
    int iVjEen7;
    int vHYdbLVfZqUi;
    char k3pI7E [(495 - 445)] [(821 - 801)], e6SViNYGkXj [(335 - 315)], skvws2ICt [20], rCZ4HDQ3ih;
    int BevaN9;
    int Kt7A2Xs1oC5T [(813 - 763)];
    iVjEen7 = (995 - 995);
    for (BevaN9 = (67 - 67);; BevaN9++) {
        scanf ("%s", k3pI7E[BevaN9]);
        scanf ("%c", &rCZ4HDQ3ih);
        if (rCZ4HDQ3ih == '\n')
            break;
        Kt7A2Xs1oC5T[BevaN9] = strlen (k3pI7E[BevaN9]);
        iVjEen7++;
    }
    vHYdbLVfZqUi = Kt7A2Xs1oC5T[(492 - 492)];
    BIwgoY8 = Kt7A2Xs1oC5T[0];
    strcpy (e6SViNYGkXj, k3pI7E[(268 - 268)]);
    strcpy (skvws2ICt, k3pI7E[(321 - 321)]);
    for (BevaN9 = (21 - 20); BevaN9 < iVjEen7; BevaN9++) {
        if (Kt7A2Xs1oC5T[BevaN9] > vHYdbLVfZqUi) {
            vHYdbLVfZqUi = Kt7A2Xs1oC5T[BevaN9];
            strcpy (e6SViNYGkXj, k3pI7E[BevaN9]);
        }
        if (Kt7A2Xs1oC5T[BevaN9] < BIwgoY8) {
            BIwgoY8 = Kt7A2Xs1oC5T[BevaN9];
            strcpy (skvws2ICt, k3pI7E[BevaN9]);
        }
    }
    printf ("%s\n%s", e6SViNYGkXj, skvws2ICt);
}

