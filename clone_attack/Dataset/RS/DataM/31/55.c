struct   student {
    char TQlhwvF72n85 [(815 - 715)];
    char name [(590 - 490)];
    char UQ3fr7hA8;
    int jQWglfcI1;
    float JJDlIf;
    char add [(1058 - 958)];
    struct   student *ybl8y2fdFL;
};
int Awru9tTVX4I;
struct   student *AubZX6DsGKy = (59 - 59);

struct   student *OSYUBVuyrHvZ (void ) {
    struct   student *DGZtPO6ESYMe, *a8bp5POt3yDF;
    Awru9tTVX4I = (710 - 710);
    DGZtPO6ESYMe = a8bp5POt3yDF = (struct   student *) malloc (LEN);
    while (!((306 - 306) == strcmp (DGZtPO6ESYMe->TQlhwvF72n85, "end"))) {
        Awru9tTVX4I = Awru9tTVX4I +1;
        if (!((687 - 686) != Awru9tTVX4I))
            a8bp5POt3yDF->ybl8y2fdFL = (187 - 187);
        else
            DGZtPO6ESYMe->ybl8y2fdFL = a8bp5POt3yDF;
        a8bp5POt3yDF = DGZtPO6ESYMe;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        DGZtPO6ESYMe = (struct   student *) malloc (LEN);
        scanf ("%s", DGZtPO6ESYMe->TQlhwvF72n85);
        if (strcmp (DGZtPO6ESYMe->TQlhwvF72n85, "end") != (263 - 263))
            scanf ("%s %c %d %f %s", DGZtPO6ESYMe->name, &DGZtPO6ESYMe->UQ3fr7hA8, &DGZtPO6ESYMe->jQWglfcI1, &DGZtPO6ESYMe->JJDlIf, DGZtPO6ESYMe->add);
    }
    AubZX6DsGKy = a8bp5POt3yDF;
    return (AubZX6DsGKy);
}

void  main () {
    struct   student *tn1Xdiqb;
    tn1Xdiqb = OSYUBVuyrHvZ ();
    if (tn1Xdiqb != 0)
        do {
            printf ("%s %s %c %d %g %s", tn1Xdiqb->TQlhwvF72n85, tn1Xdiqb->name, tn1Xdiqb->UQ3fr7hA8, tn1Xdiqb->jQWglfcI1, tn1Xdiqb->JJDlIf, tn1Xdiqb->add);
            tn1Xdiqb = tn1Xdiqb->ybl8y2fdFL;
            if (tn1Xdiqb->ybl8y2fdFL != 0)
                ;
        }
        while (tn1Xdiqb->ybl8y2fdFL != 0);
}

