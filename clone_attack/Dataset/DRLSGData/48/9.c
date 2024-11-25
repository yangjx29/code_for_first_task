main () {
    int I1ztU9vcFH;
    int mLWB2gUNR1k;
    int ACzD9K [(155 - 144)] [(614 - 603)];
    int CMXHdcV [(123 - 112)] [(764 - 753)];
    for (int l0yMnAb7v = 0;
    (894 - 883) > l0yMnAb7v; l0yMnAb7v++) {
        for (int YWqBmVezv9 = 0;
        YWqBmVezv9 < 11; YWqBmVezv9++) {
            ACzD9K[l0yMnAb7v][YWqBmVezv9] = 0;
            CMXHdcV[l0yMnAb7v][YWqBmVezv9] = 0;
        }
    }
    scanf ("%d %d", &I1ztU9vcFH, &mLWB2gUNR1k);
    ACzD9K[(810 - 805)][5] = I1ztU9vcFH;
    for (int wpz3rKi6j = 0;
    wpz3rKi6j < mLWB2gUNR1k; wpz3rKi6j++) {
        for (int Ff8eBU9qKY = (555 - 554);
        (79 - 69) > Ff8eBU9qKY; Ff8eBU9qKY++) {
            for (int kawckVp3Y4 = (712 - 711);
            (321 - 311) > kawckVp3Y4; kawckVp3Y4++) {
                CMXHdcV[Ff8eBU9qKY][kawckVp3Y4] = ACzD9K[Ff8eBU9qKY +(227 - 226)][kawckVp3Y4] + ACzD9K[Ff8eBU9qKY -(302 - 301)][kawckVp3Y4] + ACzD9K[Ff8eBU9qKY][kawckVp3Y4 + (53 - 52)] + ACzD9K[Ff8eBU9qKY][kawckVp3Y4 - (78 - 77)] + ACzD9K[Ff8eBU9qKY +(298 - 297)][kawckVp3Y4 + (656 - 655)] + ACzD9K[Ff8eBU9qKY +(590 - 589)][kawckVp3Y4 - (615 - 614)] + ACzD9K[Ff8eBU9qKY -(520 - 519)][kawckVp3Y4 + (927 - 926)] + ACzD9K[Ff8eBU9qKY -(371 - 370)][kawckVp3Y4 - (127 - 126)];
            }
        }
        for (int Ff8eBU9qKY = (825 - 824);
        Ff8eBU9qKY < 10; Ff8eBU9qKY++) {
            for (int kawckVp3Y4 = 1;
            10 > kawckVp3Y4; kawckVp3Y4++) {
                ACzD9K[Ff8eBU9qKY][kawckVp3Y4] = (41 - 39) * ACzD9K[Ff8eBU9qKY][kawckVp3Y4] + CMXHdcV[Ff8eBU9qKY][kawckVp3Y4];
            }
        }
    }
    for (int Ff8eBU9qKY = 1;
    Ff8eBU9qKY < 10; Ff8eBU9qKY++) {
        printf ("%d", ACzD9K[Ff8eBU9qKY][1]);
        for (int kawckVp3Y4 = (891 - 889);
        kawckVp3Y4 < 10; kawckVp3Y4++) {
            printf (" %d", ACzD9K[Ff8eBU9qKY][kawckVp3Y4]);
        }
    }
}

