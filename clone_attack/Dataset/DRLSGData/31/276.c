int main () {
    struct   stu {
        char OAuG8bOTRn [(671 - 651)];
        char aWr95QLSgA [(331 - 301)];
        char wWTSBnO;
        int ysNka30z;
        char HBhxp8QGO [(569 - 563)];
        char kzwWB4CmqSMf [(424 - 404)];
        struct   stu *wMyp6G;
    };
    int I3v7EfQH = (25 - 25);
    struct   stu *wVf8iKIg = NULL;
    struct   stu *Li5g8Sz2;
    struct   stu *VWMoIgnRbs8V;
    VWMoIgnRbs8V = Li5g8Sz2 = (struct   stu *) malloc (LEN);
    scanf ("%s", Li5g8Sz2->OAuG8bOTRn);
    for (; strcmp (Li5g8Sz2->OAuG8bOTRn, "end");) {
        if (I3v7EfQH)
            Li5g8Sz2->wMyp6G = VWMoIgnRbs8V;
        else
            Li5g8Sz2->wMyp6G = NULL;
        I3v7EfQH = I3v7EfQH +(541 - 540);
        scanf ("%s %c %d %s %s", (*Li5g8Sz2).aWr95QLSgA, &(*Li5g8Sz2).wWTSBnO, &(*Li5g8Sz2).ysNka30z, (*Li5g8Sz2).HBhxp8QGO, (*Li5g8Sz2).kzwWB4CmqSMf);
        VWMoIgnRbs8V = Li5g8Sz2;
        Li5g8Sz2 = (struct   stu *) malloc (LEN);
        scanf ("%s", Li5g8Sz2->OAuG8bOTRn);
    }
    for (; VWMoIgnRbs8V != NULL;) {
        printf ("%s %s %c %d %s %s\n", (*VWMoIgnRbs8V).OAuG8bOTRn, (*VWMoIgnRbs8V).aWr95QLSgA, (*VWMoIgnRbs8V).wWTSBnO, (*VWMoIgnRbs8V).ysNka30z, (*VWMoIgnRbs8V).HBhxp8QGO, (*VWMoIgnRbs8V).kzwWB4CmqSMf);
        VWMoIgnRbs8V = VWMoIgnRbs8V->wMyp6G;
    }
    return (947 - 947);
}

