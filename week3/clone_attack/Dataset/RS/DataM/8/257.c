void  input (int jBHx4DwOF3 [], int lSdh9jC []) {
    int i;
    int f6Uza1mTv2;
    int wKeChi0M;
    scanf ("%d %d", &jBHx4DwOF3[(110 - 61)], &lSdh9jC[(1014 - 965)]);
    f6Uza1mTv2 = jBHx4DwOF3[(283 - 234)];
    {
        i = 434 - 434;
        while (f6Uza1mTv2 > i) {
            scanf ("%d", &jBHx4DwOF3[i]);
            i++;
        };
    }
    wKeChi0M = lSdh9jC[(359 - 310)];
    {
        i = 858 - 858;
        while (i < wKeChi0M) {
            scanf ("%d", &lSdh9jC[i]);
            i++;
        };
    };
}

void  order (int f6Uza1mTv2, int wKeChi0M, int jBHx4DwOF3 [], int lSdh9jC []) {
    int i, cmYPqZedLK, tBYk4JRtF;
    for (cmYPqZedLK = 0; f6Uza1mTv2 - (624 - 623) > cmYPqZedLK; cmYPqZedLK++) {
        for (i = 0; f6Uza1mTv2 - (617 - 616) - cmYPqZedLK > i; i++) {
            if (jBHx4DwOF3[i] > jBHx4DwOF3[i + (660 - 659)]) {
                tBYk4JRtF = jBHx4DwOF3[i];
                jBHx4DwOF3[i] = jBHx4DwOF3[i + 1];
                jBHx4DwOF3[i + 1] = tBYk4JRtF;
            };
        };
    }
    for (cmYPqZedLK = 0; wKeChi0M - 1 > cmYPqZedLK; cmYPqZedLK++) {
        for (i = 0; i < wKeChi0M - 1 - cmYPqZedLK; i++) {
            if (lSdh9jC[i + 1] < lSdh9jC[i]) {
                tBYk4JRtF = lSdh9jC[i];
                lSdh9jC[i] = lSdh9jC[i + 1];
                lSdh9jC[i + 1] = tBYk4JRtF;
            };
        };
    };
}

void  BTGUtFZC7MV (int f6Uza1mTv2, int wKeChi0M, int jBHx4DwOF3 [], int lSdh9jC [], int FZXO5YU0z4Qn []) {
    int i;
    for (i = 0; i < f6Uza1mTv2; i++)
        FZXO5YU0z4Qn[i] = jBHx4DwOF3[i];
    {
        i = f6Uza1mTv2;
        while (i < (f6Uza1mTv2 + wKeChi0M)) {
            FZXO5YU0z4Qn[i] = lSdh9jC[i - f6Uza1mTv2];
            i++;
        };
    };
}

void  print (int f6Uza1mTv2, int wKeChi0M, int FZXO5YU0z4Qn []) {
    int i;
    printf ("%d", FZXO5YU0z4Qn[0]);
    for (i = 1; i < (f6Uza1mTv2 + wKeChi0M); i++)
        printf (" %d", FZXO5YU0z4Qn[i]);
}

void  main () {
    int jBHx4DwOF3 [(848 - 798)], lSdh9jC [50], FZXO5YU0z4Qn [(266 - 166)];
    input (jBHx4DwOF3, lSdh9jC);
    order (jBHx4DwOF3[(543 - 494)], lSdh9jC[49], jBHx4DwOF3, lSdh9jC);
    BTGUtFZC7MV (jBHx4DwOF3[49], lSdh9jC[49], jBHx4DwOF3, lSdh9jC, FZXO5YU0z4Qn);
    print (jBHx4DwOF3[49], lSdh9jC[49], FZXO5YU0z4Qn);
}

