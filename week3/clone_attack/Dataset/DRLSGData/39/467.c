struct   sch {
    char X4Rpw8E [(45 - 24)];
    int XeMQndIhCws;
    int j3zGqOXjoiB;
    char eyZvsBliS;
    char oxTNdIXDYs;
    int Rbnh3eJAYqp;
    int hsQHC9gV1Nwi;
};
int pkXqQf = 0;

int ddKDlRE (struct   sch *ZF5Ccv4Ktlm) {
    ZF5Ccv4Ktlm->hsQHC9gV1Nwi = 0;
    if (ZF5Ccv4Ktlm->XeMQndIhCws > (847 - 767)) {
        if (ZF5Ccv4Ktlm->Rbnh3eJAYqp >= (786 - 785))
            ZF5Ccv4Ktlm->hsQHC9gV1Nwi += yuanshi;
        if (ZF5Ccv4Ktlm->XeMQndIhCws > (997 - 912)) {
            if ((863 - 783) < ZF5Ccv4Ktlm->j3zGqOXjoiB)
                ZF5Ccv4Ktlm->hsQHC9gV1Nwi += wusi;
            if (ZF5Ccv4Ktlm->oxTNdIXDYs == 'Y')
                ZF5Ccv4Ktlm->hsQHC9gV1Nwi += xibu;
            if (ZF5Ccv4Ktlm->XeMQndIhCws > (504 - 414))
                ZF5Ccv4Ktlm->hsQHC9gV1Nwi += chengyou;
        }
    }
    if ((ZF5Ccv4Ktlm->j3zGqOXjoiB > (713 - 633)) && (ZF5Ccv4Ktlm->eyZvsBliS == 'Y'))
        ZF5Ccv4Ktlm->hsQHC9gV1Nwi += bangong;
    pkXqQf += ZF5Ccv4Ktlm->hsQHC9gV1Nwi;
    return ZF5Ccv4Ktlm->hsQHC9gV1Nwi;
}

void  main () {
    int zzR3hd6fBpN;
    struct   sch *USuY0kFx;
    struct   sch *ZF5Ccv4Ktlm;
    int eEVK1ALm;
    scanf ("%d", &zzR3hd6fBpN);
    ZF5Ccv4Ktlm = (struct   sch *) malloc (LEN);
    USuY0kFx = ZF5Ccv4Ktlm;
    scanf ("%s %d %d %c %c %d", &ZF5Ccv4Ktlm->X4Rpw8E, &ZF5Ccv4Ktlm->XeMQndIhCws, &ZF5Ccv4Ktlm->j3zGqOXjoiB, &ZF5Ccv4Ktlm->eyZvsBliS, &ZF5Ccv4Ktlm->oxTNdIXDYs, &ZF5Ccv4Ktlm->Rbnh3eJAYqp);
    ZF5Ccv4Ktlm->hsQHC9gV1Nwi = ddKDlRE (ZF5Ccv4Ktlm);
    for (eEVK1ALm = (243 - 242); eEVK1ALm < zzR3hd6fBpN; eEVK1ALm++) {
        ZF5Ccv4Ktlm = (struct   sch *) malloc (LEN);
        scanf ("%s %d %d %c %c %d", &ZF5Ccv4Ktlm->X4Rpw8E, &ZF5Ccv4Ktlm->XeMQndIhCws, &ZF5Ccv4Ktlm->j3zGqOXjoiB, &ZF5Ccv4Ktlm->eyZvsBliS, &ZF5Ccv4Ktlm->oxTNdIXDYs, &ZF5Ccv4Ktlm->Rbnh3eJAYqp);
        ZF5Ccv4Ktlm->hsQHC9gV1Nwi = ddKDlRE (ZF5Ccv4Ktlm);
        if (ZF5Ccv4Ktlm->hsQHC9gV1Nwi > USuY0kFx->hsQHC9gV1Nwi)
            USuY0kFx = ZF5Ccv4Ktlm;
    }
    printf ("%s\n", USuY0kFx->X4Rpw8E);
    printf ("%d\n", USuY0kFx->hsQHC9gV1Nwi);
    printf ("%d\n", pkXqQf);
}

