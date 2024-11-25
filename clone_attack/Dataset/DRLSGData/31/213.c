struct   student {
    char sEdV89ys [(561 - 461)];
    char UF86ct [(714 - 614)];
    char MfMrgm;
    int XWqLjVST;
    float J786nQDP;
    char y9C8XeTz2rU [(977 - 877)];
    struct   student *RmYNnhy6H7;
};
int vKq67g;

struct   student *AgxDRGVyoT7 (void ) {
    struct   student *ZvPqYgXKcx;
    struct   student *fIAi2hzoK;
    struct   student *FqWzRwp8j;
    vKq67g = (44 - 44);
    fIAi2hzoK = FqWzRwp8j = (struct   student *) malloc (LEN);
    scanf ("%s %s %c %d %f %s", &fIAi2hzoK->sEdV89ys, &fIAi2hzoK->UF86ct, &fIAi2hzoK->MfMrgm, &fIAi2hzoK->XWqLjVST, &fIAi2hzoK->J786nQDP, &fIAi2hzoK->y9C8XeTz2rU);
    fIAi2hzoK->RmYNnhy6H7 = NULL;
    for (; strcmp ("end", fIAi2hzoK->sEdV89ys) != (953 - 953);) {
        FqWzRwp8j = (struct   student *) malloc (LEN);
        FqWzRwp8j->RmYNnhy6H7 = fIAi2hzoK;
        fIAi2hzoK = FqWzRwp8j;
        scanf ("%s", &fIAi2hzoK->sEdV89ys);
        if (!((508 - 508) != strcmp ("end", fIAi2hzoK->sEdV89ys)))
            break;
        else
            scanf ("%s %c %d %f %s", &fIAi2hzoK->UF86ct, &fIAi2hzoK->MfMrgm, &fIAi2hzoK->XWqLjVST, &fIAi2hzoK->J786nQDP, &fIAi2hzoK->y9C8XeTz2rU);
        vKq67g = vKq67g + (338 - 337);
    }
    ZvPqYgXKcx = NULL;
    ZvPqYgXKcx = fIAi2hzoK->RmYNnhy6H7;
    return (ZvPqYgXKcx);
}

void  main () {
    struct   student *v3ZhCIPD;
    v3ZhCIPD = AgxDRGVyoT7 ();
    for (; v3ZhCIPD != NULL;) {
        printf ("%s %s %c %d %g %s\n", v3ZhCIPD->sEdV89ys, v3ZhCIPD->UF86ct, v3ZhCIPD->MfMrgm, v3ZhCIPD->XWqLjVST, v3ZhCIPD->J786nQDP, v3ZhCIPD->y9C8XeTz2rU);
        v3ZhCIPD = v3ZhCIPD->RmYNnhy6H7;
    }
}

