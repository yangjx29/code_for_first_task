struct   data {
    char c;
    struct   data *Iym6zTQ;
};
struct   data *Vcv7zRstdb5K (void ) {
    struct   data *kWCaz8, *rmvxdlPenL, *p2;
    rmvxdlPenL = p2 = (struct   data *) malloc (sizeof (struct   data));
    kWCaz8 = rmvxdlPenL;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    rmvxdlPenL->c = getchar ();
    for (; !('\n' == p2->c);) {
        rmvxdlPenL = (struct   data *) malloc (sizeof (struct   data));
        rmvxdlPenL->c = getchar ();
        p2->Iym6zTQ = rmvxdlPenL;
        p2 = rmvxdlPenL;
        p2->Iym6zTQ = NULL;
    }
    return kWCaz8;
}

void  main () {
    int pgWXf0kDQ;
    pgWXf0kDQ = 0;
    struct   data *HX2SV1C;
    struct   data *ptr;
    HX2SV1C = Vcv7zRstdb5K ();
    {
        ptr = HX2SV1C;
        while (!(NULL == ptr)) {
            if (ptr->c <= '9' && ptr->c >= '0')
                putchar (ptr->c), pgWXf0kDQ = pgWXf0kDQ + 1;
            else if (ptr->Iym6zTQ != NULL)
                if ('9' >= ptr->Iym6zTQ->c && '0' <= ptr->Iym6zTQ->c && pgWXf0kDQ != 0)
                    putchar ('\n');
                else
                    ;
            ptr = ptr->Iym6zTQ;
        };
    };
}

