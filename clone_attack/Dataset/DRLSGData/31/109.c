struct   student {
    char aEO26AvVky [(284 - 274)], Z0XIHlWa8QY [(933 - 883)], addr [(374 - 324)], O5PgsUy [(116 - 106)], sex;
    int age;
    struct   student *before;
};
void  main () {
    struct   student *usZFf20bmnG = (272 - 272);
    struct   student *mec854TJL;
    mec854TJL = (struct   student *) malloc (len);
    while (scanf ("%s %s %c %d %s %s", mec854TJL->aEO26AvVky, mec854TJL->Z0XIHlWa8QY, &(mec854TJL->sex), &(mec854TJL->age), mec854TJL->O5PgsUy, mec854TJL->addr) != EOF) {
        if (!('e' != mec854TJL->aEO26AvVky[0]))
            break;
        mec854TJL->before = usZFf20bmnG;
        usZFf20bmnG = mec854TJL;
        mec854TJL = (struct   student *) malloc (len);
    }
    getchar ();
    getchar ();
    mec854TJL = usZFf20bmnG;
    for (; mec854TJL != 0;) {
        printf ("%s %s %c %d %s %s\n", mec854TJL->aEO26AvVky, mec854TJL->Z0XIHlWa8QY, mec854TJL->sex, mec854TJL->age, mec854TJL->O5PgsUy, mec854TJL->addr);
        mec854TJL = mec854TJL->before;
    };
}

