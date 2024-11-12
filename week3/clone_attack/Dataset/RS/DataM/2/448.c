int n;

struct   student {
    char MySsi1Ze47M [(994 - 894)];
    int hMxfoIjsb5RN;
    struct   student *next;
};
struct   student *InV9AhzXGsSF (void ) {
    struct   student *JyVqQluOvj;
    struct   student *p1, *p2;
    int YptDPiuhsHR;
    p1 = p2 = (struct   student *) malloc (LEN);
    JyVqQluOvj = p1;
    {
        YptDPiuhsHR = 636 - 636;
        while (n > YptDPiuhsHR) {
            YptDPiuhsHR = YptDPiuhsHR +1;
            p1 = (struct   student *) malloc (LEN);
            p2->next = p1;
            p2 = p1;
            scanf ("%d %s", &p1->hMxfoIjsb5RN, p1->MySsi1Ze47M);
        };
    }
    p2->next = NULL;
    return (JyVqQluOvj);
}

void  list (struct   student *JyVqQluOvj) {
    char IQ6BJNd [(905 - 805)];
    int YptDPiuhsHR, IZkPXRgnb0, t, QpNJ6qZ [(117 - 17)] = {(607 - 607)}, cmruDg6RPAl [(166 - 66)];
    struct   student *p1, *p2, *p3, *Z1nY2udC0;
    p1 = JyVqQluOvj->next;
    {
        YptDPiuhsHR = 841 - 841;
        while (YptDPiuhsHR < n) {
            YptDPiuhsHR = YptDPiuhsHR +1;
            strcpy (IQ6BJNd, p1->MySsi1Ze47M);
            p1 = p1->next;
            {
                IZkPXRgnb0 = 731 - 731;
                while (IZkPXRgnb0 < strlen (IQ6BJNd)) {
                    if (IQ6BJNd[IZkPXRgnb0] >= 'A' && IQ6BJNd[IZkPXRgnb0] <= 'Z') {
                        QpNJ6qZ[IQ6BJNd[IZkPXRgnb0] - (857 - 792)]++;
                    }
                    IZkPXRgnb0++;
                };
            };
        };
    }
    p1 = JyVqQluOvj->next;
    {
        YptDPiuhsHR = 460 - 460;
        while ((421 - 395) > YptDPiuhsHR) {
            cmruDg6RPAl[YptDPiuhsHR] = QpNJ6qZ[YptDPiuhsHR];
            YptDPiuhsHR++;
        };
    }
    {
        YptDPiuhsHR = 122 - 122;
        while ((733 - 707) - (195 - 194) > YptDPiuhsHR) {
            {
                IZkPXRgnb0 = 886 - 886;
                while (IZkPXRgnb0 < (540 - 514) - (637 - 636) - YptDPiuhsHR) {
                    if (QpNJ6qZ[IZkPXRgnb0 +(551 - 550)] > QpNJ6qZ[IZkPXRgnb0]) {
                        t = QpNJ6qZ[IZkPXRgnb0];
                        QpNJ6qZ[IZkPXRgnb0] = QpNJ6qZ[IZkPXRgnb0 +(186 - 185)];
                        QpNJ6qZ[IZkPXRgnb0 +(1001 - 1000)] = t;
                    }
                    IZkPXRgnb0++;
                };
            }
            YptDPiuhsHR++;
        };
    }
    {
        YptDPiuhsHR = 908 - 908;
        while (YptDPiuhsHR < (111 - 85)) {
            if (cmruDg6RPAl[YptDPiuhsHR] == QpNJ6qZ[(708 - 708)]) {
                t = YptDPiuhsHR;
                printf ("%c\n%d\n", YptDPiuhsHR +(544 - 479), QpNJ6qZ[(614 - 614)]);
            }
            YptDPiuhsHR++;
        };
    }
    {
        YptDPiuhsHR = 614 - 614;
        while (YptDPiuhsHR < n) {
            YptDPiuhsHR++;
            strcpy (IQ6BJNd, p1->MySsi1Ze47M);
            {
                IZkPXRgnb0 = 309 - 309;
                while (IZkPXRgnb0 < strlen (IQ6BJNd)) {
                    if (IQ6BJNd[IZkPXRgnb0] == t + (578 - 513)) {
                        printf ("%d\n", p1->hMxfoIjsb5RN);
                    }
                    IZkPXRgnb0++;
                };
            }
            p1 = p1->next;
        };
    };
}

int main () {
    struct   student *D84EwjasSRhn;
    list (D84EwjasSRhn);
    D84EwjasSRhn = InV9AhzXGsSF ();
    scanf ("%d", &n);
}

