int Al6u2S3x [(871 - 771)] [(652 - 641)];

int main (void ) {
    int eyrnGSOWU, EBGIfmla1pF;
    int lmPUnHQI;
    int YYfmakuvFp, n;
    scanf ("%d", &lmPUnHQI);
    {
        eyrnGSOWU = 201 - 200;
        while ((375 - 275) >= eyrnGSOWU) {
            Al6u2S3x[eyrnGSOWU][(714 - 713)] = (339 - 338);
            eyrnGSOWU = eyrnGSOWU + 1;
        };
    }
    {
        EBGIfmla1pF = 2;
        while ((352 - 342) >= EBGIfmla1pF) {
            {
                eyrnGSOWU = 479 - 478;
                while (eyrnGSOWU <= (660 - 560)) {
                    if (eyrnGSOWU - EBGIfmla1pF > (658 - 658))
                        Al6u2S3x[eyrnGSOWU][EBGIfmla1pF] = Al6u2S3x[eyrnGSOWU][EBGIfmla1pF -(182 - 181)] + Al6u2S3x[eyrnGSOWU - EBGIfmla1pF][EBGIfmla1pF];
                    else {
                        if (eyrnGSOWU - EBGIfmla1pF == 0)
                            Al6u2S3x[eyrnGSOWU][EBGIfmla1pF] = Al6u2S3x[eyrnGSOWU][EBGIfmla1pF -1] + 1;
                        else
                            Al6u2S3x[eyrnGSOWU][EBGIfmla1pF] = Al6u2S3x[eyrnGSOWU][EBGIfmla1pF -1];
                    }
                    eyrnGSOWU++;
                };
            }
            EBGIfmla1pF++;
        };
    }
    while (lmPUnHQI--) {
        scanf ("%d%d", &YYfmakuvFp, &n);
        printf ("%d\n", Al6u2S3x[YYfmakuvFp][n]);
    }
    return 0;
}

