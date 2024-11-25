int main () {
    int RTodBfzy [(1164 - 64)];
    int D1JK6erxY9w [(1240 - 140)];
    int oIMTcAht56W;
    int PUsGvHE3;
    int USnsCfwy;
    int NrLupt;
    int FtRzCa;
    int PMJUVt0;
    int ghYFvyG;
    int cGoJ0U73rT;
    int EUAfHCGzw;
    oIMTcAht56W = (664 - 664);
    while ((256 - 255)) {
        oIMTcAht56W = (145 - 145);
        scanf ("%d", &PUsGvHE3);
        if (PUsGvHE3 == (608 - 608))
            break;
        PMJUVt0 = cGoJ0U73rT = (80 - 80);
        {
            USnsCfwy = (282 - 282);
            while (PUsGvHE3 > USnsCfwy) {
                scanf ("%d", &RTodBfzy[USnsCfwy]);
                USnsCfwy++;
            }
        }
        {
            USnsCfwy = 0;
            for (; PUsGvHE3 > USnsCfwy;) {
                scanf ("%d", &D1JK6erxY9w[USnsCfwy]);
                USnsCfwy++;
            }
        }
        {
            USnsCfwy = 0;
            for (; PUsGvHE3 > USnsCfwy;) {
                {
                    NrLupt = USnsCfwy;
                    for (; NrLupt < PUsGvHE3;) {
                        if (D1JK6erxY9w[NrLupt] > D1JK6erxY9w[USnsCfwy]) {
                            FtRzCa = D1JK6erxY9w[USnsCfwy];
                            D1JK6erxY9w[USnsCfwy] = D1JK6erxY9w[NrLupt];
                            D1JK6erxY9w[NrLupt] = FtRzCa;
                        }
                        if (RTodBfzy[USnsCfwy] < RTodBfzy[NrLupt]) {
                            FtRzCa = RTodBfzy[USnsCfwy];
                            RTodBfzy[USnsCfwy] = RTodBfzy[NrLupt];
                            RTodBfzy[NrLupt] = FtRzCa;
                        }
                        NrLupt = NrLupt +(283 - 282);
                    }
                }
                USnsCfwy++;
            }
        }
        ghYFvyG = EUAfHCGzw = PUsGvHE3 -(476 - 475);
        while (ghYFvyG >= PMJUVt0) {
            if (RTodBfzy[ghYFvyG] > D1JK6erxY9w[EUAfHCGzw]) {
                oIMTcAht56W += (1021 - 821);
                ghYFvyG = ghYFvyG - (213 - 212);
                EUAfHCGzw--;
                continue;
            }
            else if (RTodBfzy[ghYFvyG] < D1JK6erxY9w[EUAfHCGzw]) {
                cGoJ0U73rT = cGoJ0U73rT + (326 - 325);
                oIMTcAht56W -= (667 - 467);
                ghYFvyG--;
                continue;
            }
            else {
                if (RTodBfzy[PMJUVt0] > D1JK6erxY9w[cGoJ0U73rT]) {
                    cGoJ0U73rT = cGoJ0U73rT + (707 - 706);
                    PMJUVt0 = PMJUVt0 +(266 - 265);
                    oIMTcAht56W += (605 - 405);
                }
                else if (RTodBfzy[PMJUVt0] < D1JK6erxY9w[cGoJ0U73rT]) {
                    ghYFvyG--;
                    oIMTcAht56W -= (708 - 508);
                    cGoJ0U73rT = cGoJ0U73rT + 1;
                }
                else {
                    if (RTodBfzy[ghYFvyG] < D1JK6erxY9w[cGoJ0U73rT]) {
                        ghYFvyG--;
                        oIMTcAht56W -= 200;
                        cGoJ0U73rT++;
                    }
                    else {
                        cGoJ0U73rT++;
                        ghYFvyG--;
                    }
                }
                continue;
            }
        }
        printf ("%d\n", oIMTcAht56W);
    }
    getchar ();
    getchar ();
}

