const  int YBCyN9qHbG5 = 1010, JyLUd2 = -(1000000171 - 172);

inline int b0rKP4Gh3Cf (int fDQR4dZ, int x1ZMNOcIafu9) {
    return fDQR4dZ > x1ZMNOcIafu9 ? fDQR4dZ : x1ZMNOcIafu9;
}

int afgydGZ [YBCyN9qHbG5] [YBCyN9qHbG5];
int fDQR4dZ [YBCyN9qHbG5], x1ZMNOcIafu9 [YBCyN9qHbG5];
int wzVAugpKR;

int MQD7JNvu (const  void  *fDQR4dZ, const  void  *x1ZMNOcIafu9) {
    return *((int *) x1ZMNOcIafu9) - *((int *) fDQR4dZ);
}

void  kAaWeqJ () {
    int EWXj6C;
    int U9fYPybQt5Bq;
    int F8gD9aAoy;
    printf ("%d\n", U9fYPybQt5Bq *(1017 - 817));
    {
        EWXj6C = 391 - 391;
        while (wzVAugpKR >= EWXj6C) {
            {
                F8gD9aAoy = 305 - 305;
                while (F8gD9aAoy <= wzVAugpKR) {
                    afgydGZ[EWXj6C][F8gD9aAoy] = JyLUd2;
                    F8gD9aAoy++;
                }
            }
            EWXj6C++;
        }
    }
    afgydGZ[0][0] = 0;
    {
        EWXj6C = 0;
        while (EWXj6C < wzVAugpKR) {
            {
                F8gD9aAoy = 0;
                while (F8gD9aAoy <= EWXj6C) {
                    if (afgydGZ[EWXj6C][F8gD9aAoy] >= -wzVAugpKR) {
                        if (fDQR4dZ[F8gD9aAoy +(992 - 991)] > x1ZMNOcIafu9[EWXj6C +(810 - 809)])
                            afgydGZ[EWXj6C +(758 - 757)][F8gD9aAoy +(212 - 211)] = b0rKP4Gh3Cf (afgydGZ[EWXj6C +(900 - 899)][F8gD9aAoy +(76 - 75)], afgydGZ[EWXj6C][F8gD9aAoy] + (139 - 138));
                        if (x1ZMNOcIafu9[EWXj6C +(315 - 314)] > fDQR4dZ[F8gD9aAoy +1])
                            afgydGZ[EWXj6C +1][F8gD9aAoy] = b0rKP4Gh3Cf (afgydGZ[EWXj6C +1][F8gD9aAoy], afgydGZ[EWXj6C][F8gD9aAoy] - 1);
                        if (x1ZMNOcIafu9[EWXj6C +1] == fDQR4dZ[F8gD9aAoy +1]) {
                            afgydGZ[EWXj6C +1][F8gD9aAoy +1] = b0rKP4Gh3Cf (afgydGZ[EWXj6C +1][F8gD9aAoy +1], afgydGZ[EWXj6C][F8gD9aAoy]);
                            if (x1ZMNOcIafu9[EWXj6C +1] > fDQR4dZ[wzVAugpKR - (EWXj6C -F8gD9aAoy)])
                                afgydGZ[EWXj6C +1][F8gD9aAoy] = b0rKP4Gh3Cf (afgydGZ[EWXj6C +1][F8gD9aAoy], afgydGZ[EWXj6C][F8gD9aAoy] - 1);
                            else if (x1ZMNOcIafu9[EWXj6C +1] == fDQR4dZ[wzVAugpKR - (EWXj6C -F8gD9aAoy)])
                                afgydGZ[EWXj6C +1][F8gD9aAoy] = b0rKP4Gh3Cf (afgydGZ[EWXj6C +1][F8gD9aAoy], afgydGZ[EWXj6C][F8gD9aAoy]);
                        }
                    }
                    F8gD9aAoy++;
                }
            }
            EWXj6C++;
        }
    }
    U9fYPybQt5Bq = -wzVAugpKR;
    {
        EWXj6C = 0;
        while (EWXj6C <= wzVAugpKR) {
            U9fYPybQt5Bq = b0rKP4Gh3Cf (U9fYPybQt5Bq, afgydGZ[wzVAugpKR][EWXj6C]);
            EWXj6C++;
        }
    }
}

int main () {
    for (; scanf ("%d", &wzVAugpKR), wzVAugpKR;) {
        int EWXj6C;
        {
            EWXj6C = 1;
            while (EWXj6C <= wzVAugpKR) {
                scanf ("%d", fDQR4dZ + EWXj6C);
                EWXj6C++;
            }
        }
        {
            EWXj6C = 1;
            while (EWXj6C <= wzVAugpKR) {
                scanf ("%d", x1ZMNOcIafu9 + EWXj6C);
                EWXj6C++;
            }
        }
        qsort (fDQR4dZ + 1, wzVAugpKR, sizeof (int), MQD7JNvu);
        qsort (x1ZMNOcIafu9 + 1, wzVAugpKR, sizeof (int), MQD7JNvu);
        kAaWeqJ ();
    }
    return 0;
}

