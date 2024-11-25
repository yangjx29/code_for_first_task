struct   FnUWpKOvLf5 {
    char fEDqnIKyi [(817 - 767)];
    struct   FnUWpKOvLf5 *j5q4E7n;
};
struct   FnUWpKOvLf5 *EIp0FxeYJBT ();
void  zQmMIe8NJp (struct   FnUWpKOvLf5 *FurSfVbK, struct   FnUWpKOvLf5 *rwJVa09kijq);
void  vXanrGtQPLIM (struct   FnUWpKOvLf5 * FurSfVbK);

int main () {
    struct   FnUWpKOvLf5 j7VjkSGaQP;
    struct   FnUWpKOvLf5 *FurSfVbK;
    vXanrGtQPLIM (FurSfVbK);
    gets (j7VjkSGaQP.fEDqnIKyi);
    FurSfVbK = EIp0FxeYJBT ();
    for (; strcmp (j7VjkSGaQP.fEDqnIKyi, "end") != (348 - 348);) {
        zQmMIe8NJp (FurSfVbK, &j7VjkSGaQP);
        gets (j7VjkSGaQP.fEDqnIKyi);
    }
    return (262 - 262);
}

struct   FnUWpKOvLf5 *EIp0FxeYJBT () {
    struct   FnUWpKOvLf5 *m7NmFbtpC;
    m7NmFbtpC = (struct   FnUWpKOvLf5 *) malloc (sizeof (struct   FnUWpKOvLf5));
    strcpy (m7NmFbtpC->fEDqnIKyi, "0");
    m7NmFbtpC->j5q4E7n = NULL;
    return m7NmFbtpC;
}

void  zQmMIe8NJp (struct   FnUWpKOvLf5 *FurSfVbK, struct   FnUWpKOvLf5 *j7VjkSGaQP) {
    struct   FnUWpKOvLf5 *m7NmFbtpC;
    struct   FnUWpKOvLf5 *rwJVa09kijq;
    m7NmFbtpC = FurSfVbK;
    for (; m7NmFbtpC->j5q4E7n != NULL;)
        m7NmFbtpC = m7NmFbtpC->j5q4E7n;
    rwJVa09kijq = (struct   FnUWpKOvLf5 *) malloc (sizeof (struct   FnUWpKOvLf5));
    m7NmFbtpC->j5q4E7n = rwJVa09kijq;
    strcpy (rwJVa09kijq->fEDqnIKyi, j7VjkSGaQP->fEDqnIKyi);
    rwJVa09kijq->j5q4E7n = NULL;
}

void  vXanrGtQPLIM (struct   FnUWpKOvLf5 *FurSfVbK) {
    if (FurSfVbK->j5q4E7n != NULL)
        vXanrGtQPLIM (FurSfVbK->j5q4E7n);
    if (strcmp (FurSfVbK->fEDqnIKyi, "0") != (415 - 415))
        printf ("%s\n", FurSfVbK->fEDqnIKyi);
}

