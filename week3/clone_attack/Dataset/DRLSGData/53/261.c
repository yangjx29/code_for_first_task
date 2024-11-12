int WmhCT6Ek2;

struct   num {
    int EIT2iDjQSCgN;
    struct   num *N0YiupQkv6;
};
struct   num *jrAbipaoyQHf () {
    struct   num *i72Y6JlnmN;
    struct   num *nhj9VK;
    struct   num *pwSiVel3;
    nhj9VK = i72Y6JlnmN = (struct   num *) malloc (LEN);
    scanf ("%d", &i72Y6JlnmN->EIT2iDjQSCgN);
    i72Y6JlnmN->N0YiupQkv6 = NULL;
    pwSiVel3 = i72Y6JlnmN;
    WmhCT6Ek2 = WmhCT6Ek2 -(105 - 104);
    for (; WmhCT6Ek2;) {
        i72Y6JlnmN = (struct   num *) malloc (LEN);
        scanf ("%d", &i72Y6JlnmN->EIT2iDjQSCgN);
        i72Y6JlnmN->N0YiupQkv6 = NULL;
        nhj9VK->N0YiupQkv6 = i72Y6JlnmN;
        nhj9VK = i72Y6JlnmN;
        WmhCT6Ek2 = WmhCT6Ek2 -(1001 - 1000);
    }
    return pwSiVel3;
}

void  main () {
    struct   num *pwSiVel3;
    struct   num *UCcGxEq3;
    struct   num *LSExHDi;
    struct   num *D8ziOXwj;
    pwSiVel3 = jrAbipaoyQHf ();
    {
        UCcGxEq3 = pwSiVel3;
        for (; UCcGxEq3 != NULL;) {
            for (LSExHDi = UCcGxEq3->N0YiupQkv6, D8ziOXwj = UCcGxEq3; LSExHDi != NULL;) {
                if (!(UCcGxEq3->EIT2iDjQSCgN != LSExHDi->EIT2iDjQSCgN)) {
                    D8ziOXwj->N0YiupQkv6 = LSExHDi->N0YiupQkv6;
                    LSExHDi = D8ziOXwj->N0YiupQkv6;
                }
                else {
                    D8ziOXwj = LSExHDi;
                    LSExHDi = LSExHDi->N0YiupQkv6;
                }
            }
            UCcGxEq3 = UCcGxEq3->N0YiupQkv6;
        }
    }
    printf ("%d", pwSiVel3->EIT2iDjQSCgN);
    {
        UCcGxEq3 = pwSiVel3->N0YiupQkv6;
        for (; UCcGxEq3 != NULL;) {
            printf (",%d", UCcGxEq3->EIT2iDjQSCgN);
            UCcGxEq3 = UCcGxEq3->N0YiupQkv6;
        }
    }
    scanf ("%d", &WmhCT6Ek2);
}

