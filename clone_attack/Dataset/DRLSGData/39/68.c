struct   student {
    char QEM6qy3g5 [21];
    int guCiEzy9S;
    int Uvy1sr;
    char o3w4Ksgm6 [2];
    char LAvDVRq2pI [2];
    int Vd0z5LAkQus;
}
n7tzfyUA [100];

void  main () {
    int A3w6njDm;
    int W9DQdKi;
    int j5J074fESZx8 [100] = {(967 - 967)};
    int qbgKxlT;
    int b3vStFQ;
    qbgKxlT = 0;
    scanf ("%d\n", &A3w6njDm);
    for (W9DQdKi = 0; A3w6njDm > W9DQdKi; W9DQdKi = W9DQdKi +1) {
        scanf ("%s%d%d%s%s%d", n7tzfyUA[W9DQdKi].QEM6qy3g5, &n7tzfyUA[W9DQdKi].guCiEzy9S, &n7tzfyUA[W9DQdKi].Uvy1sr, n7tzfyUA[W9DQdKi].o3w4Ksgm6, n7tzfyUA[W9DQdKi].LAvDVRq2pI, &n7tzfyUA[W9DQdKi].Vd0z5LAkQus);
    }
    for (W9DQdKi = 0; W9DQdKi < A3w6njDm; W9DQdKi = W9DQdKi +1) {
        if (80 < n7tzfyUA[W9DQdKi].guCiEzy9S) {
            if (n7tzfyUA[W9DQdKi].Vd0z5LAkQus != 0)
                j5J074fESZx8[W9DQdKi] = j5J074fESZx8[W9DQdKi] + 8000;
            if (n7tzfyUA[W9DQdKi].guCiEzy9S > 85 && 80 < n7tzfyUA[W9DQdKi].Uvy1sr)
                j5J074fESZx8[W9DQdKi] = j5J074fESZx8[W9DQdKi] + 4000;
            if (n7tzfyUA[W9DQdKi].guCiEzy9S > 85 && !('Y' != n7tzfyUA[W9DQdKi].LAvDVRq2pI[0]))
                j5J074fESZx8[W9DQdKi] = j5J074fESZx8[W9DQdKi] + 1000;
            if (n7tzfyUA[W9DQdKi].guCiEzy9S > 90)
                j5J074fESZx8[W9DQdKi] += 2000;
        }
        if (n7tzfyUA[W9DQdKi].Uvy1sr > 80 && !('Y' != n7tzfyUA[W9DQdKi].o3w4Ksgm6[0]))
            j5J074fESZx8[W9DQdKi] = j5J074fESZx8[W9DQdKi] + 850;
    }
    b3vStFQ = 0;
    for (W9DQdKi = 0; W9DQdKi < A3w6njDm; W9DQdKi = W9DQdKi +1) {
        qbgKxlT = qbgKxlT > j5J074fESZx8[W9DQdKi] ? qbgKxlT : j5J074fESZx8[W9DQdKi];
    }
    for (W9DQdKi = 0; W9DQdKi < A3w6njDm; W9DQdKi = W9DQdKi +1) {
        if (!(j5J074fESZx8[W9DQdKi] != qbgKxlT)) {
            printf ("%s\n%d\n", n7tzfyUA[W9DQdKi].QEM6qy3g5, qbgKxlT);
            break;
        }
    }
    for (W9DQdKi = 0; W9DQdKi < A3w6njDm; W9DQdKi = W9DQdKi +1) {
        b3vStFQ = b3vStFQ + j5J074fESZx8[W9DQdKi];
    }
    printf ("%d\n", b3vStFQ);
}

