struct   shuju {
    char m13emF [100];
    struct   shuju *CNf0WxKgp;
};
struct   shuju *create () {
    struct   shuju *head;
    struct   shuju *ZMSYXk;
    struct   shuju *OH5flbjihRID;
    ZMSYXk = (struct   shuju *) malloc (len);
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
    gets (ZMSYXk->m13emF);
    ZMSYXk->CNf0WxKgp = NULL;
    for (; 1;) {
        OH5flbjihRID = ZMSYXk;
        ZMSYXk = (struct   shuju *) malloc (len);
        gets (ZMSYXk->m13emF);
        if (!(0 != strcmp (ZMSYXk->m13emF, "end"))) {
            free (ZMSYXk);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            break;
        }
        ZMSYXk->CNf0WxKgp = OH5flbjihRID;
    }
    head = OH5flbjihRID;
    return (head);
}

void  blNpk8Eqm5 (struct   shuju *head) {
    struct   shuju *p;
    p = head;
    for (; p->CNf0WxKgp != NULL;) {
        puts (p->m13emF);
        p = p->CNf0WxKgp;
    }
    puts (p->m13emF);
}

void  main () {
    struct   shuju *p;
    blNpk8Eqm5 (p);
    p = create ();
}

