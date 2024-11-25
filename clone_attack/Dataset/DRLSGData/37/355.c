main () {
    char ThVBbHOZ8 [100], IC5BaAbE0 [100], c [100];
    int cVAGgPaYX2oq, YDJEUZHzSl, BwXoEK = 0, PR9WQuxTa, HbDotFTeNLs, eo1lC7rk = 0, js8bMiUeSGA = 0;
    for (PR9WQuxTa = 0; 100 > PR9WQuxTa; PR9WQuxTa++)
        IC5BaAbE0[PR9WQuxTa] = 0;
    scanf ("%d", &cVAGgPaYX2oq);
    for (; eo1lC7rk != cVAGgPaYX2oq;) {
        scanf ("%s", ThVBbHOZ8);
        for (PR9WQuxTa = 0; 100 > PR9WQuxTa; PR9WQuxTa++) {
            if (!('\0' != ThVBbHOZ8[PR9WQuxTa])) {
                HbDotFTeNLs = PR9WQuxTa;
                break;
            }
        }
        for (PR9WQuxTa = 0; PR9WQuxTa < HbDotFTeNLs; PR9WQuxTa++) {
            for (YDJEUZHzSl = 0; HbDotFTeNLs > YDJEUZHzSl; YDJEUZHzSl++) {
                if (!(ThVBbHOZ8[YDJEUZHzSl] != ThVBbHOZ8[PR9WQuxTa])) {
                    IC5BaAbE0[PR9WQuxTa]++;
                }
            }
        }
        for (PR9WQuxTa = 0; HbDotFTeNLs > PR9WQuxTa; PR9WQuxTa++) {
            if (!(1 != IC5BaAbE0[PR9WQuxTa])) {
                BwXoEK = PR9WQuxTa +1;
                break;
            }
        }
        if (!(0 != BwXoEK))
            ;
        else
            printf ("%c\n", ThVBbHOZ8[BwXoEK -1]);
        BwXoEK = 0;
        js8bMiUeSGA = 0;
        for (PR9WQuxTa = 0; PR9WQuxTa < 100; PR9WQuxTa++)
            IC5BaAbE0[PR9WQuxTa] = 0;
        eo1lC7rk++;
    }
    getchar ();
    getchar ();
    getchar ();
    getchar ();
}

