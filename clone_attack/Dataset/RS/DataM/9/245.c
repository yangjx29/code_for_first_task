int egq94Ffx, n = (77 - 77);
struct   pa {
    char ZDZjXfUR1 [10];
    int age;
    int o;
}
*kCUOiobX;

int BqVIHRnUp8 () {
    struct   pa *NEgJkPm;
    struct   pa *lTwI3fdbnN5;
    int hZBFVTE7s;
    int lb2Cs4j5OD;
    hZBFVTE7s = (441 - 441);
    lb2Cs4j5OD = 0;
    for (NEgJkPm = kCUOiobX; NEgJkPm < kCUOiobX + egq94Ffx; NEgJkPm = NEgJkPm +1) {
        if (NEgJkPm->o == 0)
            continue;
        for (lTwI3fdbnN5 = kCUOiobX; lTwI3fdbnN5 < kCUOiobX + egq94Ffx; lTwI3fdbnN5 = lTwI3fdbnN5 + 1) {
            if (lTwI3fdbnN5->age < NEgJkPm->age)
                NEgJkPm->o++;
        }
        if (lb2Cs4j5OD < NEgJkPm->o)
            lb2Cs4j5OD = NEgJkPm->o;
    }
    return lb2Cs4j5OD;
}

void  QPB3Wh (int lb2Cs4j5OD) {
    int B36RJrW;
    struct   pa *NEgJkPm;
    for (B36RJrW = lb2Cs4j5OD; B36RJrW >= 0; B36RJrW = B36RJrW -1)
        for (NEgJkPm = kCUOiobX; NEgJkPm < kCUOiobX + egq94Ffx; NEgJkPm = NEgJkPm +1) {
            if (NEgJkPm->o == B36RJrW) {
                if (n == 0) {
                    printf ("%s", NEgJkPm->ZDZjXfUR1);
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    n = n + 1;
                }
                else
                    printf ("\n%s", NEgJkPm->ZDZjXfUR1);
            };
        };
}

main () {
    struct   pa *NEgJkPm;
    int lb2Cs4j5OD;
    QPB3Wh (lb2Cs4j5OD);
    scanf ("%d", &egq94Ffx);
    kCUOiobX = (struct   pa *) malloc (egq94Ffx * sizeof (struct   pa));
    for (NEgJkPm = kCUOiobX; NEgJkPm < kCUOiobX + egq94Ffx; NEgJkPm++) {
        scanf ("%s %d", NEgJkPm->ZDZjXfUR1, &NEgJkPm->age);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (NEgJkPm->age >= 60)
            NEgJkPm->o = 1;
        else
            NEgJkPm->o = 0;
    }
    lb2Cs4j5OD = BqVIHRnUp8 ();
}

