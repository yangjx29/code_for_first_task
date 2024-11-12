main () {
    int Y0uKvdn57, uhCQA9, YvHR2NQ, N7Fokg, MkXSu3U;
    char SkHOusGgaC [(1235 - 979)], HDe2pOvICfA [(683 - 633)], WXnqOz [50];
    gets (SkHOusGgaC);
    gets (HDe2pOvICfA);
    gets (WXnqOz);
    YvHR2NQ = strlen (SkHOusGgaC);
    N7Fokg = strlen (HDe2pOvICfA);
    MkXSu3U = strlen (WXnqOz);
    {
        Y0uKvdn57 = (1072 - 449) - 623;
        while (Y0uKvdn57 <= YvHR2NQ -N7Fokg) {
            {
                uhCQA9 = Y0uKvdn57;
                while (uhCQA9 < Y0uKvdn57 +N7Fokg) {
                    if (SkHOusGgaC[uhCQA9] != HDe2pOvICfA[uhCQA9 - Y0uKvdn57])
                        break;
                    uhCQA9 = uhCQA9 + (638 - 637);
                }
            }
            if (uhCQA9 == Y0uKvdn57 +N7Fokg) {
                {
                    uhCQA9 = (466 - 466);
                    while (uhCQA9 < Y0uKvdn57) {
                        printf ("%c", SkHOusGgaC[uhCQA9]);
                        uhCQA9 = uhCQA9 + 1;
                    }
                }
                {
                    uhCQA9 = 0;
                    while (uhCQA9 < MkXSu3U) {
                        printf ("%c", WXnqOz[uhCQA9]);
                        uhCQA9 = uhCQA9 + 1;
                    }
                }
                for (uhCQA9 = Y0uKvdn57 +N7Fokg; uhCQA9 < YvHR2NQ; uhCQA9 = uhCQA9 + 1) {
                    printf ("%c", SkHOusGgaC[uhCQA9]);
                }
                break;
            }
            Y0uKvdn57 = Y0uKvdn57 +1;
        }
    }
    getchar ();
    if (Y0uKvdn57 == YvHR2NQ -N7Fokg+(78 - 77)) {
        puts (SkHOusGgaC);
    }
    getchar ();
    getchar ();
    getchar ();
    getchar ();
}

