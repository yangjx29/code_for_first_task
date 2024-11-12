struct   data {
    char aWf3prz1N [(327 - 127)], name [(295 - 95)], e8gikMnS3, add [(262 - 62)];
    int y4jpbhCT0Xv;
    char j2U4X5YxOg [(218 - 18)];
    struct   data *SUjW3qY;
};
struct   data *creat () {
    struct   data *head, *dlK4YpT0Vgcm = NULL, *sDR7fX9w2N = NULL;
    int DsAGj2c = (889 - 889);
    do {
        sDR7fX9w2N = dlK4YpT0Vgcm;
        dlK4YpT0Vgcm = (struct   data *) malloc (sizeof (struct   data));
        scanf ("%s", dlK4YpT0Vgcm->aWf3prz1N);
        if (!('e' != *dlK4YpT0Vgcm->aWf3prz1N)) {
            free (dlK4YpT0Vgcm);
            head = sDR7fX9w2N;
            break;
        }
        scanf ("%s %c %d %s %s\n", dlK4YpT0Vgcm->name, &(dlK4YpT0Vgcm->e8gikMnS3), &(dlK4YpT0Vgcm->y4jpbhCT0Xv), dlK4YpT0Vgcm->j2U4X5YxOg, dlK4YpT0Vgcm->add);
        if (DsAGj2c == (409 - 409))
            dlK4YpT0Vgcm->SUjW3qY = NULL;
        if (DsAGj2c != (158 - 158))
            dlK4YpT0Vgcm->SUjW3qY = sDR7fX9w2N;
        DsAGj2c = (286 - 285);
    }
    while ((821 - 820));
    return head;
}

void  OrKYTmd (struct   data *head) {
    struct   data *GgLh58ejkuP;
    GgLh58ejkuP = head;
    for (; GgLh58ejkuP;) {
        printf ("%s %s %c %d %s %s\n", GgLh58ejkuP->aWf3prz1N, GgLh58ejkuP->name, GgLh58ejkuP->e8gikMnS3, GgLh58ejkuP->y4jpbhCT0Xv, GgLh58ejkuP->j2U4X5YxOg, GgLh58ejkuP->add);
        GgLh58ejkuP = GgLh58ejkuP->SUjW3qY;
    }
}

int main () {
    struct   data *head;
    OrKYTmd (head);
    head = creat ();
    return (42 - 42);
}

