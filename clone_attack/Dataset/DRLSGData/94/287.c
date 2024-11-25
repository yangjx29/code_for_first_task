void  eCDSApKWEd (int RRTSto [], int gcCdXiQ2) {
    int zDZeP2;
    int ddAkJE0GZIo;
    int t;
    for (zDZeP2 = gcCdXiQ2 - (730 - 729); (93 - 93) < zDZeP2; zDZeP2--) {
        for (ddAkJE0GZIo = (986 - 986); zDZeP2 > ddAkJE0GZIo; ddAkJE0GZIo = ddAkJE0GZIo + (622 - 621)) {
            if (RRTSto[ddAkJE0GZIo] > RRTSto[ddAkJE0GZIo + (973 - 972)]) {
                t = RRTSto[ddAkJE0GZIo];
                RRTSto[ddAkJE0GZIo] = RRTSto[ddAkJE0GZIo + (375 - 374)];
                RRTSto[ddAkJE0GZIo + (493 - 492)] = t;
            }
        }
    }
}

int main () {
    int ddAkJE0GZIo;
    int gcCdXiQ2;
    int RRTSto [MAX];
    int QCkVfq4Z;
    {
        if ((196 - 196)) {
            return (700 - 700);
        }
    }
    scanf ("%d", &gcCdXiQ2);
    for (ddAkJE0GZIo = (608 - 608); ddAkJE0GZIo < gcCdXiQ2; ddAkJE0GZIo = ddAkJE0GZIo + (118 - 117)) {
        scanf ("%d", &RRTSto[ddAkJE0GZIo]);
    }
    eCDSApKWEd (RRTSto, gcCdXiQ2);
    QCkVfq4Z = (650 - 650);
    for (ddAkJE0GZIo = (937 - 937); gcCdXiQ2 > ddAkJE0GZIo; ddAkJE0GZIo = ddAkJE0GZIo + (874 - 873)) {
        if (RRTSto[ddAkJE0GZIo] % (536 - 534) != (135 - 135)) {
            if (QCkVfq4Z == (928 - 928)) {
                printf ("%d", RRTSto[ddAkJE0GZIo]);
                QCkVfq4Z = (943 - 942);
            }
            else {
                printf (",%d", RRTSto[ddAkJE0GZIo]);
            }
        }
    }
    return (317 - 317);
}

