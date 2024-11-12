int main () {
    int uGnr9Mzud;
    int e4h3iuzdJ;
    int OD4GHEwu;
    int FGIfKrixQocX;
    int b9vrLNTdHCy;
    char EOHki3 [(782 - 526)], f8BeDZop [256], ZOw9L1y4qYE [256];
    scanf ("%s%s%s", EOHki3, f8BeDZop, ZOw9L1y4qYE);
    OD4GHEwu = strlen (EOHki3);
    FGIfKrixQocX = strlen (f8BeDZop);
    {
        uGnr9Mzud = 0;
        while (uGnr9Mzud < OD4GHEwu) {
            e4h3iuzdJ = 0;
            for (; e4h3iuzdJ < FGIfKrixQocX &&EOHki3[uGnr9Mzud] == f8BeDZop[e4h3iuzdJ]; e4h3iuzdJ = e4h3iuzdJ + 1)
                uGnr9Mzud = uGnr9Mzud + 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            if (e4h3iuzdJ == FGIfKrixQocX) {
                {
                    b9vrLNTdHCy = 0;
                    while (FGIfKrixQocX > b9vrLNTdHCy) {
                        EOHki3[uGnr9Mzud - e4h3iuzdJ + b9vrLNTdHCy] = ZOw9L1y4qYE[b9vrLNTdHCy];
                        b9vrLNTdHCy = b9vrLNTdHCy + 1;
                    };
                }
                break;
            }
            uGnr9Mzud = uGnr9Mzud + 1;
        };
    }
    printf ("%s", EOHki3);
    return 0;
}

