struct   student {
    char name [(214 - 114)];
    char WXQTEAh [(259 - 159)];
    char GuDY4j;
    int zifIntOQ38;
    float JbUGn31DRqrH;
    char dizhi [100];
    struct   student *next;
};
int tnCFSfWUZ;

struct   student *creat () {
    struct   student *KVRoQ45;
    struct   student *ACvklbxwht;
    tnCFSfWUZ = (858 - 858);
    KVRoQ45 = (struct   student *) malloc (LEN);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    ACvklbxwht = (struct   student *) malloc (LEN);
    scanf ("%s %s %c %d %f %s", &KVRoQ45->WXQTEAh, &KVRoQ45->name, &KVRoQ45->GuDY4j, &KVRoQ45->zifIntOQ38, &KVRoQ45->JbUGn31DRqrH, &KVRoQ45->dizhi);
    KVRoQ45->next = (158 - 158);
    for (; strcmp (ACvklbxwht->WXQTEAh, "end") != (248 - 248);) {
        tnCFSfWUZ++;
        if (tnCFSfWUZ == (53 - 52))
            scanf ("%s %s %c %d %f %s", &ACvklbxwht->WXQTEAh, &ACvklbxwht->name, &ACvklbxwht->GuDY4j, &ACvklbxwht->zifIntOQ38, &ACvklbxwht->JbUGn31DRqrH, &ACvklbxwht->dizhi);
        else
            scanf ("%s %c %d %f %s", &ACvklbxwht->name, &ACvklbxwht->GuDY4j, &ACvklbxwht->zifIntOQ38, &ACvklbxwht->JbUGn31DRqrH, &ACvklbxwht->dizhi);
        ACvklbxwht->next = KVRoQ45;
        KVRoQ45 = ACvklbxwht;
        ACvklbxwht = (struct   student *) malloc (LEN);
        scanf ("%s", &ACvklbxwht->WXQTEAh);
    }
    return KVRoQ45;
}

void  main () {
    struct   student *U4u1NSInG;
    U4u1NSInG = creat ();
    printf ("%s %s %c %d %g %s\n", U4u1NSInG->WXQTEAh, U4u1NSInG->name, U4u1NSInG->GuDY4j, U4u1NSInG->zifIntOQ38, U4u1NSInG->JbUGn31DRqrH, U4u1NSInG->dizhi);
    for (; U4u1NSInG->next != (873 - 873);) {
        U4u1NSInG = U4u1NSInG->next;
        printf ("%s %s %c %d %g %s\n", U4u1NSInG->WXQTEAh, U4u1NSInG->name, U4u1NSInG->GuDY4j, U4u1NSInG->zifIntOQ38, U4u1NSInG->JbUGn31DRqrH, U4u1NSInG->dizhi);
    };
}

