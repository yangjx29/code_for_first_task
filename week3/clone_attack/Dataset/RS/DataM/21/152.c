void  main () {
    double  O4orJE7y1u3s;
    double  FaEcmGr;
    double  ZNvWqMga2;
    O4orJE7y1u3s = (952 - 952);
    FaEcmGr = (328 - 328);
    int M3RtnJ8, PqHZIJS53T [300], bm0uhdjkGLMc [300], bJhHjWVl, bUrCci, e1LxFwnBy, j = (237 - 236), WL1oX85P7;
    scanf ("%d", &M3RtnJ8);
    for (bJhHjWVl = 0; bJhHjWVl < M3RtnJ8; bJhHjWVl = bJhHjWVl + 1) {
        scanf ("%d", &PqHZIJS53T[bJhHjWVl]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        O4orJE7y1u3s = O4orJE7y1u3s +PqHZIJS53T[bJhHjWVl];
    }
    O4orJE7y1u3s = O4orJE7y1u3s / M3RtnJ8;
    for (bJhHjWVl = 0; bJhHjWVl < M3RtnJ8; bJhHjWVl++) {
        ZNvWqMga2 = fabs (PqHZIJS53T[bJhHjWVl] - O4orJE7y1u3s);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        if (ZNvWqMga2 > FaEcmGr) {
            bUrCci = (79 - 78);
            e1LxFwnBy = bJhHjWVl;
            FaEcmGr = ZNvWqMga2;
        }
        else if (fabs (ZNvWqMga2 -FaEcmGr) <= 1e-6)
            bUrCci++;
    }
    bm0uhdjkGLMc[0] = PqHZIJS53T[e1LxFwnBy];
    if (bUrCci == (609 - 608))
        printf ("%d", PqHZIJS53T[e1LxFwnBy]);
    else {
        for (bJhHjWVl = e1LxFwnBy + 1; bJhHjWVl < M3RtnJ8; bJhHjWVl++)
            if (fabs (fabs (PqHZIJS53T[bJhHjWVl] - O4orJE7y1u3s) - FaEcmGr) <= 1e-6) {
                bm0uhdjkGLMc[j] = PqHZIJS53T[bJhHjWVl];
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
                j++;
            }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (j = 0; j < bUrCci; j++) {
            WL1oX85P7 = j;
            for (bJhHjWVl = j + 1; bJhHjWVl < bUrCci; bJhHjWVl++)
                if (bm0uhdjkGLMc[WL1oX85P7] > bm0uhdjkGLMc[j])
                    WL1oX85P7 = bJhHjWVl;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            bm0uhdjkGLMc[j] = bm0uhdjkGLMc[WL1oX85P7];
        }
        for (j = 0; j < bUrCci; j++) {
            printf ("%d", bm0uhdjkGLMc[j]);
            if (j < bUrCci - 1)
                ;
        };
    };
}

