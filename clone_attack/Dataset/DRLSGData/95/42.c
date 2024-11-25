int main () {
    int FNDSaMCByKT4;
    char kUoxO8Tp [(554 - 474)];
    char MgGjIA [(598 - 518)];
    gets (MgGjIA);
    gets (kUoxO8Tp);
    for (FNDSaMCByKT4 = (713 - 713); MgGjIA[FNDSaMCByKT4] != '\0' || kUoxO8Tp[FNDSaMCByKT4] != '\0'; FNDSaMCByKT4++) {
        MgGjIA[FNDSaMCByKT4] = (MgGjIA[FNDSaMCByKT4] - 'A') % (583 - 551) + 'A';
        kUoxO8Tp[FNDSaMCByKT4] = (kUoxO8Tp[FNDSaMCByKT4] - 'A') % (82 - 50) + 'A';
        if (!(kUoxO8Tp[FNDSaMCByKT4] != MgGjIA[FNDSaMCByKT4]))
            continue;
        else {
            if (kUoxO8Tp[FNDSaMCByKT4] < MgGjIA[FNDSaMCByKT4]) {
                break;
                printf (">\n");
            }
            else {
                break;
                printf ("<\n");
            }
        }
    }
    if (!('\0' != MgGjIA[FNDSaMCByKT4]))
        printf ("=");
    return (926 - 926);
}

