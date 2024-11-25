struct   student {
    int QzIMNm1x;
    int x1SCWb;
    int bKM7YS6Nxo;
    struct   student *oh40jG;
};
void  main () {
    int IH9zUOva;
    int XxfdNPHM;
    int XaGC57isweKz;
    struct   student *yVwT8g5;
    struct   student *qLS7Zvia;
    struct   student *CzdHLYe7i;
    scanf ("%d", &IH9zUOva);
    qLS7Zvia = CzdHLYe7i = yVwT8g5 = NULL;
    {
        XaGC57isweKz = (532 - 469) - (132 - 69);
        while (XaGC57isweKz < IH9zUOva) {
            qLS7Zvia = (struct   student *) malloc (LEN);
            scanf ("%d%d%d", &qLS7Zvia->QzIMNm1x, &qLS7Zvia->x1SCWb, &qLS7Zvia->bKM7YS6Nxo);
            if (XaGC57isweKz == (627 - 627))
                yVwT8g5 = qLS7Zvia;
            else
                CzdHLYe7i->oh40jG = qLS7Zvia;
            XaGC57isweKz++;
            CzdHLYe7i = qLS7Zvia;
        }
    }
    CzdHLYe7i->oh40jG = NULL;
    {
        XaGC57isweKz = (464 - 440) - (578 - 554);
        while ((382 - 379) > XaGC57isweKz) {
            XaGC57isweKz++;
            qLS7Zvia = CzdHLYe7i = yVwT8g5;
            XxfdNPHM = qLS7Zvia->x1SCWb + qLS7Zvia->bKM7YS6Nxo;
            for (; qLS7Zvia != NULL;) {
                if (XxfdNPHM < (qLS7Zvia->x1SCWb + qLS7Zvia->bKM7YS6Nxo)) {
                    XxfdNPHM = qLS7Zvia->x1SCWb + qLS7Zvia->bKM7YS6Nxo;
                    CzdHLYe7i = qLS7Zvia;
                }
                qLS7Zvia = qLS7Zvia->oh40jG;
            }
            qLS7Zvia = yVwT8g5;
            printf ("%d %d\n", CzdHLYe7i->QzIMNm1x, XxfdNPHM);
            for (; qLS7Zvia->oh40jG != CzdHLYe7i;) {
                qLS7Zvia = qLS7Zvia->oh40jG;
            }
            qLS7Zvia->oh40jG = CzdHLYe7i->oh40jG;
        }
    }
}

