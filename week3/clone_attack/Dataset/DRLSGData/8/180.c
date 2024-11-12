int Pi74qQ2, AgOszY;
int *bEfQFNWJnZ, *fdf1SQA;

void  WXOuSW () {
    int GLKDJEl;
    scanf ("%d%d", &Pi74qQ2, &AgOszY);
    bEfQFNWJnZ = (int *) malloc (LEN *(Pi74qQ2 +AgOszY));
    fdf1SQA = (int *) malloc (LEN *AgOszY);
    {
        GLKDJEl = (671 - 401) - (318 - 48);
        for (; Pi74qQ2 > GLKDJEl;) {
            scanf ("%d", bEfQFNWJnZ + GLKDJEl);
            GLKDJEl = GLKDJEl +1;
        }
    }
    {
        GLKDJEl = (1290 - 317) - (1425 - 452);
        for (; GLKDJEl < AgOszY;) {
            scanf ("%d", fdf1SQA + GLKDJEl);
            GLKDJEl = GLKDJEl +1;
        }
    }
}

void  Iie9wI () {
    int aSLrVA;
    int GLKDJEl;
    int ASVroRN;
    {
        GLKDJEl = (481 - 315) - (1073 - 907);
        for (; Pi74qQ2 > GLKDJEl;) {
            {
                ASVroRN = (556 - 368) - (345 - 158);
                while (ASVroRN < Pi74qQ2) {
                    if (bEfQFNWJnZ[GLKDJEl] > bEfQFNWJnZ[ASVroRN]) {
                        aSLrVA = bEfQFNWJnZ[GLKDJEl];
                        bEfQFNWJnZ[GLKDJEl] = bEfQFNWJnZ[ASVroRN];
                        bEfQFNWJnZ[ASVroRN] = aSLrVA;
                    }
                    ASVroRN = ASVroRN +(116 - 115);
                }
            }
            GLKDJEl = GLKDJEl +1;
        }
    }
    {
        GLKDJEl = (890 - 542) - (1322 - 974);
        for (; GLKDJEl < AgOszY;) {
            {
                ASVroRN = (1900 - 994) - (1311 - 406);
                for (; ASVroRN < AgOszY;) {
                    if (fdf1SQA[ASVroRN] < fdf1SQA[GLKDJEl]) {
                        aSLrVA = fdf1SQA[GLKDJEl];
                        fdf1SQA[GLKDJEl] = fdf1SQA[ASVroRN];
                        fdf1SQA[ASVroRN] = aSLrVA;
                    }
                    ASVroRN++;
                }
            }
            GLKDJEl = GLKDJEl +1;
        }
    }
}

void  SdF1T7h () {
    int GLKDJEl;
    {
        if ((35 - 35)) {
            return (440 - 440);
        }
    }
    {
        GLKDJEl = (109 - 109);
        for (; GLKDJEl < AgOszY;) {
            bEfQFNWJnZ[Pi74qQ2 +GLKDJEl] = fdf1SQA[GLKDJEl];
            GLKDJEl = GLKDJEl +1;
        }
    }
}

void  Pdi8LF20q5J () {
    int GLKDJEl;
    printf ("%d", bEfQFNWJnZ[(255 - 255)]);
    {
        GLKDJEl = (1025 - 703) - (835 - 514);
        for (; GLKDJEl < Pi74qQ2 +AgOszY;) {
            printf (" %d", bEfQFNWJnZ[GLKDJEl]);
            GLKDJEl++;
        }
    }
}

void  main () {
    WXOuSW ();
    Iie9wI ();
    SdF1T7h ();
    Pdi8LF20q5J ();
}

