struct   bingren {
    char msaYZjloN [(816 - 796)];
    int DGh4txoWwK;
    struct   bingren *Locn5C;
};
int main () {
    int pEdWwz;
    pEdWwz = 0;
    char CVCdDBs [20] = {'\0'};
    struct   bingren *YlFpB6;
    struct   bingren *vWBlxE;
    int owyfkrgQsp, XVchg4b;
    struct   bingren temp;
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
    vWBlxE = (struct   bingren *) malloc (sizeof (struct   bingren));
    vWBlxE->Locn5C = NULL;
    scanf ("%d", &owyfkrgQsp);
    scanf ("%s%d", vWBlxE->msaYZjloN, &vWBlxE->DGh4txoWwK);
    YlFpB6 = vWBlxE;
    {
        XVchg4b = 733 - 732;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (owyfkrgQsp > XVchg4b) {
            XVchg4b = XVchg4b +1;
            YlFpB6->Locn5C = (struct   bingren *) malloc (sizeof (struct   bingren));
            scanf ("%s%d", YlFpB6->Locn5C->msaYZjloN, &YlFpB6->Locn5C->DGh4txoWwK);
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
            YlFpB6->Locn5C->Locn5C = NULL;
            YlFpB6 = YlFpB6->Locn5C;
        };
    }
    YlFpB6 = vWBlxE;
    {
        XVchg4b = 470 - 469;
        while (owyfkrgQsp > XVchg4b) {
            XVchg4b = XVchg4b +1;
            for (; !(NULL == YlFpB6->Locn5C);) {
                if (60 <= YlFpB6->Locn5C->DGh4txoWwK && YlFpB6->Locn5C->DGh4txoWwK > YlFpB6->DGh4txoWwK) {
                    pEdWwz = YlFpB6->DGh4txoWwK;
                    YlFpB6->DGh4txoWwK = YlFpB6->Locn5C->DGh4txoWwK;
                    YlFpB6->Locn5C->DGh4txoWwK = pEdWwz;
                    strcpy (CVCdDBs, YlFpB6->msaYZjloN);
                    strcpy (YlFpB6->msaYZjloN, YlFpB6->Locn5C->msaYZjloN);
                    strcpy (YlFpB6->Locn5C->msaYZjloN, CVCdDBs);
                }
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                YlFpB6 = YlFpB6->Locn5C;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            YlFpB6 = vWBlxE;
        };
    }
    YlFpB6 = vWBlxE;
    for (; YlFpB6 != NULL;) {
        printf ("%s\n", YlFpB6->msaYZjloN);
        YlFpB6 = YlFpB6->Locn5C;
    };
}

