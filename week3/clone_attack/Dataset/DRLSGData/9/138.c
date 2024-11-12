struct   patient {
    char uKML8pw4qsQg [(367 - 347)];
    int ribB0D7NJ;
    struct   patient *QxCOGTN;
}
*SWRSIxPcVMhT, *FL1IhWKdbSYy, *WQHVxUCMN1Wu;

struct   patient *Mz34dfcFQT (int yQpJ8xXIH7) {
    char g3lfdSmhB [(699 - 679)];
    int p81rqydickhO;
    int cC8bomyhHN0;
    int DiC3mQ2wVBJ;
    for (p81rqydickhO = (638 - 638); p81rqydickhO < yQpJ8xXIH7 - (392 - 391); p81rqydickhO = p81rqydickhO + (645 - 644)) {
        FL1IhWKdbSYy = SWRSIxPcVMhT;
        WQHVxUCMN1Wu = FL1IhWKdbSYy->QxCOGTN;
        for (cC8bomyhHN0 = (42 - 42); yQpJ8xXIH7 - (465 - 464) - p81rqydickhO > cC8bomyhHN0; cC8bomyhHN0 = cC8bomyhHN0 + (460 - 459)) {
            if (WQHVxUCMN1Wu->ribB0D7NJ >= (936 - 876) && WQHVxUCMN1Wu->ribB0D7NJ > FL1IhWKdbSYy->ribB0D7NJ) {
                DiC3mQ2wVBJ = FL1IhWKdbSYy->ribB0D7NJ;
                FL1IhWKdbSYy->ribB0D7NJ = WQHVxUCMN1Wu->ribB0D7NJ;
                WQHVxUCMN1Wu->ribB0D7NJ = DiC3mQ2wVBJ;
                strcpy (g3lfdSmhB, FL1IhWKdbSYy->uKML8pw4qsQg);
                strcpy (FL1IhWKdbSYy->uKML8pw4qsQg, WQHVxUCMN1Wu->uKML8pw4qsQg);
                strcpy (WQHVxUCMN1Wu->uKML8pw4qsQg, g3lfdSmhB);
            }
            FL1IhWKdbSYy = FL1IhWKdbSYy->QxCOGTN;
            WQHVxUCMN1Wu = WQHVxUCMN1Wu->QxCOGTN;
        }
    }
    return SWRSIxPcVMhT;
}

void  main () {
    int yQpJ8xXIH7;
    int p81rqydickhO;
    FL1IhWKdbSYy = SWRSIxPcVMhT = (struct   patient *) malloc (sizeof (struct   patient));
    scanf ("%d", &yQpJ8xXIH7);
    for (p81rqydickhO = 0; p81rqydickhO < yQpJ8xXIH7; p81rqydickhO = p81rqydickhO + (537 - 536)) {
        scanf ("%s %d", FL1IhWKdbSYy->uKML8pw4qsQg, &FL1IhWKdbSYy->ribB0D7NJ);
        WQHVxUCMN1Wu = FL1IhWKdbSYy;
        FL1IhWKdbSYy = (struct   patient *) malloc (sizeof (struct   patient));
        WQHVxUCMN1Wu->QxCOGTN = FL1IhWKdbSYy;
    }
    WQHVxUCMN1Wu->QxCOGTN = NULL;
    FL1IhWKdbSYy = Mz34dfcFQT (yQpJ8xXIH7);
    for (; FL1IhWKdbSYy;) {
        printf ("%s\n", FL1IhWKdbSYy->uKML8pw4qsQg);
        FL1IhWKdbSYy = FL1IhWKdbSYy->QxCOGTN;
    }
}

