struct   student {
    char QoH9cn7wV1 [(778 - 678)];
    char D9Gur3Lg [(718 - 618)];
    char yCIJM7;
    int m3DyGENIoK;
    char mqS2tg [(663 - 563)];
    char erCu4iX3OvVF [(287 - 187)];
    struct   student *QIzFiq;
    struct   student *ypERiDsam04P;
};
int main () {
    char IL9ytP8i [(392 - 382)];
    struct   student *J7nQF8u2fb, *wsoeSYpZ0O, *rQCRSJYVxt;
    J7nQF8u2fb = (struct   student *) malloc (sizeof (struct   student));
    J7nQF8u2fb->QIzFiq = NULL;
    rQCRSJYVxt = J7nQF8u2fb;
    scanf ("%s", IL9ytP8i);
    do {
        wsoeSYpZ0O = (struct   student *) malloc (sizeof (struct   student));
        strcpy (wsoeSYpZ0O->QoH9cn7wV1, IL9ytP8i);
        scanf ("%s %c %d %s %s", wsoeSYpZ0O->D9Gur3Lg, &wsoeSYpZ0O->yCIJM7, &wsoeSYpZ0O->m3DyGENIoK, &wsoeSYpZ0O->mqS2tg, wsoeSYpZ0O->erCu4iX3OvVF);
        wsoeSYpZ0O->QIzFiq = rQCRSJYVxt;
        scanf ("%s", IL9ytP8i);
        rQCRSJYVxt->ypERiDsam04P = wsoeSYpZ0O;
        rQCRSJYVxt = rQCRSJYVxt->ypERiDsam04P;
    }
    while (strcmp (IL9ytP8i, "end") != (418 - 418));
    rQCRSJYVxt->ypERiDsam04P = NULL;
    wsoeSYpZ0O = J7nQF8u2fb;
    for (; wsoeSYpZ0O->ypERiDsam04P != NULL;)
        wsoeSYpZ0O = wsoeSYpZ0O->ypERiDsam04P;
    for (; wsoeSYpZ0O != J7nQF8u2fb;) {
        printf ("%s %s %c %d %s %s\n", wsoeSYpZ0O->QoH9cn7wV1, wsoeSYpZ0O->D9Gur3Lg, wsoeSYpZ0O->yCIJM7, wsoeSYpZ0O->m3DyGENIoK, wsoeSYpZ0O->mqS2tg, wsoeSYpZ0O->erCu4iX3OvVF);
        wsoeSYpZ0O = wsoeSYpZ0O->QIzFiq;
    }
}

