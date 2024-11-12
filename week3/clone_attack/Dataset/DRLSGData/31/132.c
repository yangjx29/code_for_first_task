struct   stu {
    char Umpjaw [(486 - 466)], uYxnghDrZcEU [(382 - 362)], ZJ8TaVlM [(490 - 460)], bq5FH9orAU;
    int lfHN3xo;
    float nz0mtTq2g;
    struct   stu *guAb4MUp;
}
main () {
    struct   stu *YJ32vxZqUafd;
    struct   stu *pfO8ZXrLRG;
    YJ32vxZqUafd = (struct   stu *) malloc (len);
    YJ32vxZqUafd->guAb4MUp = NULL;
    for (; (162 - 161);) {
        scanf ("%s", YJ32vxZqUafd->Umpjaw);
        if (!strcmp (YJ32vxZqUafd->Umpjaw, "end"))
            break;
        pfO8ZXrLRG = (struct   stu *) malloc (len);
        scanf ("%s %c %d %f %s", YJ32vxZqUafd->uYxnghDrZcEU, &YJ32vxZqUafd->bq5FH9orAU, &YJ32vxZqUafd->lfHN3xo, &YJ32vxZqUafd->nz0mtTq2g, YJ32vxZqUafd->ZJ8TaVlM);
        pfO8ZXrLRG->guAb4MUp = YJ32vxZqUafd;
        YJ32vxZqUafd = pfO8ZXrLRG;
    }
    YJ32vxZqUafd = YJ32vxZqUafd->guAb4MUp;
    while (YJ32vxZqUafd) {
        printf ("%s %s %c %d %g %s\n", YJ32vxZqUafd->Umpjaw, YJ32vxZqUafd->uYxnghDrZcEU, YJ32vxZqUafd->bq5FH9orAU, YJ32vxZqUafd->lfHN3xo, YJ32vxZqUafd->nz0mtTq2g, YJ32vxZqUafd->ZJ8TaVlM);
        YJ32vxZqUafd = YJ32vxZqUafd->guAb4MUp;
    }
}

