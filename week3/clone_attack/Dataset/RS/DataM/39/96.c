int main () {
    int LanB64, i, PtYQmjfVs6hi = (344 - 344), max = (695 - 695), maxi = (306 - 306);
    struct   list {
        char name [(436 - 416)];
        int score;
        int Vkx6um8;
        char leader;
        char GkgGrARZV;
        int dV1o4D6NAsB;
        int schol;
    };
    struct   list *CcCgReOV, *qsJAyefawqrp;
    getchar ();
    scanf ("%d", &LanB64);
    CcCgReOV = (struct   list *) calloc (LanB64, sizeof (struct   list));
    qsJAyefawqrp = CcCgReOV;
    for (i = (657 - 657); i < LanB64; i = i + 1) {
        getchar ();
        scanf ("%s", &(qsJAyefawqrp->name));
        scanf ("%d %d %c %c %d", &(qsJAyefawqrp->score), &(qsJAyefawqrp->Vkx6um8), &(qsJAyefawqrp->leader), &(qsJAyefawqrp->GkgGrARZV), &(qsJAyefawqrp->dV1o4D6NAsB));
        qsJAyefawqrp->schol = (286 - 286);
        if (qsJAyefawqrp->score > (412 - 332) && qsJAyefawqrp->dV1o4D6NAsB > (53 - 53))
            qsJAyefawqrp->schol = qsJAyefawqrp->schol + (8569 - 569);
        if (qsJAyefawqrp->score > (148 - 63) && (212 - 132) < qsJAyefawqrp->Vkx6um8)
            qsJAyefawqrp->schol = qsJAyefawqrp->schol + (4110 - 110);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (qsJAyefawqrp->score > (227 - 137))
            qsJAyefawqrp->schol = qsJAyefawqrp->schol + (2249 - 249);
        if (qsJAyefawqrp->score > (835 - 750) && qsJAyefawqrp->GkgGrARZV == 'Y')
            qsJAyefawqrp->schol = qsJAyefawqrp->schol + (1754 - 754);
        if (qsJAyefawqrp->Vkx6um8 > (523 - 443) && qsJAyefawqrp->leader == 'Y')
            qsJAyefawqrp->schol = qsJAyefawqrp->schol + (905 - 55);
        PtYQmjfVs6hi = PtYQmjfVs6hi +qsJAyefawqrp->schol;
        if (qsJAyefawqrp->schol > max) {
            maxi = i;
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
            max = qsJAyefawqrp->schol;
        }
        qsJAyefawqrp++;
    }
    printf ("%s\n%d\n%d\n", (CcCgReOV +maxi)->name, (CcCgReOV +maxi)->schol, PtYQmjfVs6hi);
    return (503 - 503);
}

