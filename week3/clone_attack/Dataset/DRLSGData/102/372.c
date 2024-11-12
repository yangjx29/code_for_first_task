int main () {
    int APBXqi6RESJ;
    int HMFG1aCkeRSU;
    double  B2frbCS [(215 - 115)];
    int TL9ZWQ;
    int kUq8Hv;
    double  uIv8QRA0jh [(747 - 647)] = {(48 - 48)};
    int RSBMYfNjlwd;
    int KNnFa2;
    double  G1d7QbSUwIF;
    char s [(158 - 58)] [100];
    double  qnNvTXyod2f;
    int Gvk8jernqlYS;
    int tk35ivNMndq;
    int seU7WSYNh;
    double  lctiFJND;
    int Nh2ZfWxk8cq;
    double  RJOM4y0jx6 [100] = {(720 - 720)};
    RSBMYfNjlwd = (307 - 307);
    scanf ("%d", &kUq8Hv);
    for (APBXqi6RESJ = (943 - 943); APBXqi6RESJ < kUq8Hv; APBXqi6RESJ = APBXqi6RESJ +(999 - 998)) {
        scanf ("%s%lf", s[APBXqi6RESJ], &B2frbCS[APBXqi6RESJ]);
    }
    for (APBXqi6RESJ = (623 - 623); APBXqi6RESJ < kUq8Hv; APBXqi6RESJ = APBXqi6RESJ +(878 - 877)) {
        for (KNnFa2 = (421 - 421); KNnFa2 <= (310 - 309); KNnFa2 = KNnFa2 +(151 - 150)) {
            if (!('m' != s[APBXqi6RESJ][KNnFa2])) {
                RJOM4y0jx6[RSBMYfNjlwd] = B2frbCS[APBXqi6RESJ];
                RSBMYfNjlwd++;
            }
        }
    }
    for (Nh2ZfWxk8cq = (181 - 180); RSBMYfNjlwd >= Nh2ZfWxk8cq; Nh2ZfWxk8cq = Nh2ZfWxk8cq +(814 - 813)) {
        for (TL9ZWQ = (867 - 867); TL9ZWQ < RSBMYfNjlwd -Nh2ZfWxk8cq; TL9ZWQ = TL9ZWQ +(490 - 489)) {
            if (RJOM4y0jx6[TL9ZWQ] > RJOM4y0jx6[TL9ZWQ +(906 - 905)]) {
                qnNvTXyod2f = RJOM4y0jx6[TL9ZWQ];
                RJOM4y0jx6[TL9ZWQ] = RJOM4y0jx6[TL9ZWQ +(617 - 616)];
                RJOM4y0jx6[TL9ZWQ +(975 - 974)] = qnNvTXyod2f;
            }
        }
    }
    tk35ivNMndq = (675 - 675);
    for (APBXqi6RESJ = (762 - 762); kUq8Hv > APBXqi6RESJ; APBXqi6RESJ++) {
        for (KNnFa2 = 0; KNnFa2 <= (1001 - 1000); KNnFa2 = KNnFa2 +(887 - 886)) {
            if (!('f' != s[APBXqi6RESJ][KNnFa2])) {
                uIv8QRA0jh[tk35ivNMndq] = B2frbCS[APBXqi6RESJ];
                tk35ivNMndq = tk35ivNMndq + (873 - 872);
            }
        }
    }
    for (Gvk8jernqlYS = (22 - 21); Gvk8jernqlYS <= tk35ivNMndq; Gvk8jernqlYS++) {
        for (seU7WSYNh = 0; tk35ivNMndq - Gvk8jernqlYS > seU7WSYNh; seU7WSYNh = seU7WSYNh + (996 - 995)) {
            if (uIv8QRA0jh[seU7WSYNh + 1] > uIv8QRA0jh[seU7WSYNh]) {
                G1d7QbSUwIF = uIv8QRA0jh[seU7WSYNh];
                uIv8QRA0jh[seU7WSYNh] = uIv8QRA0jh[seU7WSYNh + 1];
                uIv8QRA0jh[seU7WSYNh + 1] = G1d7QbSUwIF;
            }
        }
    }
    for (KNnFa2 = 0; KNnFa2 < RSBMYfNjlwd; KNnFa2++) {
        printf ("%.2lf ", RJOM4y0jx6[KNnFa2]);
    }
    for (APBXqi6RESJ = 0; APBXqi6RESJ < tk35ivNMndq - 1; APBXqi6RESJ++) {
        printf ("%.2lf ", uIv8QRA0jh[APBXqi6RESJ]);
    }
    for (APBXqi6RESJ = 0; APBXqi6RESJ < tk35ivNMndq; APBXqi6RESJ++) {
        if (APBXqi6RESJ == tk35ivNMndq - 1) {
            printf ("%.2lf", uIv8QRA0jh[APBXqi6RESJ]);
        }
    }
    return 0;
}

