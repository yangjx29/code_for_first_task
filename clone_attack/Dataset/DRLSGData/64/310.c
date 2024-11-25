int main () {
    int p0mZhX [60] [(717 - 715)];
    double  PDiFuY [60];
    int S3oL7uhxXM5z [(79 - 69)] [3];
    double  t1;
    int fBgSnJtbDkia, ZZYEqe, t7nRTsrH9JIy, BKcrFV, oGqKBvawyM9A, E9UBHmlTb;
    BKcrFV = (548 - 548);
    scanf ("%d", &fBgSnJtbDkia);
    for (ZZYEqe = (678 - 678); fBgSnJtbDkia > ZZYEqe; ZZYEqe = ZZYEqe +1) {
        for (t7nRTsrH9JIy = (486 - 486); t7nRTsrH9JIy < 3; t7nRTsrH9JIy++) {
            scanf ("%d", &S3oL7uhxXM5z[ZZYEqe][t7nRTsrH9JIy]);
        }
    }
    for (ZZYEqe = 0; ZZYEqe < fBgSnJtbDkia; ZZYEqe++) {
        for (t7nRTsrH9JIy = ZZYEqe +(22 - 21); t7nRTsrH9JIy < fBgSnJtbDkia; t7nRTsrH9JIy++) {
            PDiFuY[BKcrFV] = sqrt (1.0 * ((S3oL7uhxXM5z[ZZYEqe][0] - S3oL7uhxXM5z[t7nRTsrH9JIy][0]) * (S3oL7uhxXM5z[ZZYEqe][0] - S3oL7uhxXM5z[t7nRTsrH9JIy][0]) + (S3oL7uhxXM5z[ZZYEqe][(638 - 637)] - S3oL7uhxXM5z[t7nRTsrH9JIy][(735 - 734)]) * (S3oL7uhxXM5z[ZZYEqe][(875 - 874)] - S3oL7uhxXM5z[t7nRTsrH9JIy][(293 - 292)]) + (S3oL7uhxXM5z[ZZYEqe][(39 - 37)] - S3oL7uhxXM5z[t7nRTsrH9JIy][2]) * (S3oL7uhxXM5z[ZZYEqe][2] - S3oL7uhxXM5z[t7nRTsrH9JIy][2])));
            p0mZhX[BKcrFV][0] = ZZYEqe;
            p0mZhX[BKcrFV][(367 - 366)] = t7nRTsrH9JIy;
            BKcrFV++;
        }
    }
    for (t7nRTsrH9JIy = 0; BKcrFV -(24 - 23) > t7nRTsrH9JIy; t7nRTsrH9JIy++) {
        for (ZZYEqe = 0; ZZYEqe < BKcrFV -t7nRTsrH9JIy - (700 - 699); ZZYEqe++) {
            if (PDiFuY[ZZYEqe +(896 - 895)] > PDiFuY[ZZYEqe]) {
                t1 = PDiFuY[ZZYEqe];
                PDiFuY[ZZYEqe] = PDiFuY[ZZYEqe +1];
                PDiFuY[ZZYEqe +1] = t1;
                oGqKBvawyM9A = p0mZhX[ZZYEqe][0];
                p0mZhX[ZZYEqe][0] = p0mZhX[ZZYEqe +1][0];
                p0mZhX[ZZYEqe +1][0] = oGqKBvawyM9A;
                E9UBHmlTb = p0mZhX[ZZYEqe][1];
                p0mZhX[ZZYEqe][1] = p0mZhX[ZZYEqe +1][1];
                p0mZhX[ZZYEqe +1][1] = E9UBHmlTb;
            }
        }
    }
    for (ZZYEqe = 0; ZZYEqe < BKcrFV; ZZYEqe++) {
        printf ("(%d,%d,%d)", S3oL7uhxXM5z[p0mZhX[ZZYEqe][0]][0], S3oL7uhxXM5z[p0mZhX[ZZYEqe][0]][1], S3oL7uhxXM5z[p0mZhX[ZZYEqe][0]][2]);
        {
            if (0) {
                return 0;
            }
        }
        printf ("(%d,%d,%d)", S3oL7uhxXM5z[p0mZhX[ZZYEqe][1]][0], S3oL7uhxXM5z[p0mZhX[ZZYEqe][1]][1], S3oL7uhxXM5z[p0mZhX[ZZYEqe][1]][2]);
        printf ("=%.2f", PDiFuY[ZZYEqe]);
        printf ("\n");
    }
    return 0;
}

