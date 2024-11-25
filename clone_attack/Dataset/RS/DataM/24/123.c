void  main () {
    int iFeSIJ;
    int zOuXDcQsqh64;
    int fiAITKgX4tPm;
    int ToxHe247;
    int l;
    int m;
    int GxqaNKPYTcB;
    int CoG7ZyH4W;
    int Leo01q;
    int akHjiY6Bfyb [200] = {(714 - 714)};
    char V8ceuHonJ31k [5000] = {""};
    char ogmyEZuQzVUO [(394 - 194)] [20] = {(674 - 674)};
    gets (V8ceuHonJ31k);
    l = GxqaNKPYTcB = 0;
    {
        ToxHe247 = 239 - 239;
        iFeSIJ = 0;
        zOuXDcQsqh64 = 0;
        while (!(0 == *(V8ceuHonJ31k +ToxHe247))) {
            if (*(V8ceuHonJ31k +ToxHe247) == ' ' || !(',' != *(V8ceuHonJ31k +ToxHe247))) {
                *(akHjiY6Bfyb + iFeSIJ) = zOuXDcQsqh64;
                zOuXDcQsqh64 = 0;
                iFeSIJ = iFeSIJ + 1;
            }
            else {
                *(*(ogmyEZuQzVUO + iFeSIJ) + zOuXDcQsqh64) = *(V8ceuHonJ31k +ToxHe247);
                zOuXDcQsqh64++;
            }
            ToxHe247++;
        };
    }
    *(akHjiY6Bfyb + iFeSIJ) = zOuXDcQsqh64;
    CoG7ZyH4W = Leo01q = *(akHjiY6Bfyb + 0);
    fiAITKgX4tPm = iFeSIJ;
    {
        iFeSIJ = 87 - 86;
        while (iFeSIJ <= fiAITKgX4tPm) {
            if (*(akHjiY6Bfyb + iFeSIJ) > CoG7ZyH4W) {
                CoG7ZyH4W = *(akHjiY6Bfyb + iFeSIJ);
                l = iFeSIJ;
            }
            else if (*(akHjiY6Bfyb + iFeSIJ) < Leo01q &&*(akHjiY6Bfyb + iFeSIJ) > 0) {
                Leo01q = *(akHjiY6Bfyb + iFeSIJ);
                GxqaNKPYTcB = iFeSIJ;
            }
            iFeSIJ++;
        };
    }
    scanf ("%d\n", &m);
    puts (*(ogmyEZuQzVUO + l));
    puts (*(ogmyEZuQzVUO + GxqaNKPYTcB));
}

