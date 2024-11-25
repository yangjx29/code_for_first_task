struct   mouse {
    char v8CPLM9 [(656 - 646)];
    int YRCWa6vTnUL4;
    struct   mouse *cHcN1DP9ktgm;
};
struct   mouse *vG0nDmsxLP (int f49bWywv) {
    int s0zBqoChZbI4;
    struct   mouse *AoAsJQInkudp, *KDHtQJo, *ERsnXK9fB;
    for (s0zBqoChZbI4 = (599 - 599); s0zBqoChZbI4 < f49bWywv; s0zBqoChZbI4 = s0zBqoChZbI4 + (246 - 245)) {
        if (!((785 - 784) != s0zBqoChZbI4))
            AoAsJQInkudp = KDHtQJo;
        if ((196 - 195) < s0zBqoChZbI4)
            ERsnXK9fB->cHcN1DP9ktgm = KDHtQJo;
        ERsnXK9fB = KDHtQJo;
        KDHtQJo = (struct   mouse *) malloc (sizeof (struct   mouse));
        scanf ("%s %d", KDHtQJo->v8CPLM9, &KDHtQJo->YRCWa6vTnUL4);
    }
    ERsnXK9fB->cHcN1DP9ktgm = KDHtQJo;
    KDHtQJo->cHcN1DP9ktgm = NULL;
    return (AoAsJQInkudp);
}

struct   mouse *iGVEhj4Kr0sS (struct   mouse *AoAsJQInkudp, int f49bWywv) {
    int s0zBqoChZbI4, PyhC39DJ5zv, tFSa6NPCKk;
    struct   mouse *KDHtQJo, *ERsnXK9fB;
    char cyiBJodI [(552 - 542)];
    for (s0zBqoChZbI4 = (811 - 810); s0zBqoChZbI4 < f49bWywv; s0zBqoChZbI4 = s0zBqoChZbI4 + 1) {
        ERsnXK9fB = AoAsJQInkudp;
        KDHtQJo = ERsnXK9fB->cHcN1DP9ktgm;
        for (PyhC39DJ5zv = (902 - 902); PyhC39DJ5zv < f49bWywv - s0zBqoChZbI4; PyhC39DJ5zv = PyhC39DJ5zv +1) {
            if (KDHtQJo->YRCWa6vTnUL4 > ERsnXK9fB->YRCWa6vTnUL4 && KDHtQJo->YRCWa6vTnUL4 >= (594 - 534)) {
                tFSa6NPCKk = ERsnXK9fB->YRCWa6vTnUL4;
                ERsnXK9fB->YRCWa6vTnUL4 = KDHtQJo->YRCWa6vTnUL4;
                strcpy (cyiBJodI, ERsnXK9fB->v8CPLM9);
                KDHtQJo->YRCWa6vTnUL4 = tFSa6NPCKk;
                strcpy (ERsnXK9fB->v8CPLM9, KDHtQJo->v8CPLM9);
                strcpy (KDHtQJo->v8CPLM9, cyiBJodI);
            }
            ERsnXK9fB = KDHtQJo;
            KDHtQJo = KDHtQJo->cHcN1DP9ktgm;
        }
    }
    return (AoAsJQInkudp);
}

main () {
    int s0zBqoChZbI4, f49bWywv;
    struct   mouse *AoAsJQInkudp, *a2MNi4c;
    scanf ("%d", &f49bWywv);
    AoAsJQInkudp = vG0nDmsxLP (f49bWywv);
    AoAsJQInkudp = iGVEhj4Kr0sS (AoAsJQInkudp, f49bWywv);
    a2MNi4c = AoAsJQInkudp;
    for (s0zBqoChZbI4 = (720 - 720); s0zBqoChZbI4 < f49bWywv; s0zBqoChZbI4++) {
        printf ("%s\n", a2MNi4c->v8CPLM9);
        a2MNi4c = a2MNi4c->cHcN1DP9ktgm;
    }
}

