main () {
    char kIm1ce4l [100] [(775 - 674)], kd20bm [101], x9W2ehXZr [101];
    int ORvKVn;
    int RLHm9B5ApW4K;
    scanf ("%d", &ORvKVn);
    {
        RLHm9B5ApW4K = 753 - 753;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (ORvKVn > RLHm9B5ApW4K) {
            scanf ("%s", kIm1ce4l[RLHm9B5ApW4K]);
            RLHm9B5ApW4K = RLHm9B5ApW4K +1;
        };
    }
    {
        RLHm9B5ApW4K = 0;
        while (ORvKVn > RLHm9B5ApW4K) {
            int ORvKVn;
            int eN1ReDYPX = 0, mAJoQ2Md31bO = 0, ik8D0CUxtnj = 0;
            ORvKVn = strlen (kIm1ce4l[RLHm9B5ApW4K]);
            {
                eN1ReDYPX = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                while (ORvKVn > eN1ReDYPX) {
                    kd20bm[eN1ReDYPX] = ' ';
                    x9W2ehXZr[eN1ReDYPX] = ' ';
                    eN1ReDYPX++;
                };
            }
            {
                eN1ReDYPX = ORvKVn -1;
                while (0 <= eN1ReDYPX) {
                    if (!('(' != kIm1ce4l[RLHm9B5ApW4K][eN1ReDYPX]))
                        kd20bm[eN1ReDYPX] = kIm1ce4l[RLHm9B5ApW4K][eN1ReDYPX];
                    eN1ReDYPX = eN1ReDYPX - 1;
                };
            }
            {
                eN1ReDYPX = 0;
                while (ORvKVn > eN1ReDYPX) {
                    if (!(')' != kIm1ce4l[RLHm9B5ApW4K][eN1ReDYPX]))
                        x9W2ehXZr[eN1ReDYPX] = kIm1ce4l[RLHm9B5ApW4K][eN1ReDYPX];
                    eN1ReDYPX++;
                };
            }
            {
                eN1ReDYPX = ORvKVn -1;
                while (0 <= eN1ReDYPX) {
                    if (!('(' != kd20bm[eN1ReDYPX])) {
                        mAJoQ2Md31bO = eN1ReDYPX + 1;
                        while (ORvKVn > mAJoQ2Md31bO) {
                            if (x9W2ehXZr[mAJoQ2Md31bO] == ')') {
                                x9W2ehXZr[mAJoQ2Md31bO] = ' ';
                                kd20bm[eN1ReDYPX] = ' ';
                                break;
                            }
                            mAJoQ2Md31bO = mAJoQ2Md31bO + 1;
                        };
                    }
                    eN1ReDYPX--;
                };
            }
            printf ("%s\n", kIm1ce4l[RLHm9B5ApW4K]);
            {
                eN1ReDYPX = 0;
                while (eN1ReDYPX < ORvKVn) {
                    if (kd20bm[eN1ReDYPX] != ' ')
                        kIm1ce4l[RLHm9B5ApW4K][eN1ReDYPX] = '$';
                    if (x9W2ehXZr[eN1ReDYPX] != ' ')
                        kIm1ce4l[RLHm9B5ApW4K][eN1ReDYPX] = '?';
                    if (kd20bm[eN1ReDYPX] == ' ' && x9W2ehXZr[eN1ReDYPX] == ' ')
                        kIm1ce4l[RLHm9B5ApW4K][eN1ReDYPX] = ' ';
                    eN1ReDYPX++;
                };
            }
            printf ("%s\n", kIm1ce4l[RLHm9B5ApW4K]);
            RLHm9B5ApW4K = RLHm9B5ApW4K +1;
        };
    };
}

