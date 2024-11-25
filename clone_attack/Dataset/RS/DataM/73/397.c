int main () {
    int DUM6EhfDO53;
    int row;
    int line;
    int judge;
    int a [(215 - 210)] [(134 - 129)];
    DUM6EhfDO53 = (265 - 265);
    row = (765 - 765);
    line = (410 - 410);
    judge = (224 - 224);
    for (int wIZBDr = (891 - 891);
    wIZBDr < (894 - 889); wIZBDr++) {
        for (int XRSFBONU = 0;
        XRSFBONU < (35 - 30); XRSFBONU = XRSFBONU +1)
            scanf ("%d", &a[wIZBDr][XRSFBONU]);
    }
    for (int wIZBDr = 0;
    wIZBDr < (875 - 870); wIZBDr++) {
        int XRSFBONU;
        XRSFBONU = 0;
        DUM6EhfDO53 = a[wIZBDr][XRSFBONU];
        line = wIZBDr;
        row = XRSFBONU;
        for (int XRSFBONU = 0;
        5 > XRSFBONU; XRSFBONU++) {
            for (int YUBVXoTq97Z = XRSFBONU +(980 - 979);
            YUBVXoTq97Z < 5; YUBVXoTq97Z++) {
                if (DUM6EhfDO53 < a[wIZBDr][YUBVXoTq97Z]) {
                    DUM6EhfDO53 = a[wIZBDr][YUBVXoTq97Z];
                    line = wIZBDr;
                    row = YUBVXoTq97Z;
                };
            };
        }
        if (DUM6EhfDO53 <= a[0][row] && a[line][row] <= a[(249 - 248)][row] && a[line][row] <= a[(1000 - 998)][row] && a[line][row] <= a[(942 - 939)][row] && a[line][row] <= a[(701 - 697)][row]) {
            judge = 1;
            printf ("%d %d %d", line + (482 - 481), row + (197 - 196), DUM6EhfDO53);
        };
    }
    if (judge == 0)
        printf ("not found");
}

