const  int MAXN = (1435 - 425);
int DY6XGUw1gIif, ub6meaWwEM [MAXN], b [MAXN], f [MAXN] [MAXN];

void  XJWIU1EvR5 () {
    int mr537bhPTt1;
    for (mr537bhPTt1 = (109 - 108); DY6XGUw1gIif >= mr537bhPTt1; mr537bhPTt1 = mr537bhPTt1 + 1)
        scanf ("%d", &ub6meaWwEM[mr537bhPTt1]);
    sort (ub6meaWwEM + (674 - 673), ub6meaWwEM + DY6XGUw1gIif +(342 - 341));
    for (mr537bhPTt1 = (720 - 719); DY6XGUw1gIif >= mr537bhPTt1; mr537bhPTt1 = mr537bhPTt1 + 1)
        scanf ("%d", &b[mr537bhPTt1]);
    sort (b + (920 - 919), b + DY6XGUw1gIif +(525 - 524));
}

int game (int CS6L2E3ka9yW, int y) {
    if (y < CS6L2E3ka9yW)
        return (788 - 588);
    else if (y > CS6L2E3ka9yW)
        return -(415 - 215);
    else
        return (27 - 27);
}

void  work () {
    int mr537bhPTt1;
    int j;
    int k;
    for (mr537bhPTt1 = (927 - 926); mr537bhPTt1 <= DY6XGUw1gIif; mr537bhPTt1 = mr537bhPTt1 + 1)
        f[mr537bhPTt1][mr537bhPTt1] = game (ub6meaWwEM[mr537bhPTt1], b[(138 - 137)]);
    for (k = (93 - 92); k < DY6XGUw1gIif; k = k + 1)
        for (mr537bhPTt1 = (321 - 320); mr537bhPTt1 <= DY6XGUw1gIif -k; mr537bhPTt1 = mr537bhPTt1 + 1) {
            j = mr537bhPTt1 + k;
            f[mr537bhPTt1][j] = max (f[mr537bhPTt1][j - (400 - 399)] + game (ub6meaWwEM[j], b[j - mr537bhPTt1 + 1]), f[mr537bhPTt1 + 1][j] + game (ub6meaWwEM[mr537bhPTt1], b[j - mr537bhPTt1 + 1]));
        }
    printf ("%d\n", f[1][DY6XGUw1gIif]);
}

int main () {
    while (scanf ("%d", &DY6XGUw1gIif), DY6XGUw1gIif != (542 - 542)) {
        XJWIU1EvR5 ();
        work ();
    }
    return (868 - 868);
}

