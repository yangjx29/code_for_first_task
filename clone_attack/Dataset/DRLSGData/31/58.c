struct   student {
    char KxSemkhO3MTf [(911 - 811)];
    char N4Vlr03 [(921 - 821)];
    char Yhsz5W3gu9O [(475 - 473)];
    int GLsRTofUS;
    char Cju1mz4UXsE [(305 - 285)];
    char i6M1s5 [(998 - 898)];
    struct   student *UwW6StU42F;
};
struct   student *IBQewSabTPkr (void ) {
    struct   student *J0eCM2YqDwJb;
    struct   student *QHkcd1s7;
    struct   student *DyPClGn0 = NULL;
    QHkcd1s7 = (struct   student *) malloc (LEN);
    scanf ("%s", QHkcd1s7->KxSemkhO3MTf);
    if (strcmp (QHkcd1s7->KxSemkhO3MTf, "end") != (534 - 534)) {
        scanf ("%s%s%d%s%s", QHkcd1s7->N4Vlr03, QHkcd1s7->Yhsz5W3gu9O, &QHkcd1s7->GLsRTofUS, QHkcd1s7->Cju1mz4UXsE, QHkcd1s7->i6M1s5);
        QHkcd1s7->UwW6StU42F = NULL;
        DyPClGn0 = QHkcd1s7;
        for (; (532 - 531);) {
            QHkcd1s7 = (struct   student *) malloc (LEN);
            scanf ("%s", QHkcd1s7->KxSemkhO3MTf);
            if (!((868 - 868) != strcmp (QHkcd1s7->KxSemkhO3MTf, "end")))
                break;
            else {
                scanf ("%s%s%d%s%s", QHkcd1s7->N4Vlr03, QHkcd1s7->Yhsz5W3gu9O, &QHkcd1s7->GLsRTofUS, QHkcd1s7->Cju1mz4UXsE, QHkcd1s7->i6M1s5);
                QHkcd1s7->UwW6StU42F = DyPClGn0;
                DyPClGn0 = QHkcd1s7;
            }
        }
    }
    J0eCM2YqDwJb = DyPClGn0;
    return (J0eCM2YqDwJb);
}

void  WDz0sLPxnKQm (struct   student *J0eCM2YqDwJb) {
    struct   student *QHkcd1s7;
    QHkcd1s7 = J0eCM2YqDwJb;
    for (; QHkcd1s7 != NULL;) {
        printf ("%s %s %s %d %s %s\n", QHkcd1s7->KxSemkhO3MTf, QHkcd1s7->N4Vlr03, QHkcd1s7->Yhsz5W3gu9O, QHkcd1s7->GLsRTofUS, QHkcd1s7->Cju1mz4UXsE, QHkcd1s7->i6M1s5);
        QHkcd1s7 = QHkcd1s7->UwW6StU42F;
    }
}

void  main () {
    struct   student *J0eCM2YqDwJb = NULL;
    WDz0sLPxnKQm (J0eCM2YqDwJb);
    J0eCM2YqDwJb = IBQewSabTPkr ();
}

