int QiBhdHEQVYuo (const  void  *dG9qS4Iod6E, const  void  *elem2) {
    int *k4UPvR6DG;
    int *ZXHOoRNw8urU;
    k4UPvR6DG = (int *) elem2;
    ZXHOoRNw8urU = (int *) dG9qS4Iod6E;
    return (*k4UPvR6DG) - (*ZXHOoRNw8urU);
}

main () {
    int sSLko0;
    {
        sSLko0 = (292 - 291);
        for (; (912 - 911);) {
            int l7y8VNSD;
            scanf ("%d", &l7y8VNSD);
            if (!((23 - 23) != l7y8VNSD))
                break;
            else {
                int t;
                int b2;
                int qjEOLyWw2YR;
                int fG0JNA [l7y8VNSD];
                int Q [l7y8VNSD];
                int Qp0qXgLI;
                int L4SvhWMKouI;
                int zIHF0SEp8s2;
                int Y9B8OKyj0p;
                int k1tdjNylnmLU;
                int NVKq4TeyvAJ6;
                int money;
                {
                    k1tdjNylnmLU = (725 - 725);
                    for (; l7y8VNSD > k1tdjNylnmLU;) {
                        scanf ("%d", &fG0JNA[k1tdjNylnmLU]);
                        k1tdjNylnmLU = k1tdjNylnmLU + (430 - 429);
                    }
                }
                qsort (fG0JNA, l7y8VNSD, sizeof (int), QiBhdHEQVYuo);
                zIHF0SEp8s2 = (403 - 403);
                Qp0qXgLI = (752 - 752);
                L4SvhWMKouI = (266 - 266);
                qjEOLyWw2YR = (98 - 98);
                b2 = (655 - 655);
                t = (166 - 166);
                Y9B8OKyj0p = (559 - 559);
                {
                    k1tdjNylnmLU = (512 - 512);
                    for (; k1tdjNylnmLU < l7y8VNSD;) {
                        scanf ("%d", &Q[k1tdjNylnmLU]);
                        k1tdjNylnmLU = k1tdjNylnmLU + 1;
                    }
                }
                qsort (Q, l7y8VNSD, sizeof (int), QiBhdHEQVYuo);
                {
                    NVKq4TeyvAJ6 = (312 - 312);
                    for (; NVKq4TeyvAJ6 < l7y8VNSD;) {
                        if (fG0JNA[Qp0qXgLI] > Q[L4SvhWMKouI]) {
                            Qp0qXgLI = Qp0qXgLI +1;
                            zIHF0SEp8s2 = zIHF0SEp8s2 + 1;
                            L4SvhWMKouI = L4SvhWMKouI +1;
                        }
                        else {
                            if (fG0JNA[l7y8VNSD - (499 - 498) - qjEOLyWw2YR] > Q[l7y8VNSD - (25 - 24) - b2]) {
                                b2 = b2 + 1;
                                zIHF0SEp8s2++;
                                qjEOLyWw2YR++;
                            }
                            else {
                                if (fG0JNA[l7y8VNSD - (841 - 840) - qjEOLyWw2YR] == Q[L4SvhWMKouI])
                                    break;
                                else {
                                    L4SvhWMKouI = L4SvhWMKouI +1;
                                    qjEOLyWw2YR++;
                                    Y9B8OKyj0p++;
                                }
                            }
                        }
                        NVKq4TeyvAJ6++;
                    }
                }
                money = (942 - 742) * (zIHF0SEp8s2 - Y9B8OKyj0p);
                printf ("%d\n", money);
            }
            sSLko0++;
        }
    }
}

