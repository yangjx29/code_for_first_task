struct   student {
    int Qa45r72d;
    int MrsJcfhUWKn;
    int shuxue;
    int j2CPvziEVx;
    struct   student *Lf3wJHrIjR9;
};
int LbI4AsE;

struct   student *qH7CFemMG (void ) {
    struct   student *v7lepX;
    struct   student *Osfhm5R;
    struct   student *MKqbgFUHlROC;
    int i;
    scanf ("%d", &LbI4AsE);
    Osfhm5R = MKqbgFUHlROC = (struct   student *) malloc (LEN);
    scanf ("%d%d%d", &Osfhm5R->Qa45r72d, &Osfhm5R->MrsJcfhUWKn, &Osfhm5R->shuxue);
    Osfhm5R->j2CPvziEVx = Osfhm5R->MrsJcfhUWKn + Osfhm5R->shuxue;
    v7lepX = Osfhm5R;
    {
        i = 1;
        while (LbI4AsE > i) {
            Osfhm5R = (struct   student *) malloc (LEN);
            MKqbgFUHlROC->Lf3wJHrIjR9 = Osfhm5R;
            MKqbgFUHlROC = Osfhm5R;
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
            scanf ("%d%d%d", &Osfhm5R->Qa45r72d, &Osfhm5R->MrsJcfhUWKn, &Osfhm5R->shuxue);
            Osfhm5R->j2CPvziEVx = Osfhm5R->MrsJcfhUWKn + Osfhm5R->shuxue;
            i++;
        };
    }
    MKqbgFUHlROC->Lf3wJHrIjR9 = null;
    return v7lepX;
}

void  compare (struct   student *v7lepX) {
    int NJ65ZVMm, i;
    struct   student *p;
    {
        i = 1;
        while (i <= 3) {
            p = v7lepX;
            NJ65ZVMm = 0;
            while (!(null == p)) {
                if (p->j2CPvziEVx > NJ65ZVMm)
                    NJ65ZVMm = p->j2CPvziEVx;
                p = p->Lf3wJHrIjR9;
            }
            p = v7lepX;
            while (p != null) {
                if (p->j2CPvziEVx == NJ65ZVMm) {
                    printf ("%d %d\n", p->Qa45r72d, NJ65ZVMm);
                    p->j2CPvziEVx = 0;
                    break;
                }
                p = p->Lf3wJHrIjR9;
            }
            i++;
        };
    };
}

main () {
    struct   student *v7lepX;
    compare (v7lepX);
    v7lepX = qH7CFemMG ();
}

