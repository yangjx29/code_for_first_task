struct   student {
    char a [100];
    struct   student *DzARBX;
};
struct   student *qo0YrZW () {
    struct   student *NB8Hyp4WLs, *p2;
    NB8Hyp4WLs = (struct   student *) malloc (len);
    gets (NB8Hyp4WLs->a);
    NB8Hyp4WLs->DzARBX = NULL;
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
    p2 = NB8Hyp4WLs;
    {
        while (true) {
            NB8Hyp4WLs = (struct   student *) malloc (len);
            gets (NB8Hyp4WLs->a);
            if (strcmp (NB8Hyp4WLs->a, "end") == 0) {
                free (NB8Hyp4WLs);
                break;
            }
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
            NB8Hyp4WLs->DzARBX = p2;
            p2 = NB8Hyp4WLs;
        };
    }
    return p2;
}

void  main () {
    struct   student *N9Lqikt;
    struct   student *NB8Hyp4WLs;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    struct   student *qo0YrZW ();
    N9Lqikt = qo0YrZW ();
    NB8Hyp4WLs = N9Lqikt;
    while (NB8Hyp4WLs) {
        printf ("%s\n", NB8Hyp4WLs->a);
        NB8Hyp4WLs = NB8Hyp4WLs->DzARBX;
    };
}

