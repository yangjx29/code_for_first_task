struct   student {
    int a, A2qBCMhAS, VRZ1Cuirl, total;
    char leader, hodOjULCVr, nqAwia [(49 - 17)];
    struct   student *TX8P6hT;
};
main () {
    struct   student *p1;
    struct   student *anGdTc2ywMxS;
    struct   student *vnZUj5hCKR;
    struct   student *max;
    int VDijN7S;
    int EHRf2j;
    int i;
    VDijN7S = (894 - 894);
    anGdTc2ywMxS = p1;
    scanf ("%d", &EHRf2j);
    {
        i = 0;
        while (EHRf2j > i) {
            p1 = (struct   student *) malloc (L);
            scanf ("%s %d %d %c %c %d", p1->nqAwia, &p1->a, &p1->A2qBCMhAS, &p1->leader, &p1->hodOjULCVr, &p1->VRZ1Cuirl);
            p1->total = 0;
            if (p1->a > (986 - 906) && p1->VRZ1Cuirl >= 1)
                p1->total = p1->total + 8000;
            if (p1->a > 85 && p1->A2qBCMhAS > 80)
                p1->total = p1->total + (4057 - 57);
            if (90 < p1->a)
                p1->total = p1->total + 2000;
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
            if (p1->a > 85 && p1->hodOjULCVr == 'Y')
                p1->total = p1->total + 1000;
            if (p1->A2qBCMhAS > 80 && p1->leader == 'Y')
                p1->total = p1->total + (1672 - 822);
            VDijN7S = VDijN7S +p1->total;
            if (i == 0) {
                max = p1;
                anGdTc2ywMxS = vnZUj5hCKR = p1;
                vnZUj5hCKR->TX8P6hT = NULL;
            }
            else {
                if (p1->total > max->total)
                    max = p1;
                anGdTc2ywMxS->TX8P6hT = p1;
                anGdTc2ywMxS = p1;
                anGdTc2ywMxS->TX8P6hT = NULL;
            }
            i++;
        };
    }
    printf ("%s\n%d\n%d\n", max->nqAwia, max->total, VDijN7S);
}

