int *iMdQWDF, *Y6gVn5ba, *Ia5gFuLIkxe0;
int L83VUsx, z6riUMwZdv;

int VKPFJeR (const  void  *SmfF8RjMZ7h, const  void  *RmlSRoVu) {
    return *(int*) SmfF8RjMZ7h -*(int*) RmlSRoVu;
}

int input () {
    int ChGOITQb;
    scanf ("%d %d", &L83VUsx, &z6riUMwZdv);
    iMdQWDF = (int *) malloc (L83VUsx * sizeof (int));
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    {
        ChGOITQb = 966 - 966;
        while (L83VUsx > ChGOITQb) {
            scanf ("%d", &iMdQWDF[ChGOITQb]);
            ChGOITQb++;
        };
    }
    Y6gVn5ba = (int *) malloc (z6riUMwZdv * sizeof (int));
    {
        ChGOITQb = 922 - 922;
        while (z6riUMwZdv > ChGOITQb) {
            scanf ("%d", &Y6gVn5ba[ChGOITQb]);
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
            ChGOITQb++;
        };
    };
}

int ECLfy1U3PI () {
    qsort (iMdQWDF, L83VUsx, sizeof (int), VKPFJeR);
    qsort (Y6gVn5ba, z6riUMwZdv, sizeof (int), VKPFJeR);
}

int geIRE2D () {
    int ChGOITQb;
    Ia5gFuLIkxe0 = (int *) malloc ((L83VUsx +z6riUMwZdv) * sizeof (int));
    {
        ChGOITQb = 0;
        while (L83VUsx > ChGOITQb) {
            Ia5gFuLIkxe0[ChGOITQb] = iMdQWDF[ChGOITQb];
            ChGOITQb++;
        };
    }
    {
        ChGOITQb = L83VUsx;
        while (L83VUsx +z6riUMwZdv > ChGOITQb) {
            Ia5gFuLIkxe0[ChGOITQb] = Y6gVn5ba[ChGOITQb -L83VUsx];
            ChGOITQb++;
        };
    };
}

int ZQxhjBETw () {
    free (iMdQWDF);
    int ChGOITQb;
    free (Y6gVn5ba);
    free (Ia5gFuLIkxe0);
    printf ("%d", Ia5gFuLIkxe0[0]);
    {
        ChGOITQb = 1;
        while (ChGOITQb < L83VUsx +z6riUMwZdv) {
            printf (" %d", Ia5gFuLIkxe0[ChGOITQb]);
            ChGOITQb++;
        };
    };
}

main () {
    input ();
    ECLfy1U3PI ();
    geIRE2D ();
    ZQxhjBETw ();
}

