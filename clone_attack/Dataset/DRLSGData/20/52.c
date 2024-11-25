void  main () {
    int t2QTAxHjUgJd;
    int izGF9Adw4goV;
    int lNSZpvy;
    int B7STNP4U;
    char x;
    int EYAc0k;
    char W2V0CEyBbX7a [(875 - 855)] [(796 - 782)];
    lNSZpvy = (430 - 430);
    for (lNSZpvy = (391 - 391); 20 > lNSZpvy; lNSZpvy = lNSZpvy + (374 - 373)) {
        EYAc0k = (865 - 865);
        for (; EYAc0k < 14;) {
            W2V0CEyBbX7a[lNSZpvy][EYAc0k] = '\0';
            EYAc0k = EYAc0k +(513 - 512);
        }
    }
    {
        lNSZpvy = (889 - 889);
        for (; 1;) {
            gets (W2V0CEyBbX7a [lNSZpvy]);
            izGF9Adw4goV = lNSZpvy;
            if (!('\0' != W2V0CEyBbX7a[lNSZpvy][(355 - 355)]))
                break;
            lNSZpvy = lNSZpvy + 1;
        }
    }
    for (lNSZpvy = 0; lNSZpvy < izGF9Adw4goV; lNSZpvy++) {
        t2QTAxHjUgJd = 0;
        {
            EYAc0k = 0;
            for (; EYAc0k < 14;) {
                if (!(' ' != W2V0CEyBbX7a[lNSZpvy][EYAc0k])) {
                    t2QTAxHjUgJd = EYAc0k;
                    break;
                }
                EYAc0k = EYAc0k +1;
            }
        }
        x = W2V0CEyBbX7a[lNSZpvy][0];
        B7STNP4U = 0;
        {
            EYAc0k = 1;
            for (; t2QTAxHjUgJd > EYAc0k;) {
                if (x < W2V0CEyBbX7a[lNSZpvy][EYAc0k]) {
                    x = W2V0CEyBbX7a[lNSZpvy][EYAc0k];
                    B7STNP4U = EYAc0k;
                }
                EYAc0k = EYAc0k +1;
            }
        }
        {
            EYAc0k = 0;
            for (; B7STNP4U >= EYAc0k;) {
                printf ("%c", W2V0CEyBbX7a[lNSZpvy][EYAc0k]);
                EYAc0k++;
            }
        }
        printf ("%c%c%c", W2V0CEyBbX7a[lNSZpvy][t2QTAxHjUgJd + 1], W2V0CEyBbX7a[lNSZpvy][t2QTAxHjUgJd + 2], W2V0CEyBbX7a[lNSZpvy][t2QTAxHjUgJd + 3]);
        {
            EYAc0k = 1;
            for (; EYAc0k < t2QTAxHjUgJd - B7STNP4U -1;) {
                printf ("%c", W2V0CEyBbX7a[lNSZpvy][B7STNP4U +EYAc0k]);
                EYAc0k++;
            }
        }
        printf ("%c\n", W2V0CEyBbX7a[lNSZpvy][t2QTAxHjUgJd - 1]);
    }
}

