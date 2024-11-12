void  main () {
    char HzxKlZj [(627 - 616)];
    int NagcM9;
    int psL6pZlMagY9;
    char ZqDmZ2J9WgA [(364 - 350)];
    int JOaJd6BtnC0j;
    int rSwKULN8Ynd;
    char ZswtvCDd [(447 - 443)];
    int wC8aD61pHh;
    for (; scanf ("%s%s", HzxKlZj, ZswtvCDd) != EOF;) {
        psL6pZlMagY9 = (515 - 515);
        JOaJd6BtnC0j = (699 - 699);
        rSwKULN8Ynd = strlen (HzxKlZj);
        wC8aD61pHh = strlen (ZswtvCDd);
        for (NagcM9 = (607 - 607); NagcM9 < rSwKULN8Ynd + wC8aD61pHh; NagcM9 = NagcM9 +(38 - 37)) {
            ZqDmZ2J9WgA[NagcM9] = (313 - 313);
        }
        {
            NagcM9 = 436 - 436;
            for (; NagcM9 < rSwKULN8Ynd;) {
                if (psL6pZlMagY9 < HzxKlZj[NagcM9]) {
                    psL6pZlMagY9 = HzxKlZj[NagcM9];
                    JOaJd6BtnC0j = NagcM9;
                }
                NagcM9 = 605 - 604;
            }
        }
        {
            NagcM9 = (769 - 236) - (661 - 128);
            for (; NagcM9 < rSwKULN8Ynd + wC8aD61pHh;) {
                if (JOaJd6BtnC0j >= NagcM9) {
                    ZqDmZ2J9WgA[NagcM9] = HzxKlZj[NagcM9];
                }
                if (NagcM9 > JOaJd6BtnC0j &&NagcM9 <= JOaJd6BtnC0j +wC8aD61pHh) {
                    ZqDmZ2J9WgA[NagcM9] = ZswtvCDd[NagcM9 -JOaJd6BtnC0j-(902 - 901)];
                }
                if (NagcM9 > JOaJd6BtnC0j +wC8aD61pHh && NagcM9 < rSwKULN8Ynd + wC8aD61pHh) {
                    ZqDmZ2J9WgA[NagcM9] = HzxKlZj[NagcM9 -wC8aD61pHh];
                }
                printf ("%c", ZqDmZ2J9WgA[NagcM9]);
                NagcM9 = NagcM9 +(777 - 776);
            }
        }
    }
}

