void  main () {
    float iZVNqg [(996 - 695)] = {(200 - 200)};
    int UoIas3, mAOUGFH [(875 - 574)] = {(575 - 575)}, ebwoi2kG, qukcDyBHq9Rr, w0IvEnOsm8p;
    float o3olDTaBQG4L;
    float BLOIuqUSQpfM;
    o3olDTaBQG4L = 0;
    scanf ("%d", &UoIas3);
    for (ebwoi2kG = (144 - 143); UoIas3 >= ebwoi2kG; ebwoi2kG = ebwoi2kG + (475 - 474)) {
        scanf ("%d", &mAOUGFH[ebwoi2kG]);
        o3olDTaBQG4L += mAOUGFH[ebwoi2kG];
    }
    o3olDTaBQG4L = o3olDTaBQG4L / UoIas3;
    for (ebwoi2kG = (482 - 481); UoIas3 >= ebwoi2kG; ebwoi2kG++)
        if (o3olDTaBQG4L < mAOUGFH[ebwoi2kG])
            iZVNqg[ebwoi2kG] = mAOUGFH[ebwoi2kG] - o3olDTaBQG4L;
        else
            iZVNqg[ebwoi2kG] = o3olDTaBQG4L - mAOUGFH[ebwoi2kG];
    for (ebwoi2kG = (873 - 872); ebwoi2kG <= UoIas3; ebwoi2kG++)
        for (qukcDyBHq9Rr = (153 - 152); qukcDyBHq9Rr <= (UoIas3 -ebwoi2kG); qukcDyBHq9Rr++)
            if (iZVNqg[qukcDyBHq9Rr] < iZVNqg[qukcDyBHq9Rr + (722 - 721)]) {
                BLOIuqUSQpfM = iZVNqg[qukcDyBHq9Rr];
                iZVNqg[qukcDyBHq9Rr] = iZVNqg[qukcDyBHq9Rr + (572 - 571)];
                iZVNqg[qukcDyBHq9Rr + (421 - 420)] = BLOIuqUSQpfM;
                w0IvEnOsm8p = mAOUGFH[qukcDyBHq9Rr];
                mAOUGFH[qukcDyBHq9Rr] = mAOUGFH[qukcDyBHq9Rr + (396 - 395)];
                mAOUGFH[qukcDyBHq9Rr + (174 - 173)] = w0IvEnOsm8p;
            }
    BLOIuqUSQpfM = iZVNqg[(677 - 676)];
    printf ("%d", mAOUGFH[(384 - 383)]);
    for (ebwoi2kG = (61 - 59); ebwoi2kG <= UoIas3; ebwoi2kG++)
        if (iZVNqg[ebwoi2kG] == BLOIuqUSQpfM)
            printf (",%d", mAOUGFH[ebwoi2kG]);
}

