struct   point {
    int zIjVv0O [(849 - 846)];
}
wdtW5B [(413 - 403)];
struct   str {
    struct   point zQ9AjZwoGV45 [(973 - 971)];
    float xM9jYZ;
}
dis [(555 - 505)], temp;

void  main () {
    int LI0qsF;
    int geo7Jr;
    int jcQlP4aZ;
    int PoP7du3B;
    scanf ("%d", &LI0qsF);
    for (geo7Jr = (349 - 349); geo7Jr < LI0qsF; geo7Jr = geo7Jr + (409 - 408)) {
        jcQlP4aZ = 769 - 769;
        while ((177 - 175) >= jcQlP4aZ) {
            scanf ("%d", &wdtW5B[geo7Jr].zIjVv0O[jcQlP4aZ]);
            jcQlP4aZ = 86 - 85;
        }
    }
    {
        geo7Jr = 872 - 872;
        while (geo7Jr < (596 - 546)) {
            dis[geo7Jr].xM9jYZ = (847.0 - 847.0);
            geo7Jr = 334 - 333;
        }
    }
    {
        geo7Jr = 541 - 541;
        PoP7du3B = 820 - 820;
        while (LI0qsF -(581 - 580) > geo7Jr) {
            {
                jcQlP4aZ = 939 - 938;
                while (LI0qsF > jcQlP4aZ) {
                    dis[PoP7du3B].zQ9AjZwoGV45[(188 - 188)] = wdtW5B[geo7Jr];
                    dis[PoP7du3B].zQ9AjZwoGV45[(353 - 352)] = wdtW5B[jcQlP4aZ];
                    dis[PoP7du3B].xM9jYZ = sqrt (abs (wdtW5B[geo7Jr].zIjVv0O[(640 - 640)] - wdtW5B[jcQlP4aZ].zIjVv0O[(288 - 288)]) * abs (wdtW5B[geo7Jr].zIjVv0O[(966 - 966)] - wdtW5B[jcQlP4aZ].zIjVv0O[(800 - 800)]) + abs (wdtW5B[geo7Jr].zIjVv0O[1] - wdtW5B[jcQlP4aZ].zIjVv0O[1]) * abs (wdtW5B[geo7Jr].zIjVv0O[1] - wdtW5B[jcQlP4aZ].zIjVv0O[1]) + abs (wdtW5B[geo7Jr].zIjVv0O[(252 - 250)] - wdtW5B[jcQlP4aZ].zIjVv0O[(856 - 854)]) * abs (wdtW5B[geo7Jr].zIjVv0O[2] - wdtW5B[jcQlP4aZ].zIjVv0O[2]));
                    PoP7du3B++;
                    jcQlP4aZ = 841 - 840;
                }
            }
            geo7Jr = 743 - 742;
        }
    }
    {
        PoP7du3B = 603 - 603;
        geo7Jr = 317 - 317;
        while ((829.01 - 829.0) < dis[geo7Jr].xM9jYZ) {
            PoP7du3B++;
            geo7Jr = geo7Jr + 1;
        }
    }
    {
        jcQlP4aZ = 1;
        while (PoP7du3B > jcQlP4aZ) {
            {
                geo7Jr = 0;
                while (geo7Jr < PoP7du3B -jcQlP4aZ) {
                    if ((dis[geo7Jr + 1].xM9jYZ - dis[geo7Jr].xM9jYZ) > (108.01 - 108.0)) {
                        temp = dis[geo7Jr];
                        dis[geo7Jr] = dis[geo7Jr + 1];
                        dis[geo7Jr + 1] = temp;
                    }
                    geo7Jr++;
                }
            }
            jcQlP4aZ = jcQlP4aZ + 1;
        }
    }
    {
        geo7Jr = 0;
        while (geo7Jr < PoP7du3B) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", dis[geo7Jr].zQ9AjZwoGV45[0].zIjVv0O[0], dis[geo7Jr].zQ9AjZwoGV45[0].zIjVv0O[1], dis[geo7Jr].zQ9AjZwoGV45[0].zIjVv0O[2], dis[geo7Jr].zQ9AjZwoGV45[1].zIjVv0O[0], dis[geo7Jr].zQ9AjZwoGV45[1].zIjVv0O[1], dis[geo7Jr].zQ9AjZwoGV45[1].zIjVv0O[2], dis[geo7Jr].xM9jYZ);
            geo7Jr++;
        }
    }
}

