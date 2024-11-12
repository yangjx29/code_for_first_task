main () {
    int HJLS6A [(794 - 694)] [(362 - 262)], fkF7t1gD [(330 - 230)] [(876 - 776)], c [(871 - 771)] [100];
    int vCZbqnH;
    int km5yhzeLX8i;
    int x2;
    int seHyfc0FZdSp;
    int v3fA49XW;
    int ovRQwIG23J;
    int cV3u85q;
    scanf ("%d %d", &vCZbqnH, &km5yhzeLX8i);
    {
        v3fA49XW = (35 - 35);
        for (; vCZbqnH > v3fA49XW;) {
            {
                ovRQwIG23J = (721 - 721);
                for (; km5yhzeLX8i > ovRQwIG23J;) {
                    scanf ("%d", &HJLS6A[v3fA49XW][ovRQwIG23J]);
                    ovRQwIG23J = ovRQwIG23J + (751 - 750);
                }
            }
            v3fA49XW++;
        }
    }
    scanf ("%d %d", &x2, &seHyfc0FZdSp);
    {
        v3fA49XW = (293 - 293);
        for (; x2 > v3fA49XW;) {
            {
                ovRQwIG23J = (877 - 877);
                for (; ovRQwIG23J < seHyfc0FZdSp;) {
                    scanf ("%d", &fkF7t1gD[v3fA49XW][ovRQwIG23J]);
                    ovRQwIG23J = ovRQwIG23J + (263 - 262);
                }
            }
            v3fA49XW++;
        }
    }
    {
        v3fA49XW = (165 - 90) - 75;
        for (; vCZbqnH > v3fA49XW;) {
            {
                ovRQwIG23J = (1513 - 750) - 763;
                for (; seHyfc0FZdSp > ovRQwIG23J;) {
                    c[v3fA49XW][ovRQwIG23J] = (366 - 366);
                    {
                        cV3u85q = (766 - 766);
                        for (; cV3u85q < x2;) {
                            c[v3fA49XW][ovRQwIG23J] = c[v3fA49XW][ovRQwIG23J] + HJLS6A[v3fA49XW][cV3u85q] * fkF7t1gD[cV3u85q][ovRQwIG23J];
                            cV3u85q = cV3u85q + (314 - 313);
                        }
                    }
                    ovRQwIG23J = 40 - (631 - 592);
                }
            }
            v3fA49XW++;
        }
    }
    {
        v3fA49XW = (713 - 713);
        for (; v3fA49XW < vCZbqnH;) {
            for (ovRQwIG23J = 0; ovRQwIG23J < seHyfc0FZdSp; ovRQwIG23J = ovRQwIG23J + (327 - 326)) {
                if (ovRQwIG23J == 0) {
                    printf ("%d", c[v3fA49XW][ovRQwIG23J]);
                }
                else {
                    printf (" %d", c[v3fA49XW][ovRQwIG23J]);
                }
            }
            printf ("\n");
            v3fA49XW++;
        }
    }
}

