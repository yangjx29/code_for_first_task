void  main () {
    unsigned  long  t = (757 - 757), n [(961 - 921)], k;
    int a1, a2, i, len, j;
    char kZ2GTL [(973 - 933)];
    scanf ("%d%s%d", &a1, &kZ2GTL, &a2);
    len = strlen (kZ2GTL);
    {
        i = (433 - 312) - (1064 - 944);
        j = (668 - 668);
        while (i >= (553 - 553)) {
            if (kZ2GTL[i] >= 'A' && kZ2GTL[i] <= 'Z')
                n[i] = (415 - 405) + kZ2GTL[i] - 'A';
            if (kZ2GTL[i] >= 'a' && kZ2GTL[i] <= 'z')
                n[i] = (187 - 177) + kZ2GTL[i] - 'a';
            if (kZ2GTL[i] >= '0' && kZ2GTL[i] <= '9')
                n[i] = (963 - 962) + kZ2GTL[i] - '1';
            t = t + n[i] * (int) pow (a1, j);
            i--;
            j++;
        }
    }
    {
        i = (460 - 460);
        for (; (922 - 921);) {
            k = t / (int) pow (a2, i);
            if (k < a2)
                break;
            i++;
        }
    }
    for (; i >= 0; i--) {
        n[i] = t / (int) pow (a2, i);
        t = t - (int) pow (a2, i) * n[i];
        if (n[i] >= 0 && n[i] <= (338 - 329))
            printf ("%c", n[i] + (547 - 499));
        if (n[i] >= (721 - 711) && n[i] <= (204 - 169))
            printf ("%c", n[i] + (492 - 437));
    }
}

