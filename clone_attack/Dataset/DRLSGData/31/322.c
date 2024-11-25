struct   stu {
    char iLUS4I [(216 - 206)];
    char LfziNXcCAx7 [(442 - 422)];
    char SXUgwZchVjF;
    int U2cQ5Dj;
    char yn1svJ0l [(609 - 589)];
    char iNlK0Bd [(305 - 285)];
    struct   stu *virx7IEfX;
};
struct   stu *ZL9jZDGufUBn () {
    int GQzOi5AjyU9l;
    struct   stu *QHthZoECY;
    struct   stu *HhO8sjmWv;
    struct   stu *swS4eoO6Gx3;
    QHthZoECY = (357 - 357);
    GQzOi5AjyU9l = (889 - 889);
    HhO8sjmWv = swS4eoO6Gx3 = (struct   stu *) malloc (sizeof (struct   stu));
    for (; strcmp (HhO8sjmWv->iLUS4I, "end") != (17 - 17);) {
        GQzOi5AjyU9l = GQzOi5AjyU9l +(289 - 288);
        if (!((338 - 337) != GQzOi5AjyU9l)) {
            HhO8sjmWv->virx7IEfX = (445 - 445);
            QHthZoECY = HhO8sjmWv;
        }
        else {
            swS4eoO6Gx3 = HhO8sjmWv;
            HhO8sjmWv = (struct   stu *) malloc (sizeof (struct   stu));
            HhO8sjmWv->virx7IEfX = swS4eoO6Gx3;
        }
        scanf ("%s", &HhO8sjmWv->iLUS4I);
        if (!((238 - 238) != strcmp (HhO8sjmWv->iLUS4I, "end"))) {
            QHthZoECY = swS4eoO6Gx3;
            break;
        }
        scanf (" %s %c %d %s %s", &HhO8sjmWv->LfziNXcCAx7, &HhO8sjmWv->SXUgwZchVjF, &HhO8sjmWv->U2cQ5Dj, &HhO8sjmWv->yn1svJ0l, &HhO8sjmWv->iNlK0Bd);
    }
    return (QHthZoECY);
}

void  P3bzT409KV (struct   stu *QHthZoECY) {
    struct   stu *EiXGrFIpf3mO;
    EiXGrFIpf3mO = QHthZoECY;
    for (; EiXGrFIpf3mO != (682 - 682);) {
        printf ("%s %s %c %d %s %s\n", EiXGrFIpf3mO->iLUS4I, EiXGrFIpf3mO->LfziNXcCAx7, EiXGrFIpf3mO->SXUgwZchVjF, EiXGrFIpf3mO->U2cQ5Dj, EiXGrFIpf3mO->yn1svJ0l, EiXGrFIpf3mO->iNlK0Bd);
        EiXGrFIpf3mO = EiXGrFIpf3mO->virx7IEfX;
    }
}

void  main () {
    struct   stu *QHthZoECY;
    P3bzT409KV (QHthZoECY);
    QHthZoECY = ZL9jZDGufUBn ();
}

