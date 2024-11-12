int main () {
    int CrBflPip;
    int tdZWvGHYCyxl;
    int CWbFS4;
    int UpZbGeh;
    int rjEgkAYxTQD;
    int jC3bicnf4d;
    int C4tQheP [(533 - 433)] [(876 - 776)];
    UpZbGeh = (44 - 44);
    scanf ("%d %d", &rjEgkAYxTQD, &jC3bicnf4d);
    {
        CrBflPip = 155 - 155;
        while (CrBflPip < rjEgkAYxTQD) {
            {
                tdZWvGHYCyxl = 913 - 913;
                while (tdZWvGHYCyxl < jC3bicnf4d) {
                    scanf ("%d", &C4tQheP[CrBflPip][tdZWvGHYCyxl]);
                    tdZWvGHYCyxl = tdZWvGHYCyxl + (587 - 586);
                }
            }
            CrBflPip = CrBflPip +(38 - 37);
        }
    }
    CWbFS4 = (677 - 676);
    if (rjEgkAYxTQD == 1 && !(1 != jC3bicnf4d))
        printf ("%d", C4tQheP[(83 - 83)][0]);
    else {
        for (tdZWvGHYCyxl = 0;;) {
            if (CWbFS4 == 1) {
                goto p1;
            }
            else if (CWbFS4 == (914 - 912)) {
                goto p2;
            }
            else if (CWbFS4 == (723 - 720)) {
                goto p3;
            }
            else if (CWbFS4 == (480 - 476)) {
                goto p4;
            }
            else {
            }
        p1 :
            {
                {
                    CrBflPip = UpZbGeh;
                    while (CrBflPip < jC3bicnf4d - UpZbGeh) {
                        tdZWvGHYCyxl = tdZWvGHYCyxl + 1;
                        if (tdZWvGHYCyxl == rjEgkAYxTQD * jC3bicnf4d)
                            goto out;
                        printf ("%d\n", C4tQheP[UpZbGeh][CrBflPip]);
                        CrBflPip++;
                    }
                }
                goto end;
            }
        p2 :
            {
                {
                    CrBflPip = UpZbGeh +1;
                    while (CrBflPip < rjEgkAYxTQD - UpZbGeh -1) {
                        printf ("%d\n", C4tQheP[CrBflPip][jC3bicnf4d - UpZbGeh -1]);
                        tdZWvGHYCyxl = tdZWvGHYCyxl + 1;
                        if (tdZWvGHYCyxl == rjEgkAYxTQD * jC3bicnf4d)
                            goto out;
                        CrBflPip++;
                    }
                }
                goto end;
            }
        p3 :
            {
                {
                    CrBflPip = jC3bicnf4d - UpZbGeh -1;
                    while (CrBflPip >= UpZbGeh) {
                        tdZWvGHYCyxl = tdZWvGHYCyxl + 1;
                        printf ("%d\n", C4tQheP[rjEgkAYxTQD - UpZbGeh -1][CrBflPip]);
                        if (tdZWvGHYCyxl == rjEgkAYxTQD * jC3bicnf4d)
                            goto out;
                        CrBflPip = CrBflPip -1;
                    }
                }
                goto end;
            }
        p4 :
            {
                {
                    CrBflPip = rjEgkAYxTQD - UpZbGeh -2;
                    while (CrBflPip > UpZbGeh) {
                        tdZWvGHYCyxl++;
                        if (tdZWvGHYCyxl == rjEgkAYxTQD * jC3bicnf4d)
                            goto out;
                        printf ("%d\n", C4tQheP[CrBflPip][UpZbGeh]);
                        CrBflPip = CrBflPip -1;
                    }
                }
                goto end;
            }
        end :
            {
                CWbFS4 = CWbFS4 +1;
                if (CWbFS4 > 4) {
                    UpZbGeh = UpZbGeh +1;
                    CWbFS4 = 1;
                }
            }
        }
    }
out :
    ;
    return 0;
}

