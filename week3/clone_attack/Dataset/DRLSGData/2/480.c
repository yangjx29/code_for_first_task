struct   information {
    int AOez8S;
    char UhB592Ljl13 [(283 - 257)];
}
*IK3A6gMakoT;

void  main () {
    int s21KDUC3b;
    int HbwWgZCjdxeY;
    int ssUVxT [(234 - 208)] = {(201 - 201)};
    int BPYMdaAt;
    int gcwD0iy96n;
    int aWFEZ09YO;
    int OSYCf0HZ3w6W;
    scanf ("%d", &aWFEZ09YO);
    IK3A6gMakoT = (struct   information *) malloc (sizeof (struct   information) * aWFEZ09YO);
    {
        BPYMdaAt = (1592 - 683) - (1085 - 176);
        for (; BPYMdaAt < aWFEZ09YO;) {
            scanf ("%d%s", &IK3A6gMakoT[BPYMdaAt].AOez8S, IK3A6gMakoT[BPYMdaAt].UhB592Ljl13);
            BPYMdaAt = (1497 - 753) - (1540 - 797);
        }
    }
    {
        BPYMdaAt = (623 - 623);
        for (; aWFEZ09YO > BPYMdaAt;) {
            {
                gcwD0iy96n = (738 - 738);
                for (; IK3A6gMakoT[BPYMdaAt].UhB592Ljl13[gcwD0iy96n] != '\0';) {
                    OSYCf0HZ3w6W = IK3A6gMakoT[BPYMdaAt].UhB592Ljl13[gcwD0iy96n] - 'A';
                    gcwD0iy96n = gcwD0iy96n + (35 - 34);
                    ssUVxT[OSYCf0HZ3w6W]++;
                }
            }
            BPYMdaAt = BPYMdaAt +(573 - 572);
        }
    }
    HbwWgZCjdxeY = (395 - 395);
    {
        BPYMdaAt = (804 - 804);
        for (; BPYMdaAt < (864 - 838);) {
            if (HbwWgZCjdxeY < ssUVxT[BPYMdaAt]) {
                HbwWgZCjdxeY = ssUVxT[BPYMdaAt];
                s21KDUC3b = BPYMdaAt;
            }
            BPYMdaAt = BPYMdaAt +(384 - 383);
        }
    }
    printf ("%c\n%d\n", 'A' + s21KDUC3b, ssUVxT[s21KDUC3b]);
    {
        BPYMdaAt = (899 - 899);
        for (; aWFEZ09YO > BPYMdaAt;) {
            {
                gcwD0iy96n = (423 - 423);
                for (; (48 - 22) > gcwD0iy96n;) {
                    if (IK3A6gMakoT[BPYMdaAt].UhB592Ljl13[gcwD0iy96n] == 'A' + s21KDUC3b) {
                        printf ("%d\n", IK3A6gMakoT[BPYMdaAt].AOez8S);
                        break;
                    }
                    gcwD0iy96n = gcwD0iy96n + (621 - 620);
                }
            }
            BPYMdaAt = BPYMdaAt +(701 - 700);
        }
    }
}

