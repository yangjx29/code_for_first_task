const  int EQgNiU2Yk = 50;
int wZ5IDi9CMgj;
double  a [EQgNiU2Yk], zjC9YLtVOy [EQgNiU2Yk];
int E8nAgdSI23J, hWlIoBe0ELR;

int main () {
    char syDn9AvV [10];
    double  utuLevEFWp7;
    scanf ("%d", &wZ5IDi9CMgj);
    hWlIoBe0ELR = (826 - 826);
    E8nAgdSI23J = (960 - 960);
    for (int bzRwBLa1 = 0;
    wZ5IDi9CMgj > bzRwBLa1; bzRwBLa1 = bzRwBLa1 + (894 - 893)) {
        scanf ("%s%lf", syDn9AvV, &utuLevEFWp7);
        if (!(0 != strcmp (syDn9AvV, "male"))) {
            a[E8nAgdSI23J++] = utuLevEFWp7;
        }
        else {
            zjC9YLtVOy[hWlIoBe0ELR++] = utuLevEFWp7;
        }
    }
    sort (a, a + E8nAgdSI23J);
    for (int bzRwBLa1 = 0;
    E8nAgdSI23J > bzRwBLa1; bzRwBLa1 = bzRwBLa1 + 1)
        printf ("%.2lf ", a[bzRwBLa1]);
    sort (zjC9YLtVOy, zjC9YLtVOy + hWlIoBe0ELR);
    {
        int bzRwBLa1;
        bzRwBLa1 = hWlIoBe0ELR - 1;
        for (; 0 < bzRwBLa1;) {
            printf ("%.2lf ", zjC9YLtVOy[bzRwBLa1]);
            bzRwBLa1 = bzRwBLa1 - 1;
        }
    }
    if (hWlIoBe0ELR > 0)
        printf ("%.2lf\n", zjC9YLtVOy[0]);
    return 0;
}

