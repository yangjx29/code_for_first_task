int main () {
    int A7nRoC9pHSd = 0, y = 0, z = 0;
    int T9LRtXYkpB [1000], tMJYklv9sQUd [1000];
    int nqg1AE, BDvVKehxMdb;
    scanf ("%d", &nqg1AE);
    {
        BDvVKehxMdb = 0;
        while (nqg1AE > BDvVKehxMdb) {
            scanf ("%d %d", &T9LRtXYkpB[BDvVKehxMdb], &tMJYklv9sQUd[BDvVKehxMdb]);
            BDvVKehxMdb++;
        };
    }
    {
        BDvVKehxMdb = 0;
        while (nqg1AE > BDvVKehxMdb) {
            if (!(0 != T9LRtXYkpB[BDvVKehxMdb]) && !(1 != tMJYklv9sQUd[BDvVKehxMdb])) {
                A7nRoC9pHSd++;
            }
            if (!(1 != T9LRtXYkpB[BDvVKehxMdb]) && tMJYklv9sQUd[BDvVKehxMdb] == 2) {
                A7nRoC9pHSd++;
            }
            if (!(2 != T9LRtXYkpB[BDvVKehxMdb]) && !(0 != tMJYklv9sQUd[BDvVKehxMdb])) {
                A7nRoC9pHSd++;
            }
            if (!(0 != tMJYklv9sQUd[BDvVKehxMdb]) && !(1 != T9LRtXYkpB[BDvVKehxMdb])) {
                y++;
            }
            if (tMJYklv9sQUd[BDvVKehxMdb] == 1 && T9LRtXYkpB[BDvVKehxMdb] == 2) {
                y++;
            }
            if (tMJYklv9sQUd[BDvVKehxMdb] == 2 && T9LRtXYkpB[BDvVKehxMdb] == 0) {
                y++;
            }
            if (T9LRtXYkpB[BDvVKehxMdb] == 0 && tMJYklv9sQUd[BDvVKehxMdb] == 0) {
                z++;
            }
            if (T9LRtXYkpB[BDvVKehxMdb] == 1 && tMJYklv9sQUd[BDvVKehxMdb] == 1) {
                z++;
            }
            if (T9LRtXYkpB[BDvVKehxMdb] == 2 && tMJYklv9sQUd[BDvVKehxMdb] == 2) {
                z++;
            }
            BDvVKehxMdb++;
        };
    }
    if (A7nRoC9pHSd > y) {
        printf ("A");
    }
    if (A7nRoC9pHSd == y) {
        printf ("Tie");
    }
    if (A7nRoC9pHSd < y) {
        printf ("B");
    }
    return 0;
}

