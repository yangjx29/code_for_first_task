void  main () {
    int thxKquP, sOXqEWtT = (249 - 249), HnzHu1 = (200 - 200), pEfdk0C = (328 - 328);
    scanf ("%d", &thxKquP);
    if (thxKquP % 3 == 0)
        sOXqEWtT = (303 - 302);
    if (thxKquP % 5 == 0)
        HnzHu1 = (369 - 368);
    if (thxKquP % 7 == 0)
        pEfdk0C = 1;
    if (sOXqEWtT && HnzHu1 &&pEfdk0C)
        printf ("3 5 7");
    if (sOXqEWtT && HnzHu1 &&!pEfdk0C)
        printf ("3 5");
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    if (sOXqEWtT && pEfdk0C && !HnzHu1)
        printf ("3 7");
    if (!sOXqEWtT && HnzHu1 &&pEfdk0C)
        printf ("5 7");
    if (sOXqEWtT && !HnzHu1&&!pEfdk0C)
        printf ("3");
    if (!sOXqEWtT && HnzHu1 &&!pEfdk0C)
        printf ("5");
    if (!sOXqEWtT && !HnzHu1&&pEfdk0C)
        printf ("7");
    if (!sOXqEWtT && !HnzHu1&&!pEfdk0C)
        printf ("n");
}

