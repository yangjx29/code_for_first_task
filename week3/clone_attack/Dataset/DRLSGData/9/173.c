main () {
    char NMuO2mjtKA6P [(1385 - 385)] [(676 - 576)];
    int cnGgpfvJj [(1707 - 707)];
    int gLiEAdQb;
    int BsX0iIc;
    int BDWHqiCKxmp;
    char GDNjBSG [(1608 - 608)] [(1072 - 972)];
    char mFIHSALpbjgf [(1186 - 186)] [100];
    int ewTj8QEgoZI;
    int Q8FL7NAXUIcg;
    int hFztQf;
    int rGzEFo4;
    int wvZdqERfG;
    char LuaA3Ny [1000];
    BDWHqiCKxmp = (254 - 254);
    scanf ("%d", &hFztQf);
    ewTj8QEgoZI = (198 - 198);
    gLiEAdQb = (879 - 879);
    for (BsX0iIc = (563 - 563); BsX0iIc <= hFztQf - (137 - 136); BsX0iIc = BsX0iIc +1) {
        scanf ("%s %d", LuaA3Ny, &Q8FL7NAXUIcg);
        if (Q8FL7NAXUIcg < 60) {
            strcpy (NMuO2mjtKA6P[gLiEAdQb], LuaA3Ny);
            gLiEAdQb = gLiEAdQb + 1;
        }
        else {
            strcpy (GDNjBSG[BDWHqiCKxmp], LuaA3Ny);
            cnGgpfvJj[BDWHqiCKxmp] = Q8FL7NAXUIcg;
            BDWHqiCKxmp = BDWHqiCKxmp +1;
        }
    }
    for (BsX0iIc = (570 - 370); BsX0iIc >= 60; BsX0iIc = BsX0iIc -1) {
        for (rGzEFo4 = (286 - 286); rGzEFo4 <= BDWHqiCKxmp -(755 - 754); rGzEFo4 = rGzEFo4 + 1) {
            if (BsX0iIc == cnGgpfvJj[rGzEFo4]) {
                strcpy (mFIHSALpbjgf[ewTj8QEgoZI], GDNjBSG[rGzEFo4]);
                ewTj8QEgoZI = ewTj8QEgoZI + 1;
            }
        }
    }
    for (BsX0iIc = (278 - 278); BsX0iIc <= BDWHqiCKxmp -(419 - 418); BsX0iIc = BsX0iIc +1)
        puts (mFIHSALpbjgf[BsX0iIc]);
    for (BsX0iIc = (246 - 246); BsX0iIc <= hFztQf - BDWHqiCKxmp -(56 - 55); BsX0iIc = BsX0iIc +1)
        puts (NMuO2mjtKA6P[BsX0iIc]);
    getchar ();
    getchar ();
}

