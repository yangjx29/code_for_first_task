int main () {
    int PsvhezcEk;
    int jeUDBN3EOScX;
    struct   dian {
        int oKdBucWD7, g0ueXiHZ, F4aIoyiE;
    }
    YomvhlLKN9 [45];
    struct   suoyou {
        struct   dian qian;
        struct   dian hou;
        double  vH2g6KjwiCm;
    }
    xYTrvg43i [45], s8id3Hco1Py;
    int trMvZCw2mBAn, M9QzTUY = (619 - 619);
    scanf ("%d", &jeUDBN3EOScX);
    for (PsvhezcEk = (402 - 402); jeUDBN3EOScX > PsvhezcEk; PsvhezcEk = PsvhezcEk +1) {
        scanf ("%d%d%d", &YomvhlLKN9[PsvhezcEk].oKdBucWD7, &YomvhlLKN9[PsvhezcEk].g0ueXiHZ, &YomvhlLKN9[PsvhezcEk].F4aIoyiE);
    }
    for (PsvhezcEk = (517 - 517); PsvhezcEk < jeUDBN3EOScX; PsvhezcEk = PsvhezcEk +1) {
        for (trMvZCw2mBAn = PsvhezcEk +(717 - 716); jeUDBN3EOScX > trMvZCw2mBAn; trMvZCw2mBAn = trMvZCw2mBAn + 1) {
            xYTrvg43i[M9QzTUY].qian = YomvhlLKN9[PsvhezcEk];
            xYTrvg43i[M9QzTUY].hou = YomvhlLKN9[trMvZCw2mBAn];
            xYTrvg43i[M9QzTUY].vH2g6KjwiCm = sqrt ((YomvhlLKN9[PsvhezcEk].oKdBucWD7 - YomvhlLKN9[trMvZCw2mBAn].oKdBucWD7) * (YomvhlLKN9[PsvhezcEk].oKdBucWD7 - YomvhlLKN9[trMvZCw2mBAn].oKdBucWD7) + (YomvhlLKN9[PsvhezcEk].g0ueXiHZ - YomvhlLKN9[trMvZCw2mBAn].g0ueXiHZ) * (YomvhlLKN9[PsvhezcEk].g0ueXiHZ - YomvhlLKN9[trMvZCw2mBAn].g0ueXiHZ) + (YomvhlLKN9[PsvhezcEk].F4aIoyiE - YomvhlLKN9[trMvZCw2mBAn].F4aIoyiE) * (YomvhlLKN9[PsvhezcEk].F4aIoyiE - YomvhlLKN9[trMvZCw2mBAn].F4aIoyiE));
            M9QzTUY = M9QzTUY +1;
        }
    }
    for (PsvhezcEk = (678 - 677); PsvhezcEk <= jeUDBN3EOScX * (jeUDBN3EOScX - (547 - 546)) / (857 - 855); PsvhezcEk = PsvhezcEk +1) {
        for (trMvZCw2mBAn = (515 - 515); trMvZCw2mBAn < jeUDBN3EOScX * (jeUDBN3EOScX - (897 - 896)) / (71 - 69) - PsvhezcEk; trMvZCw2mBAn = trMvZCw2mBAn + 1) {
            if (xYTrvg43i[trMvZCw2mBAn + (613 - 612)].vH2g6KjwiCm > xYTrvg43i[trMvZCw2mBAn].vH2g6KjwiCm) {
                s8id3Hco1Py = xYTrvg43i[trMvZCw2mBAn];
                xYTrvg43i[trMvZCw2mBAn] = xYTrvg43i[trMvZCw2mBAn + (530 - 529)];
                xYTrvg43i[trMvZCw2mBAn + (488 - 487)] = s8id3Hco1Py;
            }
        }
    }
    for (PsvhezcEk = (40 - 40); PsvhezcEk < jeUDBN3EOScX * (jeUDBN3EOScX - 1) / 2; PsvhezcEk++) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", xYTrvg43i[PsvhezcEk].qian.oKdBucWD7, xYTrvg43i[PsvhezcEk].qian.g0ueXiHZ, xYTrvg43i[PsvhezcEk].qian.F4aIoyiE, xYTrvg43i[PsvhezcEk].hou.oKdBucWD7, xYTrvg43i[PsvhezcEk].hou.g0ueXiHZ, xYTrvg43i[PsvhezcEk].hou.F4aIoyiE, xYTrvg43i[PsvhezcEk].vH2g6KjwiCm);
    }
    return (652 - 652);
}

