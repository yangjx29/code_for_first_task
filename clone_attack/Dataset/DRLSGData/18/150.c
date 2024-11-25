int main () {
    int ovrOyGLDVYl [101] [101] = {0};
    int SMmBgCzYIl, ssQTBM, M5mhViS, Mo4xkzMIr0vc, eZ3xeVtTlME, iA8VD3XvLOis, zcBu8rjd;
    cin >> SMmBgCzYIl;
    zcBu8rjd = SMmBgCzYIl;
    while (zcBu8rjd) {
        {
            ssQTBM = 561 - 560;
            for (; SMmBgCzYIl >= ssQTBM;) {
                {
                    M5mhViS = 313 - 312;
                    for (; SMmBgCzYIl >= M5mhViS;) {
                        cin >> ovrOyGLDVYl[ssQTBM][M5mhViS];
                        M5mhViS++;
                    }
                }
                ssQTBM++;
            }
        }
        iA8VD3XvLOis = 0;
        zcBu8rjd--;
        {
            Mo4xkzMIr0vc = SMmBgCzYIl;
            for (; 1 < Mo4xkzMIr0vc;) {
                for (ssQTBM = 1; Mo4xkzMIr0vc >= ssQTBM; ssQTBM++) {
                    eZ3xeVtTlME = 98000;
                    for (M5mhViS = 1; Mo4xkzMIr0vc >= M5mhViS; M5mhViS++)
                        if (eZ3xeVtTlME > ovrOyGLDVYl[ssQTBM][M5mhViS])
                            eZ3xeVtTlME = ovrOyGLDVYl[ssQTBM][M5mhViS];
                    {
                        M5mhViS = 1;
                        for (; Mo4xkzMIr0vc >= M5mhViS;) {
                            ovrOyGLDVYl[ssQTBM][M5mhViS] = ovrOyGLDVYl[ssQTBM][M5mhViS] - eZ3xeVtTlME;
                            M5mhViS++;
                        }
                    }
                }
                {
                    ssQTBM = 1;
                    for (; Mo4xkzMIr0vc >= ssQTBM;) {
                        eZ3xeVtTlME = 98098;
                        {
                            M5mhViS = 1;
                            for (; M5mhViS <= Mo4xkzMIr0vc;) {
                                if (ovrOyGLDVYl[M5mhViS][ssQTBM] < eZ3xeVtTlME)
                                    eZ3xeVtTlME = ovrOyGLDVYl[M5mhViS][ssQTBM];
                                M5mhViS++;
                            }
                        }
                        for (M5mhViS = 1; M5mhViS <= Mo4xkzMIr0vc; M5mhViS++)
                            ovrOyGLDVYl[M5mhViS][ssQTBM] = ovrOyGLDVYl[M5mhViS][ssQTBM] - eZ3xeVtTlME;
                        ssQTBM++;
                    }
                }
                iA8VD3XvLOis = iA8VD3XvLOis + ovrOyGLDVYl[(348 - 346)][2];
                if (Mo4xkzMIr0vc >= (939 - 936)) {
                    {
                        ssQTBM = 859 - 856;
                        for (; ssQTBM <= Mo4xkzMIr0vc;) {
                            {
                                M5mhViS = 1;
                                for (; M5mhViS <= Mo4xkzMIr0vc;) {
                                    ovrOyGLDVYl[ssQTBM - 1][M5mhViS] = ovrOyGLDVYl[ssQTBM][M5mhViS];
                                    M5mhViS++;
                                }
                            }
                            ssQTBM++;
                        }
                    }
                    {
                        ssQTBM = 3;
                        for (; ssQTBM <= Mo4xkzMIr0vc;) {
                            for (M5mhViS = 1; M5mhViS <= Mo4xkzMIr0vc; M5mhViS++)
                                ovrOyGLDVYl[M5mhViS][ssQTBM - 1] = ovrOyGLDVYl[M5mhViS][ssQTBM];
                            ssQTBM++;
                        }
                    }
                }
                Mo4xkzMIr0vc--;
            }
        }
        cout << iA8VD3XvLOis << endl;
    }
    return 0;
}

