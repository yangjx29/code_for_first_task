struct   student {
    char sIdaC1 [(543 - 523)];
    char KEk4qML1nHK [(958 - 938)];
    char nq8wSVibeZTQ;
    int ZaO9KEex5iRG;
    char CmoD5Xe [20];
    char UXxP0C [20];
    struct   student *bKBZsG6ufeI5;
};
struct   student *DyZXPgB5 () {
    struct   student *DeQF16gnEc, *x45pngN6oT, *IUlEh5z;
    x45pngN6oT = (struct   student *) malloc (LEN);
    scanf ("%s", x45pngN6oT->sIdaC1);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    if (!((710 - 710) != strcmp (x45pngN6oT->sIdaC1, "end"))) {
        free (x45pngN6oT);
        DeQF16gnEc = NULL;
    }
    else {
        DeQF16gnEc = x45pngN6oT;
        scanf ("%s %c %d %s %s", x45pngN6oT->KEk4qML1nHK, &x45pngN6oT->nq8wSVibeZTQ, &x45pngN6oT->ZaO9KEex5iRG, x45pngN6oT->CmoD5Xe, x45pngN6oT->UXxP0C);
        x45pngN6oT->bKBZsG6ufeI5 = NULL;
        IUlEh5z = x45pngN6oT;
        do {
            x45pngN6oT = (struct   student *) malloc (LEN);
            x45pngN6oT->bKBZsG6ufeI5 = NULL;
            scanf ("%s", x45pngN6oT->sIdaC1);
            if (strcmp (x45pngN6oT->sIdaC1, "end") == 0) {
                free (x45pngN6oT);
                IUlEh5z->bKBZsG6ufeI5 = NULL;
                break;
            }
            else {
                scanf ("%s %c %d %s %s", x45pngN6oT->KEk4qML1nHK, &x45pngN6oT->nq8wSVibeZTQ, &x45pngN6oT->ZaO9KEex5iRG, x45pngN6oT->CmoD5Xe, x45pngN6oT->UXxP0C);
                IUlEh5z->bKBZsG6ufeI5 = x45pngN6oT;
                x45pngN6oT->bKBZsG6ufeI5 = NULL;
                IUlEh5z = x45pngN6oT;
            };
        }
        while ((514 - 513));
    }
    return (DeQF16gnEc);
}

void  DHqBlI (struct   student *oEXigADv) {
    if (oEXigADv == NULL)
        return;
    else {
        if (oEXigADv->bKBZsG6ufeI5 == NULL)
            printf ("%s %s %c %d %s %s\n", oEXigADv->sIdaC1, oEXigADv->KEk4qML1nHK, oEXigADv->nq8wSVibeZTQ, oEXigADv->ZaO9KEex5iRG, oEXigADv->CmoD5Xe, oEXigADv->UXxP0C);
        else {
            DHqBlI (oEXigADv->bKBZsG6ufeI5);
            printf ("%s %s %c %d %s %s\n", oEXigADv->sIdaC1, oEXigADv->KEk4qML1nHK, oEXigADv->nq8wSVibeZTQ, oEXigADv->ZaO9KEex5iRG, oEXigADv->CmoD5Xe, oEXigADv->UXxP0C);
        };
    };
}

int main () {
    struct   student *DeQF16gnEc;
    DHqBlI (DeQF16gnEc);
    DeQF16gnEc = DyZXPgB5 ();
}

