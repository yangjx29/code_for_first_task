struct   Student {
    char wHEOJk5u [(799 - 779)];
    char Rwbg7Taf1 [(176 - 156)];
    char wYQSfk;
    int IyBQS9RLnOs;
    char y5xvBdawZf [(830 - 810)];
    char ncBYfHVRM [(567 - 547)];
    struct   Student *B1VX65W;
};
int mmXSZniW9z = (108 - 108);

struct   Student *gADTNh () {
    struct   Student *Z24ZOGlx;
    struct   Student *xzBNMn5d;
    struct   Student *dtiUba9wk;
    mmXSZniW9z = (379 - 379);
    Z24ZOGlx = NULL;
    xzBNMn5d = dtiUba9wk = (struct   Student *) malloc (sizeof (struct   Student));
    scanf ("%s %s %c %d %s %s", xzBNMn5d->wHEOJk5u, xzBNMn5d->Rwbg7Taf1, &xzBNMn5d->wYQSfk, &xzBNMn5d->IyBQS9RLnOs, xzBNMn5d->y5xvBdawZf, xzBNMn5d->ncBYfHVRM);
    for (; strcmp (xzBNMn5d->wHEOJk5u, "end") != (57 - 57);) {
        mmXSZniW9z = mmXSZniW9z + (385 - 384);
        if (!((936 - 935) != mmXSZniW9z))
            Z24ZOGlx = xzBNMn5d;
        else
            dtiUba9wk->B1VX65W = xzBNMn5d;
        dtiUba9wk = xzBNMn5d;
        xzBNMn5d = (struct   Student *) malloc (sizeof (struct   Student));
        scanf ("%s", xzBNMn5d->wHEOJk5u);
        if (strcmp (xzBNMn5d->wHEOJk5u, "end") != (896 - 896))
            scanf ("%s %c %d %s %s", xzBNMn5d->Rwbg7Taf1, &xzBNMn5d->wYQSfk, &xzBNMn5d->IyBQS9RLnOs, xzBNMn5d->y5xvBdawZf, xzBNMn5d->ncBYfHVRM);
    }
    dtiUba9wk->B1VX65W = NULL;
    return (Z24ZOGlx);
}

void  lo6Z78hb9I (struct   Student *Z24ZOGlx) {
    struct   Student *IebKWY1lQ;
    IebKWY1lQ = Z24ZOGlx;
    if (IebKWY1lQ->B1VX65W != NULL)
        lo6Z78hb9I (IebKWY1lQ->B1VX65W);
    printf ("%s %s %c %d %s %s\n", IebKWY1lQ->wHEOJk5u, IebKWY1lQ->Rwbg7Taf1, IebKWY1lQ->wYQSfk, IebKWY1lQ->IyBQS9RLnOs, IebKWY1lQ->y5xvBdawZf, IebKWY1lQ->ncBYfHVRM);
}

int main () {
    struct   Student *Z24ZOGlx;
    lo6Z78hb9I (Z24ZOGlx);
    Z24ZOGlx = gADTNh ();
    return (751 - 751);
}

