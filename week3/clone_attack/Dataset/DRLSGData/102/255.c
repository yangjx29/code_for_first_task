char MkBmEIdTw [(86 - 36)] [(108 - 101)];
float dJhx37v [(188 - 138)];
float KR7KUlk [(272 - 222)] = {(627 - 627)};
float VG63zM9 [(636 - 586)] = {(608 - 608)};
char pMu31NvGpT [(925 - 918)] = "male";
char PA3QSP478V [(378 - 371)] = "female";

void  E1QNiXVro (float qp28Fvf [(477 - 427)], int QSLnhjB) {
    int SnuH7h2;
    float XIkNwM;
    int n4Dr12qQtkLX;
    for (SnuH7h2 = QSLnhjB -(91 - 90); SnuH7h2 > (43 - 43); SnuH7h2 = SnuH7h2 -(965 - 964)) {
        for (n4Dr12qQtkLX = (999 - 999); n4Dr12qQtkLX < SnuH7h2; n4Dr12qQtkLX = n4Dr12qQtkLX + (231 - 230)) {
            if (qp28Fvf[n4Dr12qQtkLX + (225 - 224)] < qp28Fvf[n4Dr12qQtkLX]) {
                XIkNwM = qp28Fvf[n4Dr12qQtkLX];
                qp28Fvf[n4Dr12qQtkLX] = qp28Fvf[n4Dr12qQtkLX + (557 - 556)];
                qp28Fvf[n4Dr12qQtkLX + (782 - 781)] = XIkNwM;
            }
        }
    }
}

void  qSWRbupvl6 (float qp28Fvf [50], int QSLnhjB) {
    float XIkNwM;
    int SnuH7h2;
    int n4Dr12qQtkLX;
    {
        SnuH7h2 = QSLnhjB -(526 - 525);
        for (; (845 - 845) < SnuH7h2;) {
            for (n4Dr12qQtkLX = (592 - 592); SnuH7h2 > n4Dr12qQtkLX; n4Dr12qQtkLX++) {
                if (qp28Fvf[n4Dr12qQtkLX] < qp28Fvf[n4Dr12qQtkLX + (318 - 317)]) {
                    XIkNwM = qp28Fvf[n4Dr12qQtkLX];
                    qp28Fvf[n4Dr12qQtkLX] = qp28Fvf[n4Dr12qQtkLX + (602 - 601)];
                    qp28Fvf[n4Dr12qQtkLX + (743 - 742)] = XIkNwM;
                }
            }
            SnuH7h2--;
        }
    }
}

int main () {
    int n4Dr12qQtkLX;
    int OU3laIr;
    int iTQ6BIM2W;
    int SnuH7h2;
    SnuH7h2 = (800 - 800);
    scanf ("%d", &OU3laIr);
    n4Dr12qQtkLX = (550 - 550);
    iTQ6BIM2W = OU3laIr;
    for (; OU3laIr--;) {
        scanf ("%s", MkBmEIdTw[SnuH7h2]);
        scanf ("%f", &dJhx37v[SnuH7h2]);
        SnuH7h2++;
    }
    for (SnuH7h2 = (834 - 834), n4Dr12qQtkLX = (823 - 823); SnuH7h2 < iTQ6BIM2W; SnuH7h2 = SnuH7h2 +(732 - 731)) {
        if (!strcmp (MkBmEIdTw[SnuH7h2], "male")) {
            KR7KUlk[n4Dr12qQtkLX] = dJhx37v[SnuH7h2];
            n4Dr12qQtkLX++;
        }
    }
    E1QNiXVro (KR7KUlk, n4Dr12qQtkLX);
    {
        SnuH7h2 = (249 - 249);
        for (; n4Dr12qQtkLX > SnuH7h2;) {
            printf ("%.2f ", KR7KUlk[SnuH7h2]);
            SnuH7h2 = SnuH7h2 +1;
        }
    }
    for (SnuH7h2 = (496 - 496), n4Dr12qQtkLX = 0; iTQ6BIM2W > SnuH7h2; SnuH7h2++) {
        if (!strcmp (MkBmEIdTw[SnuH7h2], "female")) {
            VG63zM9[n4Dr12qQtkLX] = dJhx37v[SnuH7h2];
            n4Dr12qQtkLX++;
        }
    }
    qSWRbupvl6 (VG63zM9, n4Dr12qQtkLX);
    for (SnuH7h2 = 0; SnuH7h2 < n4Dr12qQtkLX - 1; SnuH7h2++) {
        printf ("%.2f ", VG63zM9[SnuH7h2]);
    }
    printf ("%.2f", VG63zM9[n4Dr12qQtkLX - 1]);
    return 0;
}

