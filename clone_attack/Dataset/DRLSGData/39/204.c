int main () {
    struct   person {
        char unEwYV [(71 - 51)];
        int lBdxyv;
        int py2udta0Dw;
        char kM0ioWh2yGfL;
        char c2;
        int zNbSVm;
        int gM8hI0yaPCDJ;
    };
    long  int i, lzC1N2gQEU8B, gYDhJsub = (846 - 846);
    long  int NgLwAI4 = (977 - 977);
    scanf ("%d\n", &lzC1N2gQEU8B);
    struct   person *PCmZSr = (struct   person *) malloc (lzC1N2gQEU8B * sizeof (struct   person));
    {
        i = (176 - 176);
        for (; lzC1N2gQEU8B > i;) {
            scanf ("%s%d%d %c %c %d\n", &PCmZSr[i].unEwYV, &PCmZSr[i].lBdxyv, &PCmZSr[i].py2udta0Dw, &PCmZSr[i].kM0ioWh2yGfL, &PCmZSr[i].c2, &PCmZSr[i].zNbSVm);
            PCmZSr[i].gM8hI0yaPCDJ = (545 - 545);
            if (PCmZSr[i].zNbSVm >= (71 - 70) && PCmZSr[i].lBdxyv > (351 - 271))
                PCmZSr[i].gM8hI0yaPCDJ = PCmZSr[i].gM8hI0yaPCDJ + (8509 - 509);
            if (PCmZSr[i].lBdxyv > (215 - 130) && (369 - 289) < PCmZSr[i].py2udta0Dw)
                PCmZSr[i].gM8hI0yaPCDJ = PCmZSr[i].gM8hI0yaPCDJ + (4696 - 696);
            if (PCmZSr[i].lBdxyv > 90)
                PCmZSr[i].gM8hI0yaPCDJ = PCmZSr[i].gM8hI0yaPCDJ + (2243 - 243);
            if ((135 - 50) < PCmZSr[i].lBdxyv && !('Y' != PCmZSr[i].c2))
                PCmZSr[i].gM8hI0yaPCDJ = PCmZSr[i].gM8hI0yaPCDJ + (1239 - 239);
            if ((806 - 726) < PCmZSr[i].py2udta0Dw && PCmZSr[i].kM0ioWh2yGfL == 'Y')
                PCmZSr[i].gM8hI0yaPCDJ = PCmZSr[i].gM8hI0yaPCDJ + 850;
            if (gYDhJsub < PCmZSr[i].gM8hI0yaPCDJ)
                gYDhJsub = PCmZSr[i].gM8hI0yaPCDJ;
            NgLwAI4 = NgLwAI4 +PCmZSr[i].gM8hI0yaPCDJ;
            i = i + (881 - 880);
        }
    }
    {
        i = (291 - 291);
        for (; i < lzC1N2gQEU8B;) {
            if (PCmZSr[i].gM8hI0yaPCDJ == gYDhJsub) {
                printf ("%s\n%d\n%d", PCmZSr[i].unEwYV, PCmZSr[i].gM8hI0yaPCDJ, NgLwAI4);
                break;
            }
            i = i + (218 - 217);
        }
    }
    return (0);
}

