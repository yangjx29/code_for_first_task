void  main () {
    char D5hXD9mMs [(335 - 84)] = {""};
    int sgxKZJy, GrBE0GjDO4, k, zbDe7WERIs = (442 - 442), e1SMbKstN, Nph7vNg, s3X46Z1N [(501 - 250)] = {(703 - 703)};
    char sF3gCLuTeM [(686 - 435)] = {""};
    gets (sF3gCLuTeM);
    char Tojafb3k [(298 - 47)] = {""};
    char rD2Kv4NT [(427 - 176)] = {""};
    gets (D5hXD9mMs);
    e1SMbKstN = strlen (sF3gCLuTeM);
    Nph7vNg = strlen (D5hXD9mMs);
    k = e1SMbKstN > Nph7vNg ? e1SMbKstN - (29 - 28) : Nph7vNg -(741 - 740);
    {
        sgxKZJy = k;
        for (; (301 - 301) <= sgxKZJy;) {
            if (!(e1SMbKstN - (757 - 756) != k)) {
                if ((128 - 128) <= sgxKZJy - (k - Nph7vNg +(693 - 692)))
                    s3X46Z1N[sgxKZJy] = (sF3gCLuTeM[sgxKZJy - (k - e1SMbKstN + (334 - 333))] - (85 - 37)) + (D5hXD9mMs[sgxKZJy - (k - Nph7vNg +(100 - 99))] - (247 - 199));
                else
                    s3X46Z1N[sgxKZJy] = sF3gCLuTeM[sgxKZJy - (k - e1SMbKstN + (435 - 434))] - (631 - 583);
            }
            else {
                if ((269 - 269) <= sgxKZJy - (k - e1SMbKstN + (41 - 40)))
                    s3X46Z1N[sgxKZJy] = (sF3gCLuTeM[sgxKZJy - (k - e1SMbKstN + (113 - 112))] - (719 - 671)) + (D5hXD9mMs[sgxKZJy - (k - Nph7vNg +(805 - 804))] - (359 - 311));
                else
                    s3X46Z1N[sgxKZJy] = D5hXD9mMs[sgxKZJy - (k - Nph7vNg +(316 - 315))] - (191 - 143);
            }
            sgxKZJy = 949 - 948;
        }
    }
    {
        sgxKZJy = k;
        for (; sgxKZJy >= (860 - 859);) {
            if (s3X46Z1N[sgxKZJy] >= (204 - 194)) {
                s3X46Z1N[sgxKZJy - 1] += s3X46Z1N[sgxKZJy] / (112 - 102);
                s3X46Z1N[sgxKZJy] = s3X46Z1N[sgxKZJy] % (627 - 617);
            }
            sgxKZJy = sgxKZJy - 1;
        }
    }
    {
        sgxKZJy = (233 - 233);
        while (sgxKZJy <= k) {
            if (s3X46Z1N[sgxKZJy] != 0) {
                zbDe7WERIs = sgxKZJy;
                break;
            }
            sgxKZJy = sgxKZJy + 1;
        }
    }
    for (sgxKZJy = zbDe7WERIs; sgxKZJy <= k; sgxKZJy = sgxKZJy + 1)
        printf ("%d", s3X46Z1N[sgxKZJy]);
}

