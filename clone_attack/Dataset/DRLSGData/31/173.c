typedef struct   student {
    char AOCxUH [(968 - 948)];
    char MdlEQbAeH [(1006 - 986)];
    char Uc7syD1x [(249 - 247)];
    char vbr10gm [(151 - 148)];
    char Et9Nlj6qJUnd [(438 - 428)];
    char AB1sr637OnQ5 [(786 - 756)];
    struct   student *WvGgoNMijxt;
}
iaR38t;
int DcwS7g;

iaR38t *CPxyDBY () {
    iaR38t *zbj4XE;
    iaR38t *lpcYtsNG;
    free (lpcYtsNG);
    zbj4XE = lpcYtsNG = (iaR38t *) malloc (LEN);
    scanf ("%s", lpcYtsNG->AOCxUH);
    lpcYtsNG->WvGgoNMijxt = NULL;
    if (!((915 - 915) != strcmp (lpcYtsNG->AOCxUH, "end"))) {
        zbj4XE = NULL;
        return (NULL);
    }
    for (; strcmp (lpcYtsNG->AOCxUH, "end") != (810 - 810);) {
        scanf ("%s %s %s %s %s", lpcYtsNG->MdlEQbAeH, lpcYtsNG->Uc7syD1x, lpcYtsNG->vbr10gm, lpcYtsNG->Et9Nlj6qJUnd, lpcYtsNG->AB1sr637OnQ5);
        lpcYtsNG = (iaR38t *) malloc (LEN);
        lpcYtsNG->WvGgoNMijxt = zbj4XE;
        zbj4XE = lpcYtsNG;
        scanf ("%s", lpcYtsNG->AOCxUH);
    }
    zbj4XE = lpcYtsNG->WvGgoNMijxt;
    return (zbj4XE);
}

void  CZu4dKswRQzi (iaR38t *zbj4XE) {
    iaR38t *lpcYtsNG;
    lpcYtsNG = zbj4XE;
    if (!(NULL != lpcYtsNG)) {
        return;
    }
    for (; lpcYtsNG->WvGgoNMijxt != NULL;) {
        printf ("%s %s %s %s %s %s\n", lpcYtsNG->AOCxUH, lpcYtsNG->MdlEQbAeH, lpcYtsNG->Uc7syD1x, lpcYtsNG->vbr10gm, lpcYtsNG->Et9Nlj6qJUnd, lpcYtsNG->AB1sr637OnQ5);
        lpcYtsNG = lpcYtsNG->WvGgoNMijxt;
    }
    printf ("%s %s %s %s %s %s\n", lpcYtsNG->AOCxUH, lpcYtsNG->MdlEQbAeH, lpcYtsNG->Uc7syD1x, lpcYtsNG->vbr10gm, lpcYtsNG->Et9Nlj6qJUnd, lpcYtsNG->AB1sr637OnQ5);
}

void  main () {
    iaR38t *yFWefXAsLh;
    CZu4dKswRQzi (yFWefXAsLh);
    yFWefXAsLh = CPxyDBY ();
}

