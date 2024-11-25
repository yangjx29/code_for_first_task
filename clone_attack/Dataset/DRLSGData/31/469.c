struct   student {
    char NryCtxuJvY [(429 - 397)], wElKO74, r4Ft58myU [(991 - 959)], dD8hofw [(151 - 141)], YHNBVv [(799 - 789)];
    int chFWxI;
    struct   student *aH234nAJxjk;
};
struct   student *s0bAZqMt4W6S () {
    char EEKshew [(253 - 243)];
    struct   student *P5nevm9tB = NULL, *srTgIV2YXSxz, *ltYC3jO9hfJF;
    srTgIV2YXSxz = ltYC3jO9hfJF = (struct   student *) malloc (Len);
    scanf ("%s %s %c %d %s %s", srTgIV2YXSxz->dD8hofw, srTgIV2YXSxz->NryCtxuJvY, &srTgIV2YXSxz->wElKO74, &srTgIV2YXSxz->chFWxI, srTgIV2YXSxz->YHNBVv, srTgIV2YXSxz->r4Ft58myU);
    srTgIV2YXSxz->aH234nAJxjk = NULL;
    P5nevm9tB = srTgIV2YXSxz;
    ltYC3jO9hfJF = srTgIV2YXSxz;
    do {
        scanf ("%s", EEKshew);
        if (!((220 - 220) != strcmp (EEKshew, "end")))
            break;
        else {
            srTgIV2YXSxz = (struct   student *) malloc (Len);
            strcpy (srTgIV2YXSxz->dD8hofw, EEKshew);
            scanf ("%s %c %d %s %s", srTgIV2YXSxz->NryCtxuJvY, &srTgIV2YXSxz->wElKO74, &srTgIV2YXSxz->chFWxI, srTgIV2YXSxz->YHNBVv, srTgIV2YXSxz->r4Ft58myU);
            srTgIV2YXSxz->aH234nAJxjk = NULL;
            ltYC3jO9hfJF->aH234nAJxjk = srTgIV2YXSxz;
            ltYC3jO9hfJF = srTgIV2YXSxz;
        }
    }
    while ((984 - 983));
    return P5nevm9tB;
}

void  yPUtboQwIdqS (struct   student *P5nevm9tB) {
    struct   student *srTgIV2YXSxz;
    struct   student *ltYC3jO9hfJF;
    while (srTgIV2YXSxz) {
        srTgIV2YXSxz = P5nevm9tB;
        if (!(NULL != srTgIV2YXSxz->aH234nAJxjk)) {
            printf ("%s %s %c %d %s %s", srTgIV2YXSxz->dD8hofw, srTgIV2YXSxz->NryCtxuJvY, srTgIV2YXSxz->wElKO74, srTgIV2YXSxz->chFWxI, srTgIV2YXSxz->YHNBVv, srTgIV2YXSxz->r4Ft58myU);
            break;
        }
        else {
            free (srTgIV2YXSxz);
            while (srTgIV2YXSxz->aH234nAJxjk != NULL) {
                ltYC3jO9hfJF = srTgIV2YXSxz;
                srTgIV2YXSxz = srTgIV2YXSxz->aH234nAJxjk;
            }
            ltYC3jO9hfJF->aH234nAJxjk = NULL;
            printf ("%s %s %c %d %s %s\n", srTgIV2YXSxz->dD8hofw, srTgIV2YXSxz->NryCtxuJvY, srTgIV2YXSxz->wElKO74, srTgIV2YXSxz->chFWxI, srTgIV2YXSxz->YHNBVv, srTgIV2YXSxz->r4Ft58myU);
        }
    }
}

int main () {
    struct   student *P5nevm9tB;
    yPUtboQwIdqS (P5nevm9tB);
    P5nevm9tB = s0bAZqMt4W6S ();
}

