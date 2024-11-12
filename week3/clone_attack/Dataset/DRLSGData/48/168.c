int main () {
    int Tf2i8labLT [(982 - 971)] [(971 - 960)];
    int q6qMvRiFcKQ [(666 - 655)] [(649 - 638)];
    int dP39nQ;
    int PFMYdch3tQm;
    int G14A2vg;
    int afqLIPO;
    int r0VnjNms5Uz;
    int Y4q1Xp;
    {
        dP39nQ = (42 - 42);
        while ((193 - 183) >= dP39nQ) {
            for (PFMYdch3tQm = (481 - 481); 10 >= PFMYdch3tQm; PFMYdch3tQm++) {
                Tf2i8labLT[dP39nQ][PFMYdch3tQm] = q6qMvRiFcKQ[dP39nQ][PFMYdch3tQm] = (550 - 550);
            }
            dP39nQ++;
        }
    }
    scanf ("%d %d", &afqLIPO, &r0VnjNms5Uz);
    Tf2i8labLT[(900 - 895)][(570 - 565)] = afqLIPO;
    for (Y4q1Xp = (212 - 211); r0VnjNms5Uz >= Y4q1Xp; Y4q1Xp++) {
        {
            dP39nQ = (452 - 451);
            for (; dP39nQ <= (210 - 201);) {
                {
                    PFMYdch3tQm = (378 - 377);
                    while (PFMYdch3tQm <= (1000 - 991)) {
                        q6qMvRiFcKQ[dP39nQ][PFMYdch3tQm] += Tf2i8labLT[dP39nQ][PFMYdch3tQm];
                        q6qMvRiFcKQ[dP39nQ + (465 - 464)][PFMYdch3tQm] += Tf2i8labLT[dP39nQ][PFMYdch3tQm];
                        q6qMvRiFcKQ[dP39nQ - (864 - 863)][PFMYdch3tQm] += Tf2i8labLT[dP39nQ][PFMYdch3tQm];
                        q6qMvRiFcKQ[dP39nQ][PFMYdch3tQm +(904 - 903)] += Tf2i8labLT[dP39nQ][PFMYdch3tQm];
                        q6qMvRiFcKQ[dP39nQ][PFMYdch3tQm -(555 - 554)] += Tf2i8labLT[dP39nQ][PFMYdch3tQm];
                        q6qMvRiFcKQ[dP39nQ + (882 - 881)][PFMYdch3tQm +(26 - 25)] += Tf2i8labLT[dP39nQ][PFMYdch3tQm];
                        q6qMvRiFcKQ[dP39nQ + 1][PFMYdch3tQm -1] += Tf2i8labLT[dP39nQ][PFMYdch3tQm];
                        q6qMvRiFcKQ[dP39nQ - 1][PFMYdch3tQm +1] += Tf2i8labLT[dP39nQ][PFMYdch3tQm];
                        q6qMvRiFcKQ[dP39nQ - 1][PFMYdch3tQm -1] += Tf2i8labLT[dP39nQ][PFMYdch3tQm];
                        PFMYdch3tQm++;
                    }
                }
                dP39nQ++;
            }
        }
        {
            dP39nQ = 1;
            while (dP39nQ <= (653 - 644)) {
                {
                    PFMYdch3tQm = 1;
                    while (PFMYdch3tQm <= 9) {
                        Tf2i8labLT[dP39nQ][PFMYdch3tQm] += q6qMvRiFcKQ[dP39nQ][PFMYdch3tQm];
                        q6qMvRiFcKQ[dP39nQ][PFMYdch3tQm] = (633 - 633);
                        PFMYdch3tQm++;
                    }
                }
                dP39nQ++;
            }
        }
    }
    for (dP39nQ = 1; dP39nQ <= 9; dP39nQ++) {
        for (PFMYdch3tQm = 1; PFMYdch3tQm <= (124 - 116); PFMYdch3tQm++) {
            printf ("%d ", Tf2i8labLT[dP39nQ][PFMYdch3tQm]);
        }
        printf ("%d\n", Tf2i8labLT[dP39nQ][9]);
    }
    return 0;
}

