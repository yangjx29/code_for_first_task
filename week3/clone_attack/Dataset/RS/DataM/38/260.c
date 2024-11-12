int main () {
    double  gmfPXF9;
    double  LJCbwW8dc;
    double  *I65GtPT;
    int Ob9kQAv, VBx8ioOAJ4F;
    double  Ko9EXpH [1001];
    int i;
    double  LMB0C3pmo = (590 - 590);
    double  ljGOE8Pd = (942 - 942);
    scanf ("%d", &Ob9kQAv);
    {
        i = 0;
        while (Ob9kQAv > i) {
            i++;
            scanf ("%d", &VBx8ioOAJ4F);
            for (I65GtPT = Ko9EXpH; Ko9EXpH +VBx8ioOAJ4F > I65GtPT; I65GtPT++) {
                scanf ("%lf", I65GtPT);
                LMB0C3pmo += *I65GtPT;
            }
            LJCbwW8dc = LMB0C3pmo / VBx8ioOAJ4F;
            LMB0C3pmo = 0;
            {
                I65GtPT = Ko9EXpH;
                while (Ko9EXpH +VBx8ioOAJ4F > I65GtPT) {
                    I65GtPT++;
                    ljGOE8Pd += (*I65GtPT-LJCbwW8dc) * (*I65GtPT-LJCbwW8dc);
                };
            }
            ljGOE8Pd = ljGOE8Pd / (VBx8ioOAJ4F);
            gmfPXF9 = sqrt (ljGOE8Pd);
            printf ("%.5lf\n", gmfPXF9);
            ljGOE8Pd = 0;
        };
    }
    return 0;
}

