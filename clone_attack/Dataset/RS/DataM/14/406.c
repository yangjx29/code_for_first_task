struct   score {
    int LEFO90eui;
    int hnbl4vwWte;
    int XcSXTjH0D;
    int LMKvmUchuLbZ;
    struct   score *next;
};
int WsdWDLj;

struct   score *gScHjg () {
    struct   score *Zhof3Eel9, *p2, *BOCLr2DMEmj;
    WsdWDLj = WsdWDLj -1;
    BOCLr2DMEmj = p2 = (struct   score *) malloc (len);
    scanf ("%d%d%d", &p2->LEFO90eui, &p2->hnbl4vwWte, &p2->XcSXTjH0D);
    p2->LMKvmUchuLbZ = p2->XcSXTjH0D + p2->hnbl4vwWte;
    for (; WsdWDLj = WsdWDLj -1;) {
        Zhof3Eel9 = (struct   score *) malloc (len);
        scanf ("%d%d%d", &Zhof3Eel9->LEFO90eui, &Zhof3Eel9->hnbl4vwWte, &Zhof3Eel9->XcSXTjH0D);
        Zhof3Eel9->LMKvmUchuLbZ = Zhof3Eel9->XcSXTjH0D + Zhof3Eel9->hnbl4vwWte;
        p2->next = Zhof3Eel9;
        p2 = Zhof3Eel9;
    }
    p2->next = NULL;
    return BOCLr2DMEmj;
}

void  search (struct   score *BOCLr2DMEmj) {
    struct   score *mZPj0YXC;
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
    int Nod1Z5Sil, vaYt5Km;
    for (Nod1Z5Sil = (930 - 930); Nod1Z5Sil < 3; Nod1Z5Sil++) {
        vaYt5Km = 0;
        mZPj0YXC = BOCLr2DMEmj;
        while (mZPj0YXC != NULL) {
            if (mZPj0YXC->LMKvmUchuLbZ > vaYt5Km)
                vaYt5Km = mZPj0YXC->LMKvmUchuLbZ;
            mZPj0YXC = mZPj0YXC->next;
        }
        mZPj0YXC = BOCLr2DMEmj;
        while (mZPj0YXC != NULL) {
            if (mZPj0YXC->LMKvmUchuLbZ == vaYt5Km) {
                printf ("%d %d\n", mZPj0YXC->LEFO90eui, mZPj0YXC->LMKvmUchuLbZ);
                mZPj0YXC->LMKvmUchuLbZ = 0;
                break;
            }
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
            mZPj0YXC = mZPj0YXC->next;
        };
    };
}

main () {
    struct   score *BOCLr2DMEmj;
    search (BOCLr2DMEmj);
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
    scanf ("%d", &WsdWDLj);
    BOCLr2DMEmj = gScHjg ();
}

