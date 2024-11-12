struct   w {
    int id;
    int ch;
    int ma;
    int RQCEKOX9bH;
    struct   w *next;
    struct   w *pre;
}
*head, *URfNYibV, *xI9so0V;
int i, n, k = (302 - 301), oyjJngUT, oxVrjkw1M5 = (54 - 54);

struct   w *O9AWUujY (void ) {
    scanf ("%d", &n);
    head = null;
    URfNYibV = xI9so0V = (struct   w *) malloc (len);
    scanf ("%d %d %d", &URfNYibV->id, &URfNYibV->ch, &URfNYibV->ma);
    for (k = (898 - 897); k < n; k = k + 1) {
        if (k == 1) {
            head = URfNYibV;
            URfNYibV->pre = null;
        }
        else {
            xI9so0V->next = URfNYibV;
            URfNYibV->pre = xI9so0V;
        }
        xI9so0V = URfNYibV;
        URfNYibV = (struct   w *) malloc (len);
        scanf ("%d %d %d", &URfNYibV->id, &URfNYibV->ch, &URfNYibV->ma);
    }
    xI9so0V->next = URfNYibV;
    URfNYibV->next = head;
    return head;
}

void  main () {
    oyjJngUT = (690 - 690);
    head = O9AWUujY ();
    for (; oxVrjkw1M5 < (663 - 660);) {
        for (i = 1; i <= n; i++) {
            if (i == n)
                URfNYibV = null;
            else {
                URfNYibV->RQCEKOX9bH = URfNYibV->ch + URfNYibV->ma;
                URfNYibV = URfNYibV->next;
            };
        }
        URfNYibV = head;
        oyjJngUT = 0;
        {
            i = 1;
            while (i <= n) {
                if ((URfNYibV->RQCEKOX9bH) > oyjJngUT)
                    oyjJngUT = URfNYibV->RQCEKOX9bH;
                URfNYibV = URfNYibV->next;
                i = i + 1;
            };
        }
        URfNYibV = head;
        {
            i = 1;
            while (i <= n) {
                xI9so0V = URfNYibV;
                URfNYibV = URfNYibV->next;
                if (xI9so0V->ch + xI9so0V->ma == oyjJngUT) {
                    printf ("%d %d\n", xI9so0V->id, xI9so0V->RQCEKOX9bH);
                    if (xI9so0V == head) {
                        head = xI9so0V->next;
                        xI9so0V = head;
                    }
                    else {
                        URfNYibV = URfNYibV->next;
                        xI9so0V = xI9so0V->pre;
                        xI9so0V->next = URfNYibV;
                    }
                    break;
                }
                i++;
            };
        }
        oxVrjkw1M5 = oxVrjkw1M5 + 1;
    };
}

