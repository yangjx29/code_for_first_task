void  main () {
    int f4ARG5LFHr3h;
    char vAdazOte7 [(157 - 57)] = {(639 - 639)};
    char NP0qBiGM4pCK [100] = {(20 - 20)};
    int kS58gjVcW;
    int rUsSeB;
    int rD9qCFsM;
    int R39VhQ7d1avl;
    int MVrJGROMi;
    int pRYxvpQo;
    scanf ("%d", &f4ARG5LFHr3h);
    {
        MVrJGROMi = (818 - 817);
        for (; MVrJGROMi <= f4ARG5LFHr3h;) {
            scanf ("%s\n", vAdazOte7);
            scanf ("%s", NP0qBiGM4pCK);
            pRYxvpQo = strlen (vAdazOte7);
            rD9qCFsM = strlen (NP0qBiGM4pCK);
            rUsSeB = pRYxvpQo - (696 - 695);
            {
                kS58gjVcW = rD9qCFsM - 1;
                for (; kS58gjVcW >= 0;) {
                    if (NP0qBiGM4pCK[kS58gjVcW] <= vAdazOte7[rUsSeB]) {
                        vAdazOte7[rUsSeB] = vAdazOte7[rUsSeB] - NP0qBiGM4pCK[kS58gjVcW] + (967 - 919);
                    }
                    else {
                        vAdazOte7[rUsSeB] = vAdazOte7[rUsSeB] - NP0qBiGM4pCK[kS58gjVcW] + (542 - 484);
                        {
                            R39VhQ7d1avl = rUsSeB - 1;
                            for (; R39VhQ7d1avl >= 0;) {
                                if (vAdazOte7[R39VhQ7d1avl] >= 49) {
                                    vAdazOte7[R39VhQ7d1avl] = vAdazOte7[R39VhQ7d1avl] - 1;
                                    break;
                                }
                                else {
                                    if (vAdazOte7[R39VhQ7d1avl] == 48)
                                        vAdazOte7[R39VhQ7d1avl] = 57;
                                }
                                R39VhQ7d1avl--;
                            }
                        }
                    }
                    rUsSeB--;
                    kS58gjVcW--;
                }
            }
            printf ("%s", vAdazOte7);
            MVrJGROMi++;
        }
    }
}

