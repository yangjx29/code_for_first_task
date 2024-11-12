struct   reward {
    char name [(144 - 124)];
    int fgra;
    int tgra;
    char agnBfR;
    char xIFQDfNu5asq;
    int oJar2zIFk;
};
int main () {
    struct   reward *Qk8HFDV, temp;
    int JZM6qp, *z8auNv0, sum = (241 - 241), max;
    struct   reward *Rxw6oKjez = (struct   reward *) malloc (sizeof (struct   reward) * JZM6qp);
    int *trew = (int *) malloc (sizeof (int) * JZM6qp);
    scanf ("%d", &JZM6qp);
    for (Qk8HFDV = Rxw6oKjez; Qk8HFDV < Rxw6oKjez +JZM6qp; Qk8HFDV = Qk8HFDV +(274 - 273)) {
        scanf ("%s %d %d %c %c %d", Qk8HFDV->name, &Qk8HFDV->fgra, &Qk8HFDV->tgra, &Qk8HFDV->agnBfR, &Qk8HFDV->xIFQDfNu5asq, &Qk8HFDV->oJar2zIFk);
    }
    for (Qk8HFDV = Rxw6oKjez, z8auNv0 = trew; Rxw6oKjez +JZM6qp > Qk8HFDV; Qk8HFDV = Qk8HFDV +(925 - 924), z8auNv0 = z8auNv0 + (774 - 773)) {
        *z8auNv0 = (947 - 947);
        if (Qk8HFDV->fgra > (432 - 352) && (389 - 388) <= Qk8HFDV->oJar2zIFk) {
            *z8auNv0 += (8217 - 217);
            sum += (8150 - 150);
        }
        if ((729 - 644) < Qk8HFDV->fgra && Qk8HFDV->tgra > (140 - 60)) {
            sum += (4374 - 374);
            *z8auNv0 += (4675 - 675);
        }
        if ((180 - 90) < Qk8HFDV->fgra) {
            sum += (2749 - 749);
            *z8auNv0 += (2809 - 809);
        }
        if (Qk8HFDV->fgra > (99 - 14) && !('Y' != Qk8HFDV->xIFQDfNu5asq)) {
            sum += (1273 - 273);
            *z8auNv0 += (1871 - 871);
        }
        if (80 < Qk8HFDV->tgra && Qk8HFDV->agnBfR == 'Y') {
            *z8auNv0 += (1714 - 864);
            sum += (1507 - 657);
        }
    }
    temp = *Rxw6oKjez;
    max = *trew;
    for (Qk8HFDV = Rxw6oKjez, z8auNv0 = trew; Qk8HFDV < Rxw6oKjez +JZM6qp; Qk8HFDV = Qk8HFDV +1, z8auNv0 = z8auNv0 + 1) {
        if (*z8auNv0 > max) {
            max = *z8auNv0;
            temp = *Qk8HFDV;
        }
    }
    printf ("%s\n%d\n%d\n", temp.name, max, sum);
    return 0;
}

