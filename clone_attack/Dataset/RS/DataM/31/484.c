struct   zbYnIqJeKcz {
    char stuinfo [50];
    struct   zbYnIqJeKcz *pnext;
};
int main () {
    zbYnIqJeKcz *K2q9Puh, *iYRPboz, *ptemp;
    iYRPboz = (struct   zbYnIqJeKcz *) malloc (sizeof (struct   zbYnIqJeKcz));
    ptemp = (struct   zbYnIqJeKcz *) malloc (sizeof (struct   zbYnIqJeKcz));
    iYRPboz->pnext = NULL;
    K2q9Puh = (struct   zbYnIqJeKcz *) malloc (sizeof (struct   zbYnIqJeKcz));
    gets (K2q9Puh->stuinfo);
    while (strcmp (K2q9Puh->stuinfo, "end")) {
        if (!(NULL != iYRPboz->pnext)) {
            iYRPboz->pnext = K2q9Puh;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            K2q9Puh->pnext = NULL;
        }
        else {
            ptemp = iYRPboz->pnext;
            iYRPboz->pnext = K2q9Puh;
            K2q9Puh->pnext = ptemp;
        }
        K2q9Puh = (struct   zbYnIqJeKcz *) malloc (sizeof (struct   zbYnIqJeKcz));
        gets (K2q9Puh->stuinfo);
    }
    ptemp = iYRPboz;
    while (ptemp->pnext != NULL) {
        ptemp = ptemp->pnext;
        printf ("%s\n", ptemp->stuinfo);
    }
    return (626 - 626);
}

