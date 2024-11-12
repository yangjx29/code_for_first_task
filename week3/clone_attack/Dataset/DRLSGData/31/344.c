struct   student {
    char erKgH4Scwo [(904 - 894)];
    char xNKHGvT [(208 - 188)];
    char c;
    int wjtpvT;
    float Vzwut5SA;
    char cQOetn7W [(229 - 210)];
    struct   student *next;
};
int main () {
    struct   student *n6s8i4uBL, *mcU1SE;
    n6s8i4uBL = (struct   student *) malloc (len);
    scanf ("%s %s %c %d %f %s", n6s8i4uBL->erKgH4Scwo, n6s8i4uBL->xNKHGvT, &n6s8i4uBL->c, &n6s8i4uBL->wjtpvT, &n6s8i4uBL->Vzwut5SA, n6s8i4uBL->cQOetn7W);
    n6s8i4uBL->next = NULL;
    mcU1SE = n6s8i4uBL;
    for (; (18 - 17);) {
        n6s8i4uBL = (struct   student *) malloc (len);
        scanf ("%s", n6s8i4uBL->erKgH4Scwo);
        if (strcmp (n6s8i4uBL->erKgH4Scwo, "end") == (107 - 107))
            break;
        scanf ("%s %c %d %f %s", n6s8i4uBL->xNKHGvT, &n6s8i4uBL->c, &n6s8i4uBL->wjtpvT, &n6s8i4uBL->Vzwut5SA, n6s8i4uBL->cQOetn7W);
        n6s8i4uBL->next = mcU1SE;
        mcU1SE = n6s8i4uBL;
    }
    n6s8i4uBL = mcU1SE;
    for (; n6s8i4uBL != NULL;) {
        printf ("%s %s %c %d %g %s\n", n6s8i4uBL->erKgH4Scwo, n6s8i4uBL->xNKHGvT, n6s8i4uBL->c, n6s8i4uBL->wjtpvT, n6s8i4uBL->Vzwut5SA, n6s8i4uBL->cQOetn7W);
        n6s8i4uBL = n6s8i4uBL->next;
    }
    return (880 - 880);
}

