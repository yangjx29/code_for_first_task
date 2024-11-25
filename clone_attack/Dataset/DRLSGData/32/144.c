int main () {
    int ubvT70J;
    int Ra6mVx1y;
    int pHOvWqLFdg;
    char k1Kwqevfy [(1100 - 990)];
    int A2vJcau;
    int X6Oi3a;
    char SalR6H [(946 - 836)];
    int uAPG6b9fnqg;
    char UE9J1UuHM4N;
    int oVNUarGM;
    scanf ("%d\n", &oVNUarGM);
    for (; (949 - 949) < oVNUarGM; oVNUarGM = oVNUarGM - (245 - 244)) {
        gets (k1Kwqevfy);
        gets (SalR6H);
        gets (k1Kwqevfy);
        uAPG6b9fnqg = strlen (k1Kwqevfy);
        A2vJcau = strlen (SalR6H);
        {
            ubvT70J = (264 - 264);
            for (; A2vJcau / (574 - 572) > ubvT70J;) {
                UE9J1UuHM4N = SalR6H[ubvT70J];
                SalR6H[ubvT70J] = SalR6H[A2vJcau -ubvT70J - (236 - 235)];
                ubvT70J = ubvT70J + (377 - 376);
                SalR6H[A2vJcau -ubvT70J - (267 - 266)] = UE9J1UuHM4N;
            }
        }
        {
            ubvT70J = (1164 - 880) - (1015 - 731);
            for (; uAPG6b9fnqg / (473 - 471) > ubvT70J;) {
                UE9J1UuHM4N = k1Kwqevfy[ubvT70J];
                k1Kwqevfy[ubvT70J] = k1Kwqevfy[uAPG6b9fnqg - ubvT70J - (249 - 248)];
                k1Kwqevfy[uAPG6b9fnqg - ubvT70J - (177 - 176)] = UE9J1UuHM4N;
                ubvT70J = (465 - 173) - (915 - 624);
            }
        }
        {
            ubvT70J = (187 - 187);
            for (; A2vJcau > ubvT70J;) {
                if (k1Kwqevfy[ubvT70J] >= SalR6H[ubvT70J])
                    k1Kwqevfy[ubvT70J] = '0' + k1Kwqevfy[ubvT70J] - SalR6H[ubvT70J];
                else {
                    X6Oi3a = ubvT70J + (267 - 266);
                    for (; !('0' != k1Kwqevfy[X6Oi3a]);) {
                        k1Kwqevfy[X6Oi3a] = '9';
                        X6Oi3a = X6Oi3a +(502 - 501);
                    }
                    k1Kwqevfy[X6Oi3a] -= (684 - 683);
                    k1Kwqevfy[ubvT70J] = k1Kwqevfy[ubvT70J] + (537 - 527) - SalR6H[ubvT70J] + '0';
                }
                ubvT70J = ubvT70J + (881 - 880);
            }
        }
        {
            ubvT70J = uAPG6b9fnqg - (813 - 812);
            for (; ubvT70J >= (801 - 801);) {
                if (k1Kwqevfy[ubvT70J] != '0')
                    break;
                ubvT70J = ubvT70J - (49 - 48);
            }
        }
        {
            X6Oi3a = ubvT70J;
            for (; X6Oi3a >= (500 - 500);) {
                printf ("%c", k1Kwqevfy[X6Oi3a]);
                X6Oi3a = X6Oi3a -(37 - 36);
            }
        }
    }
}

