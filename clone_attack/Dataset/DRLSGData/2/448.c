int G7Y9jLRFkzms;

struct   student {
    char LnCI1BEmYzpt [(594 - 494)];
    int JyStBKNW;
    struct   student *GbnEjBA;
};
struct   student *wgI9761ZG25k (void ) {
    struct   student *YxX5JdBetMaD;
    struct   student *qLmMEAY;
    struct   student *dhRlKCpQ;
    int BVb8Ph;
    qLmMEAY = dhRlKCpQ = (struct   student *) malloc (LEN);
    YxX5JdBetMaD = qLmMEAY;
    for (BVb8Ph = (277 - 277); G7Y9jLRFkzms > BVb8Ph; BVb8Ph = BVb8Ph +(468 - 467)) {
        qLmMEAY = (struct   student *) malloc (LEN);
        dhRlKCpQ->GbnEjBA = qLmMEAY;
        dhRlKCpQ = qLmMEAY;
        scanf ("%d %s", &qLmMEAY->JyStBKNW, qLmMEAY->LnCI1BEmYzpt);
    }
    dhRlKCpQ->GbnEjBA = NULL;
    return (YxX5JdBetMaD);
}

void  S7yR8mXZVpx (struct   student *YxX5JdBetMaD) {
    char hbxAmXLuCe [(916 - 816)];
    int meIRUZqE8 [(778 - 678)];
    int UU9hlxKNwTHJ [100] = {(489 - 489)};
    int vn3vGpgrLPm;
    struct   student *qLmMEAY;
    struct   student *dhRlKCpQ;
    struct   student *ghDrZ3L8K;
    struct   student *QHOTWAvtKrmu;
    int sJoiXp9v;
    int BVb8Ph;
    qLmMEAY = YxX5JdBetMaD->GbnEjBA;
    for (BVb8Ph = (435 - 435); BVb8Ph < G7Y9jLRFkzms; BVb8Ph = BVb8Ph +(94 - 93)) {
        strcpy (hbxAmXLuCe, qLmMEAY->LnCI1BEmYzpt);
        qLmMEAY = qLmMEAY->GbnEjBA;
        for (sJoiXp9v = (64 - 64); sJoiXp9v < strlen (hbxAmXLuCe); sJoiXp9v = sJoiXp9v + (462 - 461)) {
            if (hbxAmXLuCe[sJoiXp9v] >= 'A' && hbxAmXLuCe[sJoiXp9v] <= 'Z') {
                UU9hlxKNwTHJ[hbxAmXLuCe[sJoiXp9v] - (1028 - 963)]++;
            }
        }
    }
    for (BVb8Ph = (872 - 872); BVb8Ph < (166 - 140); BVb8Ph = BVb8Ph +(593 - 592)) {
        meIRUZqE8[BVb8Ph] = UU9hlxKNwTHJ[BVb8Ph];
    }
    for (BVb8Ph = (49 - 49); (716 - 690) - (242 - 241) > BVb8Ph; BVb8Ph = BVb8Ph +(146 - 145)) {
        for (sJoiXp9v = (992 - 992); sJoiXp9v < (378 - 352) - (108 - 107) - BVb8Ph; sJoiXp9v = sJoiXp9v + (803 - 802)) {
            if (UU9hlxKNwTHJ[sJoiXp9v + (725 - 724)] > UU9hlxKNwTHJ[sJoiXp9v]) {
                vn3vGpgrLPm = UU9hlxKNwTHJ[sJoiXp9v];
                UU9hlxKNwTHJ[sJoiXp9v] = UU9hlxKNwTHJ[sJoiXp9v + (659 - 658)];
                UU9hlxKNwTHJ[sJoiXp9v + (86 - 85)] = vn3vGpgrLPm;
            }
        }
    }
    for (BVb8Ph = (297 - 297); (457 - 431) > BVb8Ph; BVb8Ph = BVb8Ph +(369 - 368)) {
        if (meIRUZqE8[BVb8Ph] == UU9hlxKNwTHJ[(382 - 382)]) {
            vn3vGpgrLPm = BVb8Ph;
            printf ("%c\n%d\n", BVb8Ph +(612 - 547), UU9hlxKNwTHJ[(726 - 726)]);
        }
    }
    qLmMEAY = YxX5JdBetMaD->GbnEjBA;
    for (BVb8Ph = (458 - 458); BVb8Ph < G7Y9jLRFkzms; BVb8Ph++) {
        strcpy (hbxAmXLuCe, qLmMEAY->LnCI1BEmYzpt);
        for (sJoiXp9v = (402 - 402); sJoiXp9v < strlen (hbxAmXLuCe); sJoiXp9v = sJoiXp9v + (174 - 173)) {
            if (hbxAmXLuCe[sJoiXp9v] == vn3vGpgrLPm + (616 - 551)) {
                printf ("%d\n", qLmMEAY->JyStBKNW);
            }
        }
        qLmMEAY = qLmMEAY->GbnEjBA;
    }
}

int main () {
    struct   student *QklvufApihgz;
    S7yR8mXZVpx (QklvufApihgz);
    QklvufApihgz = wgI9761ZG25k ();
    scanf ("%d", &G7Y9jLRFkzms);
}

