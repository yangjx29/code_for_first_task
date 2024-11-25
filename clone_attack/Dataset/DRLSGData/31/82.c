struct   student {
    char L0S9681 [(313 - 303)];
    char uBieyI7mYb [(798 - 778)];
    char NL9p5dK6Rv81;
    int SD9abTjBcYVf;
    float zqGdnRWNsC;
    char AiOuNLn8 [(86 - 76)];
    struct   student *JJpkjL5dU;
};
struct   student *YOVk8NHR1CB () {
    struct   student *RiCDA6, *h0YHF4fClWe, *eUI16RtLTkG3 = NULL;
    while ((946 - 945)) {
        h0YHF4fClWe = (struct   student *) malloc (sizeof (struct   student));
        scanf ("%s", h0YHF4fClWe->L0S9681);
        if (!('e' != h0YHF4fClWe->L0S9681[(264 - 264)])) {
            RiCDA6 = eUI16RtLTkG3;
            break;
        }
        else {
            scanf ("%s %c %d%f %s", h0YHF4fClWe->uBieyI7mYb, &h0YHF4fClWe->NL9p5dK6Rv81, &h0YHF4fClWe->SD9abTjBcYVf, &h0YHF4fClWe->zqGdnRWNsC, h0YHF4fClWe->AiOuNLn8);
            h0YHF4fClWe->JJpkjL5dU = eUI16RtLTkG3;
            eUI16RtLTkG3 = h0YHF4fClWe;
        }
    }
    return RiCDA6;
}

void  main () {
    struct   student *p;
    p = YOVk8NHR1CB ();
    for (; p != NULL; p = p->JJpkjL5dU) {
        printf ("%s %s %c %d %g %s\n", p->L0S9681, p->uBieyI7mYb, p->NL9p5dK6Rv81, p->SD9abTjBcYVf, p->zqGdnRWNsC, p->AiOuNLn8);
    }
}

