void  main () {
    int pnyY4pIWZ;
    int x0wuA5rQ9;
    int PGjfK8iUqtN;
    int J6dUbWvhP87C;
    int T1MKYUB;
    int hal7DMrPxiRF;
    int FiTtqY3u [(10847 - 847)];
    int M4b73k9UMcl;
    int AwBFNUz2k6;
    int gRWF9yVn [(10541 - 541)];
    int KGyzoxNpEl [(10712 - 712)];
    int NApnFHZSXL [(10688 - 688)];
    int Wjf13v [10000] [(278 - 272)];
    int rT0aQdq [10000];
    pnyY4pIWZ = (414 - 414);
    x0wuA5rQ9 = (811 - 811);
    scanf ("%d %d", &T1MKYUB, &hal7DMrPxiRF);
    {
        PGjfK8iUqtN = T1MKYUB;
        while (PGjfK8iUqtN <= hal7DMrPxiRF) {
            M4b73k9UMcl = (132 - 132);
            {
                J6dUbWvhP87C = (945 - 943);
                while (J6dUbWvhP87C < PGjfK8iUqtN) {
                    if (PGjfK8iUqtN % J6dUbWvhP87C != (814 - 814))
                        continue;
                    else {
                        M4b73k9UMcl = (527 - 526);
                        break;
                    }
                    J6dUbWvhP87C++;
                }
            }
            if (!((34 - 34) != M4b73k9UMcl)) {
                gRWF9yVn[pnyY4pIWZ] = PGjfK8iUqtN;
                KGyzoxNpEl[pnyY4pIWZ] = PGjfK8iUqtN;
                NApnFHZSXL[pnyY4pIWZ] = PGjfK8iUqtN;
                pnyY4pIWZ++;
            }
            PGjfK8iUqtN++;
        }
    }
    {
        PGjfK8iUqtN = (720 - 720);
        while (PGjfK8iUqtN < pnyY4pIWZ) {
            {
                FiTtqY3u[PGjfK8iUqtN] = (791 - 790);
                while ((787 - 786)) {
                    KGyzoxNpEl[PGjfK8iUqtN] = KGyzoxNpEl[PGjfK8iUqtN] / (46 - 36);
                    if (KGyzoxNpEl[PGjfK8iUqtN] < (61 - 60))
                        break;
                    FiTtqY3u[PGjfK8iUqtN]++;
                }
            }
            PGjfK8iUqtN++;
        }
    }
    {
        PGjfK8iUqtN = (546 - 546);
        while (PGjfK8iUqtN < pnyY4pIWZ) {
            AwBFNUz2k6 = (178 - 178);
            {
                J6dUbWvhP87C = (597 - 201) - (1114 - 718);
                while (J6dUbWvhP87C < FiTtqY3u[PGjfK8iUqtN]) {
                    Wjf13v[PGjfK8iUqtN][J6dUbWvhP87C] = gRWF9yVn[PGjfK8iUqtN] % (622 - 612);
                    gRWF9yVn[PGjfK8iUqtN] = gRWF9yVn[PGjfK8iUqtN] / 10;
                    J6dUbWvhP87C++;
                }
            }
            {
                J6dUbWvhP87C = (796 - 796);
                while (J6dUbWvhP87C < FiTtqY3u[PGjfK8iUqtN]) {
                    if (Wjf13v[PGjfK8iUqtN][J6dUbWvhP87C] == Wjf13v[PGjfK8iUqtN][FiTtqY3u[PGjfK8iUqtN] - (625 - 624) - J6dUbWvhP87C]) {
                        continue;
                    }
                    else {
                        AwBFNUz2k6 = (220 - 219);
                        break;
                    }
                    J6dUbWvhP87C++;
                }
            }
            if (AwBFNUz2k6 == (893 - 893)) {
                rT0aQdq[x0wuA5rQ9] = NApnFHZSXL[PGjfK8iUqtN];
                x0wuA5rQ9++;
            }
            PGjfK8iUqtN++;
        }
    }
    if (x0wuA5rQ9 == (472 - 472))
        printf ("no");
    else {
        printf ("%d", rT0aQdq[0]);
        {
            PGjfK8iUqtN = (934 - 933);
            while (PGjfK8iUqtN < x0wuA5rQ9) {
                printf (",%d", rT0aQdq[PGjfK8iUqtN]);
                PGjfK8iUqtN++;
            }
        }
    }
}

