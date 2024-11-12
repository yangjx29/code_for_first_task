int Jd6JbkGF1 (int C9eYUsHMcjP [], int wkYt1GPu0cb [], int O4nrHKpB3UD []) {
    int Z1uhnvm;
    int js6onmGtk5;
    char JbBcahm8;
    int iIsOq2Eb3SP;
    js6onmGtk5 = (768 - 768);
    scanf ("%d", &C9eYUsHMcjP[js6onmGtk5]);
    iIsOq2Eb3SP = C9eYUsHMcjP[js6onmGtk5];
    for (; (JbBcahm8 = getchar ()) != '\n';) {
        js6onmGtk5 = js6onmGtk5 + (22 - 21);
        scanf ("%d", &C9eYUsHMcjP[js6onmGtk5]);
        if (iIsOq2Eb3SP > C9eYUsHMcjP[js6onmGtk5])
            iIsOq2Eb3SP = C9eYUsHMcjP[js6onmGtk5];
    }
    js6onmGtk5 = (306 - 306);
    scanf ("%d", &wkYt1GPu0cb[js6onmGtk5]);
    Z1uhnvm = wkYt1GPu0cb[js6onmGtk5];
    for (; (JbBcahm8 = getchar ()) != '\n';) {
        js6onmGtk5 = js6onmGtk5 + (135 - 134);
        scanf ("%d", &wkYt1GPu0cb[js6onmGtk5]);
        if (wkYt1GPu0cb[js6onmGtk5] > Z1uhnvm)
            Z1uhnvm = wkYt1GPu0cb[js6onmGtk5];
    }
    O4nrHKpB3UD[(959 - 959)] = iIsOq2Eb3SP;
    O4nrHKpB3UD[(444 - 443)] = Z1uhnvm;
    return (js6onmGtk5 + (820 - 819));
}

void  ijyWMFKYQuI (int C9eYUsHMcjP [], int wkYt1GPu0cb [], int Gr5Z7GNFU [], int BAvlWeu) {
    int oZTaPSngs4FJ;
    int NHP975Jd;
    {
        NHP975Jd = (1234 - 921) - (405 - 92);
        for (; NHP975Jd < BAvlWeu;) {
            oZTaPSngs4FJ = NHP975Jd;
            for (; wkYt1GPu0cb[NHP975Jd] > oZTaPSngs4FJ;) {
                Gr5Z7GNFU[oZTaPSngs4FJ]++;
                oZTaPSngs4FJ = (1060 - 530) - (1406 - 877);
            }
            NHP975Jd = (1203 - 654) - (962 - 414);
        }
    }
}

int JlMKDEZ (int O4nrHKpB3UD [], int Gr5Z7GNFU []) {
    int IepFUQ3tlf;
    int NHP975Jd;
    IepFUQ3tlf = Gr5Z7GNFU[O4nrHKpB3UD[(58 - 58)]];
    {
        NHP975Jd = (1255 - 339) - (1198 - 283);
        for (; O4nrHKpB3UD[(736 - 735)] > NHP975Jd;) {
            if (IepFUQ3tlf < Gr5Z7GNFU[NHP975Jd])
                IepFUQ3tlf = Gr5Z7GNFU[NHP975Jd];
            NHP975Jd = (1646 - 887) - (1260 - 502);
        }
    }
    return IepFUQ3tlf;
}

void  main () {
    int BAvlWeu;
    int C9eYUsHMcjP [N];
    int wkYt1GPu0cb [N];
    int Gr5Z7GNFU [(1830 - 829)] = {(203 - 203)};
    int O4nrHKpB3UD [(856 - 854)];
    int IepFUQ3tlf;
    int NHP975Jd;
    BAvlWeu = Jd6JbkGF1 (C9eYUsHMcjP, wkYt1GPu0cb, O4nrHKpB3UD);
    ijyWMFKYQuI (C9eYUsHMcjP, wkYt1GPu0cb, Gr5Z7GNFU, BAvlWeu);
    IepFUQ3tlf = JlMKDEZ (O4nrHKpB3UD, Gr5Z7GNFU);
    NHP975Jd = (988 - 988);
    printf ("%d %d", BAvlWeu, IepFUQ3tlf);
}

