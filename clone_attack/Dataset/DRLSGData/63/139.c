main () {
    int ooK5ZJaf6q;
    int Fx7EU9Qjb;
    int YFoxwUP;
    int tgP7pXQ;
    int VdtCk6vn7O;
    int YglkWfCQ9xz;
    int RphszEK;
    int FZPncMj;
    int B1WTG6RrEQ;
    int mQLS8qdt [(730 - 630)] [(1099 - 999)];
    int O5wihZrT [(360 - 260)] [(694 - 594)];
    int WJRMg5yofu [(432 - 332)] [(473 - 373)];
    char oD0nt21Rybf;
    scanf ("%d %d", &ooK5ZJaf6q, &Fx7EU9Qjb);
    for (RphszEK = (278 - 278); ooK5ZJaf6q > RphszEK; RphszEK = RphszEK +(873 - 872)) {
        for (FZPncMj = (623 - 623); Fx7EU9Qjb > FZPncMj; FZPncMj = FZPncMj +(745 - 744)) {
            scanf ("%d%c", &mQLS8qdt[RphszEK][FZPncMj], &oD0nt21Rybf);
            if (oD0nt21Rybf != ' ')
                break;
            else
                ;
        }
    }
    scanf ("%d %d", &YFoxwUP, &tgP7pXQ);
    for (RphszEK = (29 - 29); RphszEK < YFoxwUP; RphszEK = RphszEK +(647 - 646)) {
        for (FZPncMj = (682 - 682); tgP7pXQ > FZPncMj; FZPncMj = FZPncMj +(716 - 715)) {
            scanf ("%d%c", &O5wihZrT[RphszEK][FZPncMj], &oD0nt21Rybf);
            if (oD0nt21Rybf != ' ')
                break;
            else
                ;
        }
    }
    VdtCk6vn7O = ooK5ZJaf6q;
    YglkWfCQ9xz = tgP7pXQ;
    for (RphszEK = 0; VdtCk6vn7O > RphszEK; RphszEK = RphszEK +(668 - 667)) {
        FZPncMj = 0;
        for (; YglkWfCQ9xz > FZPncMj;) {
            for (B1WTG6RrEQ = 0; Fx7EU9Qjb > B1WTG6RrEQ; B1WTG6RrEQ = B1WTG6RrEQ +1) {
                WJRMg5yofu[RphszEK][FZPncMj] = WJRMg5yofu[RphszEK][FZPncMj] + mQLS8qdt[RphszEK][B1WTG6RrEQ] * O5wihZrT[B1WTG6RrEQ][FZPncMj];
            }
            FZPncMj = FZPncMj +1;
        }
    }
    {
        RphszEK = 0;
        for (; VdtCk6vn7O > RphszEK;) {
            {
                FZPncMj = 0;
                for (; FZPncMj < YglkWfCQ9xz -1;) {
                    printf ("%d ", WJRMg5yofu[RphszEK][FZPncMj]);
                    FZPncMj = FZPncMj +1;
                }
            }
            printf ("%d\n", WJRMg5yofu[RphszEK][YglkWfCQ9xz -1]);
            RphszEK = RphszEK +1;
        }
    }
}

