int main (int W5e9saoXij, char *zAhkwN []) {
    int Dsyx2QHBp5 [(450 - 349)] = {(333 - 333)};
    int FZKAfq3BsVbv;
    int pZAQu5UvyYXg;
    char PhoUClb3BRT [(506 - 406)] = {'0'};
    char fATlV9M [(308 - 208)] = {'0'};
    int BQJviIlohFxO;
    int lb;
    int cFhWyBzcs;
    int clMwRt;
    scanf ("%d", &BQJviIlohFxO);
    {
        pZAQu5UvyYXg = (936 - 936);
        for (; BQJviIlohFxO > pZAQu5UvyYXg;) {
            scanf ("%s", fATlV9M);
            FZKAfq3BsVbv = strlen (fATlV9M);
            scanf ("%s", PhoUClb3BRT);
            lb = strlen (PhoUClb3BRT);
            {
                cFhWyBzcs = (394 - 393);
                for (; (572 - 472) >= cFhWyBzcs;) {
                    Dsyx2QHBp5[cFhWyBzcs] = 0;
                    cFhWyBzcs = cFhWyBzcs + (881 - 880);
                }
            }
            {
                cFhWyBzcs = (788 - 787);
                for (; lb >= cFhWyBzcs;) {
                    if (fATlV9M[FZKAfq3BsVbv -cFhWyBzcs] >= PhoUClb3BRT[lb - cFhWyBzcs])
                        Dsyx2QHBp5[cFhWyBzcs] = fATlV9M[FZKAfq3BsVbv -cFhWyBzcs] - PhoUClb3BRT[lb - cFhWyBzcs];
                    else {
                        Dsyx2QHBp5[cFhWyBzcs] = fATlV9M[FZKAfq3BsVbv -cFhWyBzcs] + (30 - 20) - PhoUClb3BRT[lb - cFhWyBzcs];
                        fATlV9M[FZKAfq3BsVbv -(cFhWyBzcs + (669 - 668))] = fATlV9M[FZKAfq3BsVbv -(cFhWyBzcs + (74 - 73))] - (814 - 813);
                    }
                    cFhWyBzcs = cFhWyBzcs + (548 - 547);
                }
            }
            {
                cFhWyBzcs = lb + 1;
                for (; cFhWyBzcs <= FZKAfq3BsVbv;) {
                    Dsyx2QHBp5[cFhWyBzcs] = fATlV9M[FZKAfq3BsVbv -cFhWyBzcs] - (102 - 54);
                    cFhWyBzcs = cFhWyBzcs + 1;
                }
            }
            {
                cFhWyBzcs = 100;
                for (; cFhWyBzcs > 0;) {
                    if (Dsyx2QHBp5[cFhWyBzcs] != 0) {
                        clMwRt = cFhWyBzcs;
                        break;
                    }
                    cFhWyBzcs = cFhWyBzcs - 1;
                }
            }
            for (cFhWyBzcs = clMwRt; cFhWyBzcs > 0; cFhWyBzcs--) {
                printf ("%d", Dsyx2QHBp5[cFhWyBzcs]);
            }
            pZAQu5UvyYXg = pZAQu5UvyYXg + 1;
        }
    }
    return 0;
}

