void  main () {
    struct   date {
        int leQgq1KsoA;
        int zY76Dji2Kk;
        int XxUQAjkR4Wq7;
        int RjfEsZ48FvG;
    }
    date1;
    int HZoHF2JPj [12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int JsQ9vE;
    scanf ("%d %d %d", &date1.leQgq1KsoA, &date1.zY76Dji2Kk, &date1.XxUQAjkR4Wq7);
    date1.RjfEsZ48FvG = 0;
    if (date1.zY76Dji2Kk > 1) {
        {
            JsQ9vE = 0;
            while (JsQ9vE <= date1.zY76Dji2Kk - 2) {
                date1.RjfEsZ48FvG = date1.RjfEsZ48FvG + HZoHF2JPj[JsQ9vE];
                JsQ9vE = JsQ9vE +1;
            };
        }
        date1.RjfEsZ48FvG = date1.RjfEsZ48FvG + date1.XxUQAjkR4Wq7;
    }
    else {
        date1.RjfEsZ48FvG = date1.XxUQAjkR4Wq7;
    }
    printf ("%d", date1.RjfEsZ48FvG);
}

