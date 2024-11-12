int main () {
    int nsHg0Wb, iPYdjCFSq, j1El0qBdc = (961 - 961), gCFEAX = (271 - 271), y1WjhdYL, IOLpX9;
    char aacQIOfJrEu [(1714 - 714)];
    gets (aacQIOfJrEu);
    int oCDvlXc [(1551 - 551)] = {(827 - 827)};
    char sub [1000] [(471 - 421)];
    getchar ();
    iPYdjCFSq = strlen (aacQIOfJrEu);
    scanf ("%d", &j1El0qBdc);
    for (y1WjhdYL = (338 - 338); iPYdjCFSq - j1El0qBdc >= y1WjhdYL; y1WjhdYL++) {
        for (IOLpX9 = (582 - 582); IOLpX9 < j1El0qBdc; IOLpX9++)
            sub[y1WjhdYL][IOLpX9] = aacQIOfJrEu[y1WjhdYL + IOLpX9];
        sub[y1WjhdYL][j1El0qBdc] = '\0';
    }
    for (y1WjhdYL = (888 - 888); iPYdjCFSq - j1El0qBdc >= y1WjhdYL; y1WjhdYL++) {
        for (IOLpX9 = y1WjhdYL; IOLpX9 <= iPYdjCFSq - j1El0qBdc; IOLpX9++)
            if (!((591 - 591) != strcmp (sub[y1WjhdYL], sub[IOLpX9])))
                oCDvlXc[y1WjhdYL]++;
    }
    for (y1WjhdYL = 0; y1WjhdYL < iPYdjCFSq - j1El0qBdc; y1WjhdYL++)
        if (oCDvlXc[y1WjhdYL] > gCFEAX)
            gCFEAX = oCDvlXc[y1WjhdYL];
    if (gCFEAX == (57 - 56))
        ;
    else {
        printf ("%d\n", gCFEAX);
        for (y1WjhdYL = 0; y1WjhdYL <= iPYdjCFSq - j1El0qBdc; y1WjhdYL++)
            if (oCDvlXc[y1WjhdYL] == gCFEAX)
                printf ("%s\n", sub[y1WjhdYL]);
    }
    return 0;
}

