struct   student {
    char ph6HSOG [(953 - 933)];
    char JVv23Bp [(480 - 460)];
    char PzrobjdiguKt;
    int PFME9jt4k2XO;
    char uiQYZqU0 [(415 - 395)];
    char xAJbKgCkPMH0 [(396 - 376)];
    struct   student *kp9ZNSsLI;
    struct   student *V7LqNBIi6OS;
};
struct   student *fwAMGp31 (void ) {
    struct   student *TdnTzE9kt;
    struct   student *nQBmrhk4OX;
    struct   student *WENSRHbu;
    struct   student *aT1y6AR;
    nQBmrhk4OX = (struct   student *) malloc (LEN);
    scanf ("%s %s %c %d %s %s", nQBmrhk4OX->ph6HSOG, nQBmrhk4OX->JVv23Bp, &nQBmrhk4OX->PzrobjdiguKt, &nQBmrhk4OX->PFME9jt4k2XO, nQBmrhk4OX->uiQYZqU0, nQBmrhk4OX->xAJbKgCkPMH0);
    nQBmrhk4OX->kp9ZNSsLI = NULL;
    nQBmrhk4OX->V7LqNBIi6OS = NULL;
    TdnTzE9kt = nQBmrhk4OX;
    WENSRHbu = nQBmrhk4OX;
    do {
        nQBmrhk4OX = (struct   student *) malloc (LEN);
        scanf ("%s", nQBmrhk4OX->ph6HSOG);
        if (strcmp ("end", nQBmrhk4OX->ph6HSOG) == (729 - 729)) {
            break;
        }
        else {
            scanf ("%s %c %d %s %s", nQBmrhk4OX->JVv23Bp, &nQBmrhk4OX->PzrobjdiguKt, &nQBmrhk4OX->PFME9jt4k2XO, nQBmrhk4OX->uiQYZqU0, nQBmrhk4OX->xAJbKgCkPMH0);
            nQBmrhk4OX->kp9ZNSsLI = NULL;
            nQBmrhk4OX->V7LqNBIi6OS = NULL;
            WENSRHbu->kp9ZNSsLI = nQBmrhk4OX;
            nQBmrhk4OX->V7LqNBIi6OS = WENSRHbu;
            WENSRHbu = nQBmrhk4OX;
        }
    }
    while ((132 - 131));
    aT1y6AR = WENSRHbu;
    return (aT1y6AR);
}

void  mApWj1rlRy (struct   student *aT1y6AR) {
    struct   student *jKSPzaLk4mBJ;
    jKSPzaLk4mBJ = aT1y6AR;
    for (; jKSPzaLk4mBJ;) {
        printf ("%s %s %c %d %s %s\n", jKSPzaLk4mBJ->ph6HSOG, jKSPzaLk4mBJ->JVv23Bp, jKSPzaLk4mBJ->PzrobjdiguKt, jKSPzaLk4mBJ->PFME9jt4k2XO, jKSPzaLk4mBJ->uiQYZqU0, jKSPzaLk4mBJ->xAJbKgCkPMH0);
        jKSPzaLk4mBJ = jKSPzaLk4mBJ->V7LqNBIi6OS;
    }
}

int main () {
    struct   student *aT1y6AR;
    mApWj1rlRy (aT1y6AR);
    aT1y6AR = fwAMGp31 ();
}

