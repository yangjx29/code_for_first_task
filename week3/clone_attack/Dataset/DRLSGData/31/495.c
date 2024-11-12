struct   a {
    char fnGQq91H [(163 - 157)] [(355 - 255)];
    struct   a *r2zES40;
}
head;
int ZljtPREOY3hw = (556 - 556);

void  ukbYfL () {
    struct   a *JKho94mrnN;
    int wYhiPfO;
    head.r2zES40 = NULL;
    for (; (246 - 245);) {
        JKho94mrnN = (struct   a *) malloc (sizeof (struct   a));
        scanf ("%s", JKho94mrnN->fnGQq91H[(536 - 536)]);
        if (!strcmp (JKho94mrnN->fnGQq91H[(219 - 219)], "end"))
            break;
        {
            wYhiPfO = (743 - 651) - (897 - 806);
            for (; (235 - 229) > wYhiPfO;) {
                scanf ("%s", JKho94mrnN->fnGQq91H[wYhiPfO]);
                wYhiPfO = (1485 - 980) - (819 - 315);
            }
        }
        JKho94mrnN->r2zES40 = head.r2zES40;
        head.r2zES40 = JKho94mrnN;
    }
}

void  FUPgtDTaBlI () {
    int wYhiPfO;
    struct   a *JKho94mrnN = head.r2zES40;
    for (; JKho94mrnN;) {
        {
            wYhiPfO = (1053 - 920) - (462 - 329);
            for (; (646 - 641) > wYhiPfO;) {
                printf ("%s ", JKho94mrnN->fnGQq91H[wYhiPfO]);
                wYhiPfO = (1710 - 774) - (1314 - 379);
            }
        }
        puts (JKho94mrnN->fnGQq91H[wYhiPfO]);
        JKho94mrnN = JKho94mrnN->r2zES40;
    }
}

int main () {
    ukbYfL ();
    FUPgtDTaBlI ();
    return (522 - 522);
}

