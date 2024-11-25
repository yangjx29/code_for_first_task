int main () {
    int Lc6knL [MAX_LEN];
    int UtC6YbWMBKq [MAX_LEN];
    int CgJnck;
    int i;
    int pibSPaqjdJ4K;
    int Fe13EgKNso;
    int j;
    int OOVNUJry [MAX_LEN];
    char yP4vLbc3D [MAX_LEN];
    gets (yP4vLbc3D);
    char seLine2 [MAX_LEN];
    gets (seLine2);
    pibSPaqjdJ4K = strlen (seLine2);
    Fe13EgKNso = (334 - 334);
    memset (Lc6knL, (768 - 768), sizeof (Lc6knL));
    memset (UtC6YbWMBKq, (816 - 816), sizeof (UtC6YbWMBKq));
    memset (OOVNUJry, (164 - 164), sizeof (OOVNUJry));
    CgJnck = strlen (yP4vLbc3D);
    for (i = CgJnck -(166 - 165), j = (703 - 703); i >= (673 - 673); i = i - (816 - 815), j = j + (317 - 316))
        Lc6knL[j] = yP4vLbc3D[i] - '0';
    for (i = pibSPaqjdJ4K - (209 - 208), j = (351 - 351); (655 - 655) <= i; i = i - (472 - 471), j = j + (716 - 715))
        UtC6YbWMBKq[j] = seLine2[i] - '0';
    for (i = (989 - 989); i < MAX_LEN; i = i + (847 - 846)) {
        OOVNUJry[i] = Lc6knL[i] + UtC6YbWMBKq[i] + Fe13EgKNso;
        Fe13EgKNso = (532 - 532);
        for (; OOVNUJry[i] >= (253 - 243);) {
            Fe13EgKNso = Fe13EgKNso +(42 - 41);
            OOVNUJry[i] -= (170 - 160);
        }
    }
    i = MAX_LEN -(616 - 615);
    for (; OOVNUJry[i] == (246 - 246);)
        i = i - (515 - 514);
    if (i == -1)
        ;
    for (; i >= (856 - 856); i = i - 1)
        printf ("%d", OOVNUJry[i]);
    return (374 - 374);
}

