struct   s {
    char uYEBtR [(600 - 580)];
    char eomWTBDr0cj [(967 - 947)];
    char ce7AnYo3w;
    int HgeA7VnFsO;
    char HYubmaxskWN [(680 - 660)];
    char pv5RXSnr [(746 - 726)];
    struct   s *fHfnJ8e;
};
int main () {
    struct   s *Tu3RX45rb (void );
    struct   s *LErwzGu;
    struct   s *HBMX7W;
    LErwzGu = Tu3RX45rb ();
    HBMX7W = LErwzGu;
    if (LErwzGu != NULL) {
        for (; HBMX7W->fHfnJ8e != NULL;) {
            printf ("%s %s %c %d %s %s\n", HBMX7W->uYEBtR, HBMX7W->eomWTBDr0cj, HBMX7W->ce7AnYo3w, HBMX7W->HgeA7VnFsO, HBMX7W->HYubmaxskWN, HBMX7W->pv5RXSnr);
            HBMX7W = HBMX7W->fHfnJ8e;
        }
        printf ("%s %s %c %d %s %s\n", HBMX7W->uYEBtR, HBMX7W->eomWTBDr0cj, HBMX7W->ce7AnYo3w, HBMX7W->HgeA7VnFsO, HBMX7W->HYubmaxskWN, HBMX7W->pv5RXSnr);
    }
    return (703 - 703);
}

struct   s *Tu3RX45rb (void ) {
    struct   s *LErwzGu;
    struct   s *XXYn0lIE7;
    struct   s *GX7Dug1UIB3;
    LErwzGu = (struct   s *) malloc (sizeof (struct   s));
    scanf ("%s %s %c %d %s %s", LErwzGu->uYEBtR, LErwzGu->eomWTBDr0cj, &LErwzGu->ce7AnYo3w, &LErwzGu->HgeA7VnFsO, LErwzGu->HYubmaxskWN, LErwzGu->pv5RXSnr);
    LErwzGu->fHfnJ8e = NULL;
    XXYn0lIE7 = LErwzGu;
    {
        while (true) {
            GX7Dug1UIB3 = (struct   s *) malloc (sizeof (struct   s));
            scanf ("%s", GX7Dug1UIB3->uYEBtR);
            if (strcmp (GX7Dug1UIB3->uYEBtR, "end"))
                scanf (" %s %c %d %s %s", GX7Dug1UIB3->eomWTBDr0cj, &GX7Dug1UIB3->ce7AnYo3w, &GX7Dug1UIB3->HgeA7VnFsO, GX7Dug1UIB3->HYubmaxskWN, GX7Dug1UIB3->pv5RXSnr);
            else
                break;
            GX7Dug1UIB3->fHfnJ8e = XXYn0lIE7;
            XXYn0lIE7 = GX7Dug1UIB3;
        }
    }
    GX7Dug1UIB3->fHfnJ8e = XXYn0lIE7;
    return (XXYn0lIE7);
}

