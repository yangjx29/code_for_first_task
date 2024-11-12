struct   stu {
    char num [40];
    char name [40];
    char pbtqLOyS [10];
    char J23ZSiRge [10];
    char score [40];
    char tpBIoq1uY [40];
    struct   stu *fw;
    struct   stu *bw;
};
int be5jX2;
struct   stu *lOFf30gDr;

struct   stu *NbdnhcVBs (void ) {
    struct   stu *head, *k1sdzhP, *p2;
    int HGUbvDRW;
    head = (struct   stu *) malloc (sizeof (struct   stu));
    head->fw = NULL;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    head->bw = NULL;
    p2 = head;
    while ((899 - 898)) {
        k1sdzhP = (struct   stu *) malloc (sizeof (struct   stu));
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%s", k1sdzhP->num);
        if (!(0 != strcmp (k1sdzhP->num, "end"))) {
            k1sdzhP->fw = NULL;
            p2->fw = k1sdzhP;
            k1sdzhP->bw = p2;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            lOFf30gDr = k1sdzhP;
            break;
        }
        else {
            scanf ("%s %s %s %s %s", k1sdzhP->name, &k1sdzhP->pbtqLOyS, &k1sdzhP->J23ZSiRge, k1sdzhP->score, k1sdzhP->tpBIoq1uY);
            k1sdzhP->fw = NULL;
            p2->fw = k1sdzhP;
            k1sdzhP->bw = p2;
            p2 = k1sdzhP;
        };
    }
    return head;
}

void  bwprint (struct   stu *ptail) {
    struct   stu *crGXWNV;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    crGXWNV = ptail->bw;
    while (crGXWNV->bw != NULL) {
        printf ("%s %s %s %s %s %s\n", crGXWNV->num, crGXWNV->name, crGXWNV->pbtqLOyS, crGXWNV->J23ZSiRge, crGXWNV->score, crGXWNV->tpBIoq1uY);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        crGXWNV = crGXWNV->bw;
    };
}

main () {
    stu *k1sdzhP;
    struct   stu *pheader;
    int k = 0;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    bwprint (lOFf30gDr);
    pheader = NbdnhcVBs ();
}

