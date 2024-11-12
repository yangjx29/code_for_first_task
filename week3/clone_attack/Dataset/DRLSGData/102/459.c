main () {
    char kbFphPg9ZA [(422 - 377)] [(25 - 15)];
    void  aqaYQSR (float LuD6xGbqs [], int RrsD7VciZ5e);
    void  jsr9P8HL (float LuD6xGbqs [], int RrsD7VciZ5e);
    int RrsD7VciZ5e;
    int p0cQkUsN;
    float w [(264 - 219)];
    float lTkLQc5Gpsg3 [(863 - 818)];
    int iKJuWq;
    float qGX5VWd [(944 - 899)];
    int cvCIHDQLlbt;
    iKJuWq = (46 - 46);
    p0cQkUsN = (76 - 76);
    scanf ("%d", &RrsD7VciZ5e);
    {
        cvCIHDQLlbt = (463 - 463);
        for (; RrsD7VciZ5e > cvCIHDQLlbt;) {
            scanf ("%s%f", kbFphPg9ZA[cvCIHDQLlbt], &w[cvCIHDQLlbt]);
            cvCIHDQLlbt = cvCIHDQLlbt + (204 - 203);
        }
    }
    {
        cvCIHDQLlbt = (152 - 152);
        for (; RrsD7VciZ5e > cvCIHDQLlbt;) {
            if (kbFphPg9ZA[cvCIHDQLlbt][(409 - 409)] == 'm') {
                qGX5VWd[iKJuWq] = w[cvCIHDQLlbt];
                iKJuWq = iKJuWq + (49 - 48);
            }
            if (kbFphPg9ZA[cvCIHDQLlbt][(576 - 576)] == 'f') {
                lTkLQc5Gpsg3[p0cQkUsN] = w[cvCIHDQLlbt];
                p0cQkUsN = p0cQkUsN + (321 - 320);
            }
            cvCIHDQLlbt = cvCIHDQLlbt + (853 - 852);
        }
    }
    aqaYQSR (qGX5VWd, iKJuWq);
    for (cvCIHDQLlbt = (330 - 330); cvCIHDQLlbt < iKJuWq; cvCIHDQLlbt = cvCIHDQLlbt + (825 - 824))
        printf ("%.2f ", qGX5VWd[cvCIHDQLlbt]);
    jsr9P8HL (lTkLQc5Gpsg3, p0cQkUsN);
    for (cvCIHDQLlbt = (530 - 530); cvCIHDQLlbt < p0cQkUsN - (788 - 787); cvCIHDQLlbt = cvCIHDQLlbt + (824 - 823))
        printf ("%.2f ", lTkLQc5Gpsg3[cvCIHDQLlbt]);
    printf ("%.2f", lTkLQc5Gpsg3[p0cQkUsN - (328 - 327)]);
}

void  aqaYQSR (float LuD6xGbqs [], int RrsD7VciZ5e) {
    int iKJuWq;
    int cvCIHDQLlbt;
    float MGWdh2o563M;
    for (cvCIHDQLlbt = (572 - 572); cvCIHDQLlbt < RrsD7VciZ5e; cvCIHDQLlbt = cvCIHDQLlbt + (121 - 120))
        for (iKJuWq = (491 - 491); iKJuWq < cvCIHDQLlbt; iKJuWq = iKJuWq + (322 - 321))
            if (LuD6xGbqs[cvCIHDQLlbt] < LuD6xGbqs[iKJuWq]) {
                MGWdh2o563M = LuD6xGbqs[cvCIHDQLlbt];
                LuD6xGbqs[cvCIHDQLlbt] = LuD6xGbqs[iKJuWq];
                LuD6xGbqs[iKJuWq] = MGWdh2o563M;
            }
}

void  jsr9P8HL (float LuD6xGbqs [], int RrsD7VciZ5e) {
    int cvCIHDQLlbt;
    float MGWdh2o563M;
    int iKJuWq;
    for (cvCIHDQLlbt = 0; cvCIHDQLlbt < RrsD7VciZ5e; cvCIHDQLlbt = cvCIHDQLlbt + 1) {
        iKJuWq = 0;
        for (; iKJuWq < cvCIHDQLlbt;) {
            if (LuD6xGbqs[cvCIHDQLlbt] > LuD6xGbqs[iKJuWq]) {
                MGWdh2o563M = LuD6xGbqs[cvCIHDQLlbt];
                LuD6xGbqs[cvCIHDQLlbt] = LuD6xGbqs[iKJuWq];
                LuD6xGbqs[iKJuWq] = MGWdh2o563M;
            }
            iKJuWq = iKJuWq + 1;
        }
    }
}

