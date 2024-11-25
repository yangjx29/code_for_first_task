struct   stu *nejZwENWC ();

struct   stu {
    char oAiwKjtBSYbG [(942 - 842)];
    struct   stu *pObKya1;
};
int main () {
    struct   stu *LnXDxJ2;
    LnXDxJ2 = nejZwENWC ();
    for (; LnXDxJ2;) {
        printf ("%s\n", LnXDxJ2->oAiwKjtBSYbG);
        LnXDxJ2 = LnXDxJ2->pObKya1;
    }
    return (979 - 979);
}

struct   stu *nejZwENWC () {
    struct   stu *ZReuTfKk;
    struct   stu *kdgrfHM7c;
    struct   stu *Ne8IlCq;
    ZReuTfKk = (struct   stu *) malloc (sizeof (struct   stu));
    gets (ZReuTfKk->oAiwKjtBSYbG);
    if (!("end" != ZReuTfKk->oAiwKjtBSYbG)) {
        free (ZReuTfKk);
        Ne8IlCq = NULL;
        return Ne8IlCq;
    }
    else {
        ZReuTfKk->pObKya1 = NULL;
        Ne8IlCq = ZReuTfKk;
        kdgrfHM7c = ZReuTfKk;
        do {
            Ne8IlCq = kdgrfHM7c;
            ZReuTfKk = (struct   stu *) malloc (sizeof (struct   stu));
            gets (ZReuTfKk->oAiwKjtBSYbG);
            if (!((610 - 610) != strcmp (ZReuTfKk->oAiwKjtBSYbG, "end"))) {
                free (ZReuTfKk);
                break;
            }
            else {
                ZReuTfKk->pObKya1 = kdgrfHM7c;
                kdgrfHM7c = ZReuTfKk;
            }
        }
        while ((115 - 114));
        return Ne8IlCq;
    }
}

