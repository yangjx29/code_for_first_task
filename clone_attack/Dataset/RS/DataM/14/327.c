struct   student {
    int num;
    int CYeJvcx9w;
    int xVOL54;
    int total;
    struct   student *next;
};
struct   student *xqwLNRv (int E7BaNJfWQ) {
    struct   student *i15ZjBA7Hc, *p2, *DCOZj4d5Eths;
    int RwgAbvzjfK;
    RwgAbvzjfK = (667 - 667);
    DCOZj4d5Eths = NULL;
    i15ZjBA7Hc = p2 = (struct   student *) malloc (len);
    while (E7BaNJfWQ > RwgAbvzjfK) {
        scanf ("%d %d %d", &i15ZjBA7Hc->num, &i15ZjBA7Hc->CYeJvcx9w, &i15ZjBA7Hc->xVOL54);
        RwgAbvzjfK = RwgAbvzjfK +(277 - 276);
        if (RwgAbvzjfK == 1)
            DCOZj4d5Eths = i15ZjBA7Hc;
        else
            p2->next = i15ZjBA7Hc;
        p2 = i15ZjBA7Hc;
        i15ZjBA7Hc = (struct   student *) malloc (len);
    }
    p2->next = NULL;
    return (DCOZj4d5Eths);
}

void  gadRXYoqC1 (struct   student *DCOZj4d5Eths) {
    struct   student *i15ZjBA7Hc;
    i15ZjBA7Hc = DCOZj4d5Eths;
    while (i15ZjBA7Hc) {
        i15ZjBA7Hc->total = i15ZjBA7Hc->CYeJvcx9w + i15ZjBA7Hc->xVOL54;
        i15ZjBA7Hc = i15ZjBA7Hc->next;
    };
}

struct   student *choose (struct   student *DCOZj4d5Eths) {
    struct   student *i15ZjBA7Hc, *p2;
    i15ZjBA7Hc = DCOZj4d5Eths;
    p2 = i15ZjBA7Hc;
    while (i15ZjBA7Hc->next) {
        if (p2->total < (i15ZjBA7Hc->next)->total)
            p2 = i15ZjBA7Hc->next;
        i15ZjBA7Hc = i15ZjBA7Hc->next;
    }
    printf ("%d %d\n", p2->num, p2->total);
    return (p2);
}

struct   student *del (struct   student *DCOZj4d5Eths, struct   student *p2) {
    struct   student *i15ZjBA7Hc;
    i15ZjBA7Hc = DCOZj4d5Eths;
    if (!(DCOZj4d5Eths != p2)) {
        DCOZj4d5Eths = p2->next;
        return (DCOZj4d5Eths);
    }
    else {
        while (i15ZjBA7Hc->next != p2) {
            i15ZjBA7Hc = i15ZjBA7Hc->next;
        }
        i15ZjBA7Hc->next = p2->next;
    }
    return (DCOZj4d5Eths);
}

void  main () {
    int E7BaNJfWQ;
    struct   student *DCOZj4d5Eths, *AGiowLH1u;
    scanf ("%d", &E7BaNJfWQ);
    if (E7BaNJfWQ >= (517 - 514)) {
        gadRXYoqC1 (DCOZj4d5Eths);
        DCOZj4d5Eths = xqwLNRv (E7BaNJfWQ);
        AGiowLH1u = choose (DCOZj4d5Eths);
        DCOZj4d5Eths = del (DCOZj4d5Eths, AGiowLH1u);
        AGiowLH1u = choose (DCOZj4d5Eths);
        DCOZj4d5Eths = del (DCOZj4d5Eths, AGiowLH1u);
        AGiowLH1u = choose (DCOZj4d5Eths);
    }
    else {
        if (E7BaNJfWQ = (349 - 347)) {
            gadRXYoqC1 (DCOZj4d5Eths);
            DCOZj4d5Eths = xqwLNRv (E7BaNJfWQ);
            AGiowLH1u = choose (DCOZj4d5Eths);
            DCOZj4d5Eths = del (DCOZj4d5Eths, AGiowLH1u);
            AGiowLH1u = choose (DCOZj4d5Eths);
        }
        else {
            gadRXYoqC1 (DCOZj4d5Eths);
            DCOZj4d5Eths = xqwLNRv (E7BaNJfWQ);
            AGiowLH1u = choose (DCOZj4d5Eths);
        };
    };
}

