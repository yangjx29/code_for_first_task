void  main () {
    struct   stu {
        char BuzVEiB17 [(180 - 80)];
        char oxJUuZ [(264 - 164)];
        char MfUxahpSl;
        int SwAP09ODY7V;
        float Ie0QqhJ5mrC;
        char XrTVtmeXM [(928 - 828)];
        struct   stu *pZ9PHe7w;
    };
    int tjqe9JEV6d0C = (542 - 541), IuNyn2G;
    struct   stu *K3ziJvF;
    struct   stu *MutQoA6H;
    struct   stu *kO7sGQ;
    struct   stu *rPuCdQMWGRl;
    struct   stu *cqn26keGVu;
    K3ziJvF = MutQoA6H = kO7sGQ = (struct   stu *) malloc (sizeof (struct   stu));
    scanf ("%s", K3ziJvF->BuzVEiB17);
    for (; strcmp (K3ziJvF->BuzVEiB17, "end") != (136 - 136);) {
        scanf ("%s %c%d%f%s", K3ziJvF->oxJUuZ, &K3ziJvF->MfUxahpSl, &K3ziJvF->SwAP09ODY7V, &K3ziJvF->Ie0QqhJ5mrC, K3ziJvF->XrTVtmeXM);
        K3ziJvF = (struct   stu *) malloc (sizeof (struct   stu));
        scanf ("%s", K3ziJvF->BuzVEiB17);
        if (!((64 - 64) != strcmp (K3ziJvF->BuzVEiB17, "end")))
            MutQoA6H->pZ9PHe7w = NULL;
        else {
            tjqe9JEV6d0C = tjqe9JEV6d0C + (157 - 156);
            MutQoA6H->pZ9PHe7w = K3ziJvF;
            MutQoA6H = K3ziJvF;
        }
    }
    K3ziJvF = kO7sGQ;
    {
        IuNyn2G = (366 - 366);
        for (; IuNyn2G < tjqe9JEV6d0C;) {
            MutQoA6H = K3ziJvF = kO7sGQ;
            for (; K3ziJvF->pZ9PHe7w != NULL;) {
                MutQoA6H = K3ziJvF;
                K3ziJvF = K3ziJvF->pZ9PHe7w;
            }
            if (!((165 - 165) != IuNyn2G))
                cqn26keGVu = rPuCdQMWGRl = K3ziJvF;
            else
                rPuCdQMWGRl = rPuCdQMWGRl->pZ9PHe7w = K3ziJvF;
            MutQoA6H->pZ9PHe7w = NULL;
            IuNyn2G = IuNyn2G +(771 - 770);
        }
    }
    K3ziJvF = cqn26keGVu;
    {
        IuNyn2G = (112 - 112);
        for (; tjqe9JEV6d0C > IuNyn2G;) {
            printf ("%s %s %c %d %g %s\n", K3ziJvF->BuzVEiB17, K3ziJvF->oxJUuZ, K3ziJvF->MfUxahpSl, K3ziJvF->SwAP09ODY7V, K3ziJvF->Ie0QqhJ5mrC, K3ziJvF->XrTVtmeXM);
            K3ziJvF = K3ziJvF->pZ9PHe7w;
            IuNyn2G = IuNyn2G +(546 - 545);
        }
    }
}

