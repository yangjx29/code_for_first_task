int main () {
    int DuQ6C5WkRob0, ppWyCeG, lwaB28GCXp, hMVFQo, IYxO3UbM, eLiUZYeDs, nzIFiRd [100000] [2];
    scanf ("%d", &DuQ6C5WkRob0);
    for (ppWyCeG = (439 - 439); DuQ6C5WkRob0 > ppWyCeG; ppWyCeG++) {
        for (lwaB28GCXp = (366 - 366); 2 > lwaB28GCXp; lwaB28GCXp++)
            scanf ("%d", &nzIFiRd[ppWyCeG][lwaB28GCXp]);
    }
    for (lwaB28GCXp = (164 - 164); lwaB28GCXp < DuQ6C5WkRob0; lwaB28GCXp++) {
        for (ppWyCeG = (540 - 540); DuQ6C5WkRob0 -lwaB28GCXp > ppWyCeG; ppWyCeG++) {
            if (nzIFiRd[ppWyCeG][(485 - 485)] > nzIFiRd[DuQ6C5WkRob0 -(873 - 872) - lwaB28GCXp][0]) {
                IYxO3UbM = nzIFiRd[DuQ6C5WkRob0 -(592 - 591) - lwaB28GCXp][0];
                nzIFiRd[DuQ6C5WkRob0 -(900 - 899) - lwaB28GCXp][0] = nzIFiRd[ppWyCeG][0];
                nzIFiRd[ppWyCeG][0] = IYxO3UbM;
                eLiUZYeDs = nzIFiRd[DuQ6C5WkRob0 -(340 - 339) - lwaB28GCXp][(111 - 110)];
                nzIFiRd[DuQ6C5WkRob0 -(294 - 293) - lwaB28GCXp][(824 - 823)] = nzIFiRd[ppWyCeG][(374 - 373)];
                nzIFiRd[ppWyCeG][1] = eLiUZYeDs;
            }
        }
    }
    for (ppWyCeG = 1; DuQ6C5WkRob0 > ppWyCeG; ppWyCeG++) {
        for (lwaB28GCXp = 1; lwaB28GCXp <= ppWyCeG; lwaB28GCXp++) {
            if (nzIFiRd[ppWyCeG][0] <= nzIFiRd[ppWyCeG - lwaB28GCXp][1]) {
                break;
            }
        }
        if (lwaB28GCXp == ppWyCeG + 1) {
            printf ("no");
            break;
        }
    }
    if (ppWyCeG == DuQ6C5WkRob0) {
        for (lwaB28GCXp = 0; lwaB28GCXp < DuQ6C5WkRob0; lwaB28GCXp++) {
            for (hMVFQo = 0; hMVFQo < DuQ6C5WkRob0 -lwaB28GCXp; hMVFQo++) {
                if (nzIFiRd[hMVFQo][1] > nzIFiRd[DuQ6C5WkRob0 -lwaB28GCXp - 1][1]) {
                    IYxO3UbM = nzIFiRd[DuQ6C5WkRob0 -lwaB28GCXp - 1][1];
                    nzIFiRd[DuQ6C5WkRob0 -lwaB28GCXp - 1][1] = nzIFiRd[hMVFQo][1];
                    nzIFiRd[hMVFQo][1] = IYxO3UbM;
                }
            }
        }
        printf ("%d %d", nzIFiRd[0][0], nzIFiRd[DuQ6C5WkRob0 -1][1]);
    }
    return 0;
}

