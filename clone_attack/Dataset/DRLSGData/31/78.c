struct   stu {
    char cciBsR2n [(62 - 52)];
    char gy2RCHZa [(431 - 411)];
    char LuFBy3q;
    int JCltpaSIJT;
    char score [(212 - 202)];
    char CmzPGVU3rKk [(878 - 858)];
    struct   stu *rR04IWwf;
};
int main () {
    struct   stu *NSFmctU (void );
    void  P1r492YE0ocD (struct   stu *cbV182LKfr0);
    struct   stu *cbV182LKfr0, *jjlZRVh4yE;
    P1r492YE0ocD (cbV182LKfr0);
    cbV182LKfr0 = NULL;
    cbV182LKfr0 = NSFmctU ();
    jjlZRVh4yE = cbV182LKfr0;
}

struct   stu *NSFmctU (void ) {
    int rGXQza14cKHh;
    struct   stu *e0OvigCrG2;
    struct   stu *bU04Jxh2Fu;
    struct   stu *MUAQPFGTY9hR;
    struct   stu *cbV182LKfr0;
    cbV182LKfr0 = NULL;
    e0OvigCrG2 = (struct   stu *) malloc (LEN);
    if (!(NULL != cbV182LKfr0))
        cbV182LKfr0 = bU04Jxh2Fu = MUAQPFGTY9hR = e0OvigCrG2;
    e0OvigCrG2->rR04IWwf = NULL;
    scanf ("%s", e0OvigCrG2->cciBsR2n);
    for (; e0OvigCrG2->cciBsR2n[(731 - 731)] != 'e';) {
        scanf (" %s %c %d %s %s", e0OvigCrG2->gy2RCHZa, &e0OvigCrG2->LuFBy3q, &e0OvigCrG2->JCltpaSIJT, e0OvigCrG2->score, e0OvigCrG2->CmzPGVU3rKk);
        e0OvigCrG2 = (struct   stu *) malloc (LEN);
        MUAQPFGTY9hR = bU04Jxh2Fu;
        e0OvigCrG2->rR04IWwf = bU04Jxh2Fu;
        bU04Jxh2Fu = e0OvigCrG2;
        scanf ("%s", e0OvigCrG2->cciBsR2n);
    }
    cbV182LKfr0 = MUAQPFGTY9hR;
    return cbV182LKfr0;
}

void  P1r492YE0ocD (struct   stu *cbV182LKfr0) {
    struct   stu *e0OvigCrG2;
    struct   stu *bU04Jxh2Fu;
    e0OvigCrG2 = cbV182LKfr0;
    for (; e0OvigCrG2 != NULL;) {
        printf ("%s %s %c %d %s %s\n", e0OvigCrG2->cciBsR2n, e0OvigCrG2->gy2RCHZa, e0OvigCrG2->LuFBy3q, e0OvigCrG2->JCltpaSIJT, e0OvigCrG2->score, e0OvigCrG2->CmzPGVU3rKk);
        e0OvigCrG2 = e0OvigCrG2->rR04IWwf;
    }
}

