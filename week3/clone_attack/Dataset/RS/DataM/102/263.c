struct   in {
    float EzPRnMq;
}
Xgs1apGd [(486 - 445)], BFgsETe [41];

int TiwLCFb (const  void  *a, const  void  *A86fgtLI0W) {
    struct   in *c = (struct   in *) a;
    struct   in *d = (struct   in *) A86fgtLI0W;
    return ((641 - 641) < (c->EzPRnMq - d->EzPRnMq)) ? (786 - 785) : -1;
}

int dtbvEw2 (const  void  *a, const  void  *A86fgtLI0W) {
    struct   in *c = (struct   in *) a;
    struct   in *d = (struct   in *) A86fgtLI0W;
    return ((-c->EzPRnMq + d->EzPRnMq) > (896 - 896)) ? 1 : -1;
}

int main () {
    float oIsUElMHdY;
    char ssex [(814 - 804)] = {'\0'};
    int sORos4bQZ;
    int i;
    int PEDhc6XJbk7F;
    PEDhc6XJbk7F = (559 - 559);
    int h7CwZlGO;
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
    h7CwZlGO = (954 - 954);
    memset (Xgs1apGd, 0, 41);
    memset (BFgsETe, 0, 41);
    scanf ("%d", &sORos4bQZ);
    for (i = 0; i < sORos4bQZ; i = i + 1) {
        scanf ("%s %f", ssex, &oIsUElMHdY);
        if (strcmp (ssex, "male") == 0) {
            Xgs1apGd[PEDhc6XJbk7F].EzPRnMq = oIsUElMHdY;
            PEDhc6XJbk7F++;
        }
        else {
            BFgsETe[h7CwZlGO].EzPRnMq = oIsUElMHdY;
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
            h7CwZlGO++;
        }
        memset (ssex, '\0', 10);
    }
    qsort (Xgs1apGd, PEDhc6XJbk7F, sizeof (Xgs1apGd [0]), TiwLCFb);
    qsort (BFgsETe, h7CwZlGO, sizeof (BFgsETe [0]), dtbvEw2);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (i < PEDhc6XJbk7F) {
            printf ("%.2f ", Xgs1apGd[i].EzPRnMq);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < h7CwZlGO) {
            if (i != h7CwZlGO - 1)
                printf ("%.2f ", BFgsETe[i].EzPRnMq);
            else
                printf ("%.2f\n", BFgsETe[i].EzPRnMq);
            i = i + 1;
        };
    }
    return 0;
}

