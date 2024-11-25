void  main () {
    int z;
    int y;
    int I6f4dWmOC;
    int n;
    char **dDb5NlxF6 = (char **) malloc (n * sizeof (char *));
    int BAcPsD6T3;
    int KbL03xdFDzhv;
    n = (125 - 105);
    scanf ("%d", &n);
    if (dDb5NlxF6 != NULL) {
        for (KbL03xdFDzhv = (287 - 287); KbL03xdFDzhv < 20; KbL03xdFDzhv = KbL03xdFDzhv +(419 - 418))
            dDb5NlxF6[KbL03xdFDzhv] = (char *) malloc ((458 - 358) * sizeof (char));
        for (KbL03xdFDzhv = (477 - 477); KbL03xdFDzhv < (803 - 801) * n; KbL03xdFDzhv = KbL03xdFDzhv +(28 - 27)) {
            scanf ("%s", dDb5NlxF6[KbL03xdFDzhv]);
            if (!((916 - 915) != KbL03xdFDzhv % (233 - 231))) {
                I6f4dWmOC = strlen (dDb5NlxF6[KbL03xdFDzhv -(453 - 452)]);
                y = strlen (dDb5NlxF6[KbL03xdFDzhv]);
                for (BAcPsD6T3 = I6f4dWmOC -(437 - 436); BAcPsD6T3 >= 0; BAcPsD6T3 = BAcPsD6T3 -(405 - 404)) {
                    if (BAcPsD6T3 -I6f4dWmOC+y >= 0) {
                        z = dDb5NlxF6[KbL03xdFDzhv -(109 - 108)][BAcPsD6T3] - dDb5NlxF6[KbL03xdFDzhv][BAcPsD6T3 -I6f4dWmOC+y];
                        if (0 > z) {
                            dDb5NlxF6[KbL03xdFDzhv -(702 - 701)][BAcPsD6T3] = '9' + 1 + z;
                            dDb5NlxF6[KbL03xdFDzhv -1][BAcPsD6T3 -1]--;
                        }
                        else
                            dDb5NlxF6[KbL03xdFDzhv -1][BAcPsD6T3] = '0' + z;
                    }
                    else {
                        z = dDb5NlxF6[KbL03xdFDzhv -1][BAcPsD6T3] - '0';
                        if (z < 0) {
                            dDb5NlxF6[KbL03xdFDzhv -1][BAcPsD6T3] = '9' + 1 + z;
                            dDb5NlxF6[KbL03xdFDzhv -1][BAcPsD6T3 -1]--;
                        }
                        else
                            dDb5NlxF6[KbL03xdFDzhv -1][BAcPsD6T3] = '0' + z;
                    }
                }
                for (z = 0;; z = z + 1)
                    if (dDb5NlxF6[KbL03xdFDzhv -1][z] != '0')
                        break;
                for (BAcPsD6T3 = z; BAcPsD6T3 < I6f4dWmOC; BAcPsD6T3 = BAcPsD6T3 +1)
                    printf ("%c", dDb5NlxF6[KbL03xdFDzhv -1][BAcPsD6T3]);
            }
        }
    }
}

