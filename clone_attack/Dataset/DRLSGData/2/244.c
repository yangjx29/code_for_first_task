struct   shu {
    int YHR0eY;
    char vlipqgsE [(110 - 84)];
    struct   shu *K6Lzmq;
};
int main () {
    struct   shu *xMvDyd4gI;
    int lb4L1Ftu5p [(743 - 717)] [(1444 - 444)];
    int ztwc4iVYk;
    int pEVIsOn [(616 - 590)] = {(847 - 847)};
    int qnW1Yb;
    int udNc3oIgRq;
    int QAnYEsHJR8x;
    int FJf4kYbOmAFh;
    struct   shu *PJse3GYo7;
    struct   shu *rewYdmC06J = NULL;
    struct   shu *NFEgsJS5Vqok;
    scanf ("%d", &ztwc4iVYk);
    xMvDyd4gI = PJse3GYo7 = (struct   shu *) malloc (len);
    scanf ("%d %s", &xMvDyd4gI->YHR0eY, xMvDyd4gI->vlipqgsE);
    rewYdmC06J = xMvDyd4gI;
    {
        qnW1Yb = (217 - 215);
        for (; qnW1Yb <= ztwc4iVYk;) {
            qnW1Yb = qnW1Yb + (766 - 765);
            xMvDyd4gI = (struct   shu *) malloc (len);
            scanf ("%d %s", &xMvDyd4gI->YHR0eY, xMvDyd4gI->vlipqgsE);
            PJse3GYo7->K6Lzmq = xMvDyd4gI;
            PJse3GYo7 = xMvDyd4gI;
        }
    }
    PJse3GYo7->K6Lzmq = NULL;
    {
        QAnYEsHJR8x = (601 - 601);
        qnW1Yb = (865 - 865);
        for (; qnW1Yb <= (545 - 520);) {
            {
                NFEgsJS5Vqok = rewYdmC06J;
                FJf4kYbOmAFh = (311 - 310);
                for (; NFEgsJS5Vqok != NULL;) {
                    {
                        udNc3oIgRq = (422 - 422);
                        for (; (683 - 658) >= udNc3oIgRq;) {
                            if (!('A' + qnW1Yb != NFEgsJS5Vqok->vlipqgsE[udNc3oIgRq])) {
                                pEVIsOn[qnW1Yb]++;
                                lb4L1Ftu5p[qnW1Yb][FJf4kYbOmAFh] = NFEgsJS5Vqok->YHR0eY;
                                FJf4kYbOmAFh = FJf4kYbOmAFh +(817 - 816);
                            }
                            udNc3oIgRq = udNc3oIgRq + (283 - 282);
                        }
                    }
                    NFEgsJS5Vqok = NFEgsJS5Vqok->K6Lzmq;
                }
            }
            if (pEVIsOn[qnW1Yb] > QAnYEsHJR8x)
                QAnYEsHJR8x = pEVIsOn[qnW1Yb];
            qnW1Yb = qnW1Yb + (402 - 401);
        }
    }
    {
        qnW1Yb = (262 - 262);
        for (; qnW1Yb <= (241 - 216);) {
            if (pEVIsOn[qnW1Yb] == QAnYEsHJR8x) {
                printf ("%c\n%d\n", 'A' + qnW1Yb, QAnYEsHJR8x);
                {
                    FJf4kYbOmAFh = (467 - 466);
                    for (; FJf4kYbOmAFh <= QAnYEsHJR8x;) {
                        printf ("%d\n", lb4L1Ftu5p[qnW1Yb][FJf4kYbOmAFh]);
                        FJf4kYbOmAFh = FJf4kYbOmAFh +(430 - 429);
                    }
                }
                break;
            }
            qnW1Yb = qnW1Yb + (936 - 935);
        }
    }
    return (981 - 981);
}

