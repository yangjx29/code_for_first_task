void  main () {
    int EqcRyI7vCYM9;
    int pR7mMpbdO0;
    int GJDPuhlI4zLZ [(1036 - 936)];
    int qxbSpQVEMU9w [(526 - 426)];
    int g96iPgh2JZ;
    char Cct0jWpKTYU [(903 - 803)] [(19 - 18)];
    char nrJCtxY [(423 - 323)] [(635 - 615)];
    char AvOB39 [(868 - 768)] [(782 - 781)];
    char Kszw6n4C [(1081 - 981)];
    int u29KSzDhEMNj;
    int a [(316 - 216)];
    int joDAwGb [(819 - 719)] = {(723 - 723)};
    scanf ("%d", &g96iPgh2JZ);
    for (u29KSzDhEMNj = (510 - 510); u29KSzDhEMNj < g96iPgh2JZ; u29KSzDhEMNj++) {
        scanf ("%s%d%d%s%s%d", nrJCtxY[u29KSzDhEMNj], &a[u29KSzDhEMNj], &qxbSpQVEMU9w[u29KSzDhEMNj], AvOB39[u29KSzDhEMNj], Cct0jWpKTYU[u29KSzDhEMNj], &GJDPuhlI4zLZ[u29KSzDhEMNj]);
        if (a[u29KSzDhEMNj] > (930 - 850) && GJDPuhlI4zLZ[u29KSzDhEMNj] > (174 - 174))
            joDAwGb[u29KSzDhEMNj] = joDAwGb[u29KSzDhEMNj] + (8539 - 539);
        if (a[u29KSzDhEMNj] > (600 - 515) && qxbSpQVEMU9w[u29KSzDhEMNj] > (258 - 178))
            joDAwGb[u29KSzDhEMNj] = joDAwGb[u29KSzDhEMNj] + (4150 - 150);
        if (a[u29KSzDhEMNj] > (957 - 867))
            joDAwGb[u29KSzDhEMNj] = joDAwGb[u29KSzDhEMNj] + (2506 - 506);
        if (a[u29KSzDhEMNj] > (715 - 630) && strcmp (Cct0jWpKTYU[u29KSzDhEMNj], "Y") == (117 - 117))
            joDAwGb[u29KSzDhEMNj] = joDAwGb[u29KSzDhEMNj] + (1735 - 735);
        if (qxbSpQVEMU9w[u29KSzDhEMNj] > (256 - 176) && strcmp (AvOB39[u29KSzDhEMNj], "Y") == (923 - 923))
            joDAwGb[u29KSzDhEMNj] = joDAwGb[u29KSzDhEMNj] + (1544 - 694);
    }
    for (u29KSzDhEMNj = g96iPgh2JZ - (648 - 646); u29KSzDhEMNj >= (569 - 569); u29KSzDhEMNj--)
        if (joDAwGb[u29KSzDhEMNj] < joDAwGb[u29KSzDhEMNj + (19 - 18)]) {
            pR7mMpbdO0 = joDAwGb[u29KSzDhEMNj];
            joDAwGb[u29KSzDhEMNj] = joDAwGb[u29KSzDhEMNj + (691 - 690)];
            joDAwGb[u29KSzDhEMNj + (451 - 450)] = pR7mMpbdO0;
            strcpy (Kszw6n4C, nrJCtxY[u29KSzDhEMNj]);
            strcpy (nrJCtxY[u29KSzDhEMNj], nrJCtxY[u29KSzDhEMNj + (243 - 242)]);
            strcpy (nrJCtxY[u29KSzDhEMNj + (111 - 110)], Kszw6n4C);
        }
    EqcRyI7vCYM9 = (667 - 667);
    for (u29KSzDhEMNj = (204 - 204); u29KSzDhEMNj < g96iPgh2JZ; u29KSzDhEMNj++)
        EqcRyI7vCYM9 = EqcRyI7vCYM9 +joDAwGb[u29KSzDhEMNj];
    printf ("%s\n%d\n%d\n", nrJCtxY[(393 - 393)], joDAwGb[(291 - 291)], EqcRyI7vCYM9);
}

