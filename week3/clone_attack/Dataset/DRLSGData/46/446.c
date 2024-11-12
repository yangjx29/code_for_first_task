int main (int XiUIev, char *fPNH23fjut4G []) {
    int iLDsf4 [(1057 - 957)] [(926 - 826)];
    int aTMnlW, hyX8QE, ntG4QhaoJrV3, tUS2xlX7o, Q6BCJr9Rbts, bXKI7d, Yq7loPK0, nV1c0Sp23;
    scanf ("%d%d", &aTMnlW, &hyX8QE);
    for (ntG4QhaoJrV3 = (233 - 233); ntG4QhaoJrV3 < aTMnlW; ntG4QhaoJrV3++)
        for (tUS2xlX7o = (478 - 478); tUS2xlX7o < hyX8QE; tUS2xlX7o = tUS2xlX7o + (390 - 389))
            scanf ("%d", &iLDsf4[ntG4QhaoJrV3][tUS2xlX7o]);
    Q6BCJr9Rbts = (65 - 65);
    bXKI7d = aTMnlW - (342 - 341);
    Yq7loPK0 = (616 - 616);
    nV1c0Sp23 = hyX8QE - (179 - 178);
    for (; Yq7loPK0 < nV1c0Sp23 && bXKI7d > Q6BCJr9Rbts;) {
        for (ntG4QhaoJrV3 = Yq7loPK0; ntG4QhaoJrV3 < nV1c0Sp23; ntG4QhaoJrV3++)
            printf ("%d\n", iLDsf4[Q6BCJr9Rbts][ntG4QhaoJrV3]);
        for (ntG4QhaoJrV3 = Q6BCJr9Rbts; ntG4QhaoJrV3 < bXKI7d; ntG4QhaoJrV3++)
            printf ("%d\n", iLDsf4[ntG4QhaoJrV3][nV1c0Sp23]);
        {
            ntG4QhaoJrV3 = nV1c0Sp23;
            for (; ntG4QhaoJrV3 > Yq7loPK0;) {
                printf ("%d\n", iLDsf4[bXKI7d][ntG4QhaoJrV3]);
                ntG4QhaoJrV3 = ntG4QhaoJrV3 - 1;
            }
        }
        {
            ntG4QhaoJrV3 = bXKI7d;
            for (; ntG4QhaoJrV3 > Q6BCJr9Rbts;) {
                printf ("%d\n", iLDsf4[ntG4QhaoJrV3][Yq7loPK0]);
                ntG4QhaoJrV3--;
            }
        }
        Q6BCJr9Rbts++;
        bXKI7d--;
        Yq7loPK0 = Yq7loPK0 +1;
        nV1c0Sp23--;
    }
    if (Q6BCJr9Rbts == bXKI7d && Yq7loPK0 < nV1c0Sp23) {
        for (ntG4QhaoJrV3 = Yq7loPK0; ntG4QhaoJrV3 <= nV1c0Sp23; ntG4QhaoJrV3++)
            printf ("%d\n", iLDsf4[Q6BCJr9Rbts][ntG4QhaoJrV3]);
    }
    else if (Q6BCJr9Rbts < bXKI7d && Yq7loPK0 == nV1c0Sp23) {
        for (ntG4QhaoJrV3 = Q6BCJr9Rbts; ntG4QhaoJrV3 <= bXKI7d; ntG4QhaoJrV3++)
            printf ("%d\n", iLDsf4[ntG4QhaoJrV3][Yq7loPK0]);
    }
    else if (Q6BCJr9Rbts == bXKI7d && Yq7loPK0 == nV1c0Sp23)
        printf ("%d\n", iLDsf4[Q6BCJr9Rbts][nV1c0Sp23]);
    return 0;
}

