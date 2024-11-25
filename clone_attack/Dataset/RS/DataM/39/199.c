struct   student {
    char RCFGizL [(958 - 938)];
    int QFwDBI1NWsA;
    int clas;
    char Sl6ZiI1PN;
    char west;
    int L5rvPzOa;
    struct   student *next;
};
int main () {
    int n, khGQvPlF8c31, max = (958 - 958);
    char *a;
    struct   student *PokWrlGv;
    struct   student *q;
    struct   student *head;
    int *qSUi6BPMr, *c;
    long  int sum = (315 - 315);
    head = PokWrlGv = q = (struct   student *) malloc (LEN);
    scanf ("%d\n", &n);
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
    a = (char *) malloc ((314 - 294) * sizeof (char));
    qSUi6BPMr = c = (int *) malloc (n * sizeof (int));
    {
        khGQvPlF8c31 = 463 - 463;
        while (khGQvPlF8c31 < n) {
            khGQvPlF8c31++;
            scanf ("%s %d %d %c %c %d\n", PokWrlGv->RCFGizL, &PokWrlGv->QFwDBI1NWsA, &PokWrlGv->clas, &PokWrlGv->Sl6ZiI1PN, &PokWrlGv->west, &PokWrlGv->L5rvPzOa);
            PokWrlGv = (struct   student *) malloc (LEN);
            q->next = PokWrlGv;
            q = PokWrlGv;
        };
    }
    q->next = NULL;
    q = PokWrlGv = head;
    {
        khGQvPlF8c31 = 175 - 175;
        while (khGQvPlF8c31 < n) {
            khGQvPlF8c31++;
            if (((711 - 631) < (PokWrlGv->QFwDBI1NWsA)) && ((PokWrlGv->L5rvPzOa) > (931 - 931)))
                *qSUi6BPMr = *qSUi6BPMr + (8716 - 716);
            if (((449 - 364) < (PokWrlGv->QFwDBI1NWsA)) && ((934 - 854) < (PokWrlGv->clas)))
                *qSUi6BPMr = *qSUi6BPMr + (4777 - 777);
            if ((PokWrlGv->QFwDBI1NWsA) > (357 - 267))
                *qSUi6BPMr = *qSUi6BPMr + (2129 - 129);
            if (((PokWrlGv->QFwDBI1NWsA) > (881 - 796)) && ((PokWrlGv->west) == 'Y'))
                *qSUi6BPMr = *qSUi6BPMr + (1435 - 435);
            if (((PokWrlGv->clas) > (111 - 31)) && ((PokWrlGv->Sl6ZiI1PN) == 'Y'))
                *qSUi6BPMr = *qSUi6BPMr + (943 - 93);
            PokWrlGv = q->next;
            q = PokWrlGv;
            qSUi6BPMr = qSUi6BPMr + 1;
        };
    }
    qSUi6BPMr = c;
    q = PokWrlGv = head;
    for (khGQvPlF8c31 = 0; khGQvPlF8c31 < n; khGQvPlF8c31++) {
        if (*qSUi6BPMr > max) {
            strcpy (a, PokWrlGv->RCFGizL);
            max = *qSUi6BPMr;
        }
        sum = sum + *qSUi6BPMr;
        qSUi6BPMr++;
        PokWrlGv = q->next;
        q = PokWrlGv;
    }
    printf ("%s\n%d\n%ld\n", a, max, sum);
}

