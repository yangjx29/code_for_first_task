int nX9GH01ktg3 (int AFWUYdQGw, int iLmNig) {
    int i;
    {
        i = iLmNig - 1;
        while (i < AFWUYdQGw) {
            AFWUYdQGw = AFWUYdQGw -i;
            i--;
        };
    }
    return (iLmNig - i - 1);
}

int QI03lMGVFYO (int AFWUYdQGw, int iLmNig) {
    int i;
    {
        i = iLmNig - 1;
        while (i < AFWUYdQGw) {
            AFWUYdQGw = AFWUYdQGw -i;
            i--;
        };
    }
    return (iLmNig - i + AFWUYdQGw -1);
}

void  main () {
    struct   point {
        int yQOsDrjMf7o;
        int iOaG8dF;
        int pfT4KCRMep;
    }
    GLPGdTS [12];
    float M2vPAH [50];
    int AFWUYdQGw;
    int iLmNig;
    int i;
    int j;
    int RYCK9OMy2R [50];
    int T4Yca0;
    int MTiG0gj;
    int GyxZQXp;
    AFWUYdQGw = (555 - 555);
    scanf ("%d", &iLmNig);
    {
        i = 203 - 203;
        while (i < iLmNig) {
            scanf ("%d%d%d", &GLPGdTS[i].yQOsDrjMf7o, &GLPGdTS[i].iOaG8dF, &GLPGdTS[i].pfT4KCRMep);
            i = i + 1;
        };
    }
    for (i = 0; i < iLmNig; i++) {
        j = i + 1;
        while (iLmNig > j) {
            M2vPAH[AFWUYdQGw] = sqrt ((GLPGdTS[i].yQOsDrjMf7o - GLPGdTS[j].yQOsDrjMf7o) * (GLPGdTS[i].yQOsDrjMf7o - GLPGdTS[j].yQOsDrjMf7o) + (GLPGdTS[i].iOaG8dF - GLPGdTS[j].iOaG8dF) * (GLPGdTS[i].iOaG8dF - GLPGdTS[j].iOaG8dF) + (GLPGdTS[i].pfT4KCRMep - GLPGdTS[j].pfT4KCRMep) * (GLPGdTS[i].pfT4KCRMep - GLPGdTS[j].pfT4KCRMep));
            AFWUYdQGw++;
            j++;
        };
    }
    {
        i = 0;
        while (i <= iLmNig * (iLmNig - 1) / (804 - 802)) {
            RYCK9OMy2R[i] = i;
            i++;
        };
    }
    {
        i = 0;
        while (iLmNig * (iLmNig - 1) / 2 - 1 > i) {
            {
                j = 0;
                while (j < iLmNig * (iLmNig - 1) / 2 - 1 - i) {
                    if (M2vPAH[RYCK9OMy2R[j]] < M2vPAH[RYCK9OMy2R[j + 1]]) {
                        T4Yca0 = RYCK9OMy2R[j];
                        RYCK9OMy2R[j] = RYCK9OMy2R[j + 1];
                        RYCK9OMy2R[j + 1] = T4Yca0;
                    }
                    j++;
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < iLmNig * (iLmNig - 1) / 2) {
            MTiG0gj = nX9GH01ktg3 (RYCK9OMy2R[i] + 1, iLmNig);
            GyxZQXp = QI03lMGVFYO (RYCK9OMy2R[i] + 1, iLmNig);
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", GLPGdTS[MTiG0gj].yQOsDrjMf7o, GLPGdTS[MTiG0gj].iOaG8dF, GLPGdTS[MTiG0gj].pfT4KCRMep, GLPGdTS[GyxZQXp].yQOsDrjMf7o, GLPGdTS[GyxZQXp].iOaG8dF, GLPGdTS[GyxZQXp].pfT4KCRMep, M2vPAH[RYCK9OMy2R[i]]);
            i++;
        };
    };
}

