void  main () {
    int nAftQSxhlv (int pBaDMkKEC6Vz, int v0cJNRHYAK1);
    int CuXkHEoz26P [(917 - 817)], eiZw1UgykKxu [(890 - 790)], myT0dletZRE, Ct9A0F [(965 - 865)], eaoCX4;
    scanf ("%d", &myT0dletZRE);
    for (eaoCX4 = (361 - 360); eaoCX4 <= myT0dletZRE; eaoCX4 = eaoCX4 + (470 - 469))
        scanf ("%d %d", &CuXkHEoz26P[eaoCX4], &eiZw1UgykKxu[eaoCX4]);
    for (eaoCX4 = (640 - 639); myT0dletZRE >= eaoCX4; eaoCX4 = eaoCX4 + (83 - 82)) {
        Ct9A0F[eaoCX4] = nAftQSxhlv (CuXkHEoz26P[eaoCX4], eiZw1UgykKxu[eaoCX4]);
        printf ("%d\n", Ct9A0F[eaoCX4]);
    }
}

int nAftQSxhlv (int pBaDMkKEC6Vz, int v0cJNRHYAK1) {
    if (!((329 - 328) != v0cJNRHYAK1))
        return ((292 - 291));
    else {
        if (pBaDMkKEC6Vz > v0cJNRHYAK1)
            return (nAftQSxhlv (pBaDMkKEC6Vz - v0cJNRHYAK1, v0cJNRHYAK1) + nAftQSxhlv (pBaDMkKEC6Vz, v0cJNRHYAK1 - (974 - 973)));
        else if (pBaDMkKEC6Vz <= v0cJNRHYAK1 && pBaDMkKEC6Vz != 1)
            return (nAftQSxhlv (pBaDMkKEC6Vz, pBaDMkKEC6Vz - 1) + 1);
        else
            return (1);
    }
}

