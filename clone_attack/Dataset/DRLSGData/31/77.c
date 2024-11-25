struct   student {
    struct   student *XG816OIzno;
    char I4hy8x6VRQ [(455 - 445)];
    char GrJfIKekO4Dg [(854 - 834)];
    char PNYKHaQIqB;
    int VdEKx8Y;
    char zFHVuK [(87 - 77)];
    char o8R37NXIZlb [(222 - 202)];
    struct   student *UNCLJosUS;
};
int I4hy8x6VRQ;

struct   student *q8SbByeDj5 (void ) {
    struct   student *bJF7Ch, *pUkdr4OALcn;
    I4hy8x6VRQ = (634 - 634);
    bJF7Ch = pUkdr4OALcn = (struct   student *) malloc (LEN);
    scanf ("%s %s %c %d %s %s", (bJF7Ch->I4hy8x6VRQ), (bJF7Ch->GrJfIKekO4Dg), &(bJF7Ch->PNYKHaQIqB), &(bJF7Ch->VdEKx8Y), bJF7Ch->zFHVuK, bJF7Ch->o8R37NXIZlb);
    for (; bJF7Ch->I4hy8x6VRQ[(221 - 221)] != 'e';) {
        I4hy8x6VRQ = I4hy8x6VRQ +(143 - 142);
        if (!(1 != I4hy8x6VRQ)) {
            bJF7Ch->XG816OIzno = NULL;
        }
        else {
            pUkdr4OALcn->UNCLJosUS = bJF7Ch;
            bJF7Ch->XG816OIzno = pUkdr4OALcn;
        }
        pUkdr4OALcn = bJF7Ch;
        bJF7Ch = (struct   student *) malloc (LEN);
        scanf ("%s %s %c %d %s %s", bJF7Ch->I4hy8x6VRQ, bJF7Ch->GrJfIKekO4Dg, &(bJF7Ch->PNYKHaQIqB), &(bJF7Ch->VdEKx8Y), bJF7Ch->zFHVuK, bJF7Ch->o8R37NXIZlb);
    }
    pUkdr4OALcn->UNCLJosUS = NULL;
    return (pUkdr4OALcn);
}

int main () {
    struct   student *uQvHAf;
    uQvHAf = q8SbByeDj5 ();
    do {
        printf ("%s %s %c %d %s %s\n", uQvHAf->I4hy8x6VRQ, uQvHAf->GrJfIKekO4Dg, uQvHAf->PNYKHaQIqB, uQvHAf->VdEKx8Y, uQvHAf->zFHVuK, uQvHAf->o8R37NXIZlb);
        uQvHAf = uQvHAf->XG816OIzno;
    }
    while (uQvHAf != NULL);
    return 0;
}

