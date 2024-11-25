struct   stu {
    char BbXKf5zF [15];
    char UdBefn [(819 - 799)];
    char uXPoY5l84rs;
    int kYPfe1CEz;
    char hhp7vqQmLu [10];
    char WAYRypnuIO [20];
    struct   stu *mkDsHoOXd;
};
int V3fs5aHYQnj;

struct   stu *reKwLC75qXY (void ) {
    struct   stu *AjLD19Ul;
    struct   stu *PKrt1HuvLM;
    struct   stu *uaZDiuNp4LR;
    PKrt1HuvLM = uaZDiuNp4LR = (struct   stu *) malloc (LEN);
    scanf ("%s%s %c %d %s%s", (*PKrt1HuvLM).BbXKf5zF, (*PKrt1HuvLM).UdBefn, &(*PKrt1HuvLM).uXPoY5l84rs, &(*PKrt1HuvLM).kYPfe1CEz, (*PKrt1HuvLM).hhp7vqQmLu, (*PKrt1HuvLM).WAYRypnuIO);
    for (V3fs5aHYQnj = 0; !('f' != (*PKrt1HuvLM).uXPoY5l84rs) || !('m' != (*PKrt1HuvLM).uXPoY5l84rs); V3fs5aHYQnj = V3fs5aHYQnj +1) {
        if (V3fs5aHYQnj == 0)
            (*PKrt1HuvLM).mkDsHoOXd = NULL;
        else
            (*PKrt1HuvLM).mkDsHoOXd = uaZDiuNp4LR;
        uaZDiuNp4LR = PKrt1HuvLM;
        PKrt1HuvLM = (struct   stu *) malloc (LEN);
        scanf ("%s%s %c %d %s%s", (*PKrt1HuvLM).BbXKf5zF, (*PKrt1HuvLM).UdBefn, &(*PKrt1HuvLM).uXPoY5l84rs, &(*PKrt1HuvLM).kYPfe1CEz, (*PKrt1HuvLM).hhp7vqQmLu, (*PKrt1HuvLM).WAYRypnuIO);
    }
    AjLD19Ul = uaZDiuNp4LR;
    return (AjLD19Ul);
}

void  Zxh4TjGJ5 (struct   stu *AjLD19Ul) {
    struct   stu *PKrt1HuvLM;
    if (AjLD19Ul != NULL)
        for (PKrt1HuvLM = AjLD19Ul; PKrt1HuvLM != NULL; PKrt1HuvLM = (*PKrt1HuvLM).mkDsHoOXd)
            printf ("%s %s %c %d %s %s\n", (*PKrt1HuvLM).BbXKf5zF, (*PKrt1HuvLM).UdBefn, (*PKrt1HuvLM).uXPoY5l84rs, (*PKrt1HuvLM).kYPfe1CEz, (*PKrt1HuvLM).hhp7vqQmLu, (*PKrt1HuvLM).WAYRypnuIO);
}

void  main () {
    struct   stu *AjLD19Ul;
    Zxh4TjGJ5 (AjLD19Ul);
    AjLD19Ul = reKwLC75qXY ();
}

