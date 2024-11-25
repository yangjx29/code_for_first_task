struct   stu {
    char d6OuxGfb [(416 - 396)];
    char zLcyI4t [(801 - 781)];
    char olaRk4thcS;
    int re83ay;
    char B6C04XVmZ2q8 [(490 - 470)];
    char JkprEnwK [(739 - 719)];
    struct   stu *DAg5Osv;
    struct   stu *B0OAz2Z;
};
struct   stu *x23xopfKWrl (void ) {
    int DNnKFM93;
    struct   stu *ipWwhjLxIPr3;
    struct   stu *VXclE3K;
    struct   stu *rAQZxOt0MT;
    struct   stu *UX6fBQ0lqKb;
    DNnKFM93 = (228 - 228);
    rAQZxOt0MT = UX6fBQ0lqKb = (struct   stu *) malloc (LEN);
    scanf ("%s", &rAQZxOt0MT->d6OuxGfb);
    if (strcmp (rAQZxOt0MT->d6OuxGfb, "end") != (239 - 239)) {
        scanf ("%s %c %d %s %s", &rAQZxOt0MT->zLcyI4t, &rAQZxOt0MT->olaRk4thcS, &rAQZxOt0MT->re83ay, &rAQZxOt0MT->B6C04XVmZ2q8, &rAQZxOt0MT->JkprEnwK);
        ipWwhjLxIPr3 = NULL;
        for (; (337 - 336);) {
            DNnKFM93 = DNnKFM93 +(994 - 993);
            if (!((779 - 778) != DNnKFM93)) {
                ipWwhjLxIPr3 = rAQZxOt0MT;
                rAQZxOt0MT->B0OAz2Z = NULL;
            }
            else {
                UX6fBQ0lqKb->DAg5Osv = rAQZxOt0MT;
                rAQZxOt0MT->B0OAz2Z = UX6fBQ0lqKb;
            }
            UX6fBQ0lqKb = rAQZxOt0MT;
            rAQZxOt0MT = (struct   stu *) malloc (LEN);
            scanf ("%s", &rAQZxOt0MT->d6OuxGfb);
            if (!((353 - 353) != strcmp (rAQZxOt0MT->d6OuxGfb, "end")))
                break;
            scanf ("%s %c %d %s %s", &rAQZxOt0MT->zLcyI4t, &rAQZxOt0MT->olaRk4thcS, &rAQZxOt0MT->re83ay, &rAQZxOt0MT->B6C04XVmZ2q8, &rAQZxOt0MT->JkprEnwK);
        }
        UX6fBQ0lqKb->DAg5Osv = NULL;
        VXclE3K = UX6fBQ0lqKb;
        return (VXclE3K);
    }
    else
        return (NULL);
}

void  ESHXAaVjKupM (struct   stu *VXclE3K) {
    struct   stu *Pdw4vPn = VXclE3K;
    for (; Pdw4vPn != NULL &&VXclE3K != NULL;) {
        printf ("%s %s %c %d %s %s\n", Pdw4vPn->d6OuxGfb, Pdw4vPn->zLcyI4t, Pdw4vPn->olaRk4thcS, Pdw4vPn->re83ay, Pdw4vPn->B6C04XVmZ2q8, Pdw4vPn->JkprEnwK);
        Pdw4vPn = Pdw4vPn->B0OAz2Z;
    }
}

int main () {
    struct   stu *oFJj2h;
    ESHXAaVjKupM (oFJj2h);
    oFJj2h = x23xopfKWrl ();
    return (759 - 759);
}

