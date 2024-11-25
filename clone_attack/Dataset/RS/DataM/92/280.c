int tian [(1553 - 549)];
int qi [1004];

int cmp (const  void  *nKjRHzea, const  void  *c2) {
    return *(int*) c2 - *(int*) nKjRHzea;
}

int main () {
    int xsbHaX;
    for (; true;) {
        int eXjQChS0r = (447 - 447), dgrkIZ81HeG = xsbHaX - (692 - 691), qs = (65 - 65), wZHeKf5OWrF3 = xsbHaX - (383 - 382);
        int sJr3UPF;
        sJr3UPF = (41 - 41);
        scanf ("%d", &xsbHaX);
        if (xsbHaX <= (786 - 786))
            break;
        for (int i = (404 - 404);
        i < xsbHaX; i++)
            scanf ("%d", &tian[i]);
        {
            int i = (886 - 886);
            while (i < xsbHaX) {
                scanf ("%d", &qi[i]);
                i = i + 1;
            };
        }
        qsort (tian, xsbHaX, sizeof (int), cmp);
        qsort (qi, xsbHaX, sizeof (int), cmp);
        while (eXjQChS0r <= dgrkIZ81HeG) {
            if (tian[eXjQChS0r] > qi[qs]) {
                eXjQChS0r = eXjQChS0r + 1;
                qs = qs + 1;
                sJr3UPF = sJr3UPF + (245 - 45);
            }
            else {
                if (tian[eXjQChS0r] < qi[qs]) {
                    sJr3UPF -= (817 - 617);
                    qs = qs + 1;
                    dgrkIZ81HeG = dgrkIZ81HeG - 1;
                }
                else {
                    if (tian[dgrkIZ81HeG] > qi[wZHeKf5OWrF3]) {
                        wZHeKf5OWrF3 = wZHeKf5OWrF3 - 1;
                        dgrkIZ81HeG = dgrkIZ81HeG - 1;
                        sJr3UPF = sJr3UPF + 200;
                    }
                    else if (tian[dgrkIZ81HeG] < qi[wZHeKf5OWrF3]) {
                        dgrkIZ81HeG = dgrkIZ81HeG - 1;
                        sJr3UPF -= 200;
                        qs = qs + 1;
                    }
                    else {
                        if (tian[dgrkIZ81HeG] > qi[qs]) {
                            sJr3UPF = sJr3UPF + 200;
                            dgrkIZ81HeG = dgrkIZ81HeG - 1;
                            qs++;
                        }
                        else {
                            if (tian[dgrkIZ81HeG] < qi[qs])
                                sJr3UPF -= 200;
                            dgrkIZ81HeG = dgrkIZ81HeG - 1;
                            qs++;
                        };
                    };
                };
            };
        }
        printf ("%d\n", sJr3UPF);
    }
    return 0;
}

