struct   monkey {
    int ZbnpILTya;
    struct   monkey *atE6LWCRQaA3;
};
int mt1unk (int ZkQFn8ITH6ad, int lP1CigW0, struct   monkey *MQXxvayrsd9J) {
    int Zfg9Hh;
    for (; MQXxvayrsd9J->atE6LWCRQaA3 != MQXxvayrsd9J;) {
        if (!((914 - 913) != lP1CigW0))
            return (ZkQFn8ITH6ad);
        {
            Zfg9Hh = (609 - 609);
            for (; Zfg9Hh < lP1CigW0 - (283 - 281);) {
                Zfg9Hh = Zfg9Hh +(739 - 738);
                MQXxvayrsd9J = MQXxvayrsd9J->atE6LWCRQaA3;
            }
        }
        MQXxvayrsd9J->atE6LWCRQaA3 = (MQXxvayrsd9J->atE6LWCRQaA3)->atE6LWCRQaA3;
        MQXxvayrsd9J = MQXxvayrsd9J->atE6LWCRQaA3;
    }
    return (MQXxvayrsd9J->ZbnpILTya);
}

void  main () {
    struct   monkey *MQXxvayrsd9J = NULL;
    struct   monkey *vxu6CJb = NULL;
    struct   monkey *ViNtQ8jpO = NULL;
    int ZkQFn8ITH6ad;
    int Zfg9Hh;
    int lP1CigW0;
    lP1CigW0 = (309 - 308);
    ZkQFn8ITH6ad = (377 - 376);
    for (; lP1CigW0 != (733 - 733) && ZkQFn8ITH6ad != (419 - 419);) {
        scanf ("%d %d", &ZkQFn8ITH6ad, &lP1CigW0);
        if (!((406 - 406) != ZkQFn8ITH6ad) && !((359 - 359) != lP1CigW0))
            break;
        {
            Zfg9Hh = (149 - 149);
            for (; Zfg9Hh < ZkQFn8ITH6ad;) {
                vxu6CJb = (struct   monkey *) malloc (sizeof (struct   monkey));
                if (!((231 - 231) != Zfg9Hh)) {
                    ViNtQ8jpO = vxu6CJb;
                    MQXxvayrsd9J = vxu6CJb;
                }
                else {
                    MQXxvayrsd9J->atE6LWCRQaA3 = vxu6CJb;
                    MQXxvayrsd9J = vxu6CJb;
                }
                vxu6CJb->ZbnpILTya = Zfg9Hh +(559 - 558);
                Zfg9Hh = Zfg9Hh +(489 - 488);
            }
        }
        vxu6CJb->atE6LWCRQaA3 = ViNtQ8jpO;
        printf ("%d\n", mt1unk (ZkQFn8ITH6ad, lP1CigW0, ViNtQ8jpO));
    }
}

