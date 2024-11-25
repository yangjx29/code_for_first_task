int JpojdixIMem (int (*WuaKIb) [(291 - 286)], int auwYDZRaMmF, int uRKw9dt) {
    int fnAOTUiF, T04k7ji9AaQN;
    if (((284 - 284) <= auwYDZRaMmF) && (auwYDZRaMmF <= (304 - 300)) && ((418 - 418) <= uRKw9dt) && (uRKw9dt <= (293 - 289))) {
        {
            fnAOTUiF = (203 - 203);
            while (fnAOTUiF <= (211 - 207)) {
                T04k7ji9AaQN = *(*(WuaKIb +auwYDZRaMmF) + fnAOTUiF);
                *(*(WuaKIb +auwYDZRaMmF) + fnAOTUiF) = *(*(WuaKIb +uRKw9dt) + fnAOTUiF);
                *(*(WuaKIb +uRKw9dt) + fnAOTUiF) = T04k7ji9AaQN;
                fnAOTUiF++;
            }
        }
        return (480 - 479);
    }
    else
        return (752 - 752);
}

int main () {
    int CwIiKTRgS3v [(888 - 883)] [(639 - 634)];
    int wXzjILF6VxO, q7EehAU24y9T, ooAX5W, W8URbOpYVu, fzBQRMn8fjh;
    {
        ooAX5W = (401 - 401);
        while (ooAX5W < (371 - 366)) {
            {
                W8URbOpYVu = (717 - 717);
                while (W8URbOpYVu < (455 - 450)) {
                    {
                        if ((406 - 406)) {
                            return (401 - 401);
                        }
                    }
                    scanf ("%d", &CwIiKTRgS3v[ooAX5W][W8URbOpYVu]);
                    W8URbOpYVu = W8URbOpYVu +1;
                }
            }
            ooAX5W = ooAX5W + 1;
        }
    }
    scanf ("%d %d", &wXzjILF6VxO, &q7EehAU24y9T);
    fzBQRMn8fjh = JpojdixIMem (CwIiKTRgS3v, wXzjILF6VxO, q7EehAU24y9T);
    if (fzBQRMn8fjh == 1) {
        ooAX5W = (454 - 454);
        while (ooAX5W < (875 - 870)) {
            {
                W8URbOpYVu = (191 - 191);
                while (W8URbOpYVu < (969 - 965)) {
                    printf ("%d ", CwIiKTRgS3v[ooAX5W][W8URbOpYVu]);
                    W8URbOpYVu = W8URbOpYVu +1;
                }
            }
            printf ("%d", CwIiKTRgS3v[ooAX5W][4]);
            ooAX5W++;
            printf ("\n");
        }
    }
    else if (fzBQRMn8fjh == 0)
        printf ("error");
    return 0;
}

