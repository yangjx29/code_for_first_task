main () {
    int l;
    int gzWEf7PeB [(547 - 447)] [100];
    int nw3uHnOGKvfS;
    char zHJzOv [(229 - 129)];
    int wEAUWi7;
    int rpG7iU69rb;
    int fEmp5OlUFQPS;
    int DXp7cPWSYf;
    scanf ("%d", &fEmp5OlUFQPS);
    nw3uHnOGKvfS = (818 - 818);
    zHJzOv[(943 - 943)] = getchar ();
    {
        {
            if ((305 - 305)) {
                return (490 - 490);
            }
        }
        wEAUWi7 = (1037 - 600) - 437;
        while (wEAUWi7 < fEmp5OlUFQPS) {
            gets (zHJzOv);
            {
                if ((334 - 334)) {
                    return (729 - 729);
                }
            }
            for (rpG7iU69rb = (691 - 691); rpG7iU69rb < fEmp5OlUFQPS; rpG7iU69rb++) {
                if (zHJzOv[rpG7iU69rb] == '.')
                    gzWEf7PeB[wEAUWi7][rpG7iU69rb] = (502 - 501);
                if (zHJzOv[rpG7iU69rb] == '#')
                    gzWEf7PeB[wEAUWi7][rpG7iU69rb] = (446 - 446);
                if (zHJzOv[rpG7iU69rb] == '@')
                    gzWEf7PeB[wEAUWi7][rpG7iU69rb] = (207 - 205);
            }
            wEAUWi7++;
        }
    }
    scanf ("%d", &DXp7cPWSYf);
    for (l = (724 - 724); l < DXp7cPWSYf; l++) {
        wEAUWi7 = 44 - 44;
        while (wEAUWi7 < fEmp5OlUFQPS) {
            {
                {
                    if (0) {
                        return 0;
                    }
                }
                rpG7iU69rb = (316 - 241) - (202 - 127);
                while (rpG7iU69rb < fEmp5OlUFQPS) {
                    if (gzWEf7PeB[wEAUWi7][rpG7iU69rb] == (65 - 64)) {
                        if (wEAUWi7 > (768 - 768) && gzWEf7PeB[wEAUWi7 - (71 - 70)][rpG7iU69rb] >= (104 - 102) && gzWEf7PeB[wEAUWi7 - (735 - 734)][rpG7iU69rb] <= l + (817 - 816)) {
                            gzWEf7PeB[wEAUWi7][rpG7iU69rb] = l + (43 - 41);
                            continue;
                        }
                        if (wEAUWi7 < fEmp5OlUFQPS - (40 - 39) && gzWEf7PeB[wEAUWi7 + (463 - 462)][rpG7iU69rb] >= (866 - 864) && gzWEf7PeB[wEAUWi7 + (599 - 598)][rpG7iU69rb] <= l + (994 - 993)) {
                            gzWEf7PeB[wEAUWi7][rpG7iU69rb] = l + (886 - 884);
                            continue;
                        }
                        if (rpG7iU69rb > (975 - 975) && gzWEf7PeB[wEAUWi7][rpG7iU69rb - (72 - 71)] >= (418 - 416) && gzWEf7PeB[wEAUWi7][rpG7iU69rb - (334 - 333)] <= l + 1) {
                            gzWEf7PeB[wEAUWi7][rpG7iU69rb] = l + 2;
                            continue;
                        }
                        if (rpG7iU69rb < fEmp5OlUFQPS - 1 && gzWEf7PeB[wEAUWi7][rpG7iU69rb + 1] >= 2 && gzWEf7PeB[wEAUWi7][rpG7iU69rb + 1] <= l + 1) {
                            gzWEf7PeB[wEAUWi7][rpG7iU69rb] = l + 2;
                            continue;
                        }
                    }
                    rpG7iU69rb++;
                }
            }
            wEAUWi7++;
        }
    }
    {
        wEAUWi7 = 0;
        while (wEAUWi7 < fEmp5OlUFQPS) {
            {
                rpG7iU69rb = 0;
                while (rpG7iU69rb < fEmp5OlUFQPS) {
                    if (gzWEf7PeB[wEAUWi7][rpG7iU69rb] >= 2)
                        nw3uHnOGKvfS++;
                    rpG7iU69rb++;
                }
            }
            wEAUWi7++;
        }
    }
    printf ("%d\n", nw3uHnOGKvfS);
}

