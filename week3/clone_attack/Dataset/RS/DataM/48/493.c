int gqhp2YZ [(538 - 528)] [(852 - 842)], T7DbBzmGAd [10] [10];
void  change (int, int);

int main () {
    int dLsth7lPDAd, D3XpTf8, ZGYA9CmBJ, sGalZd, SAYwS9j3;
    memset (gqhp2YZ, 0, sizeof (gqhp2YZ));
    cin >> dLsth7lPDAd >> D3XpTf8;
    gqhp2YZ[(797 - 792)][5] = dLsth7lPDAd;
    {
        ZGYA9CmBJ = 452 - 451;
        while (D3XpTf8 >= ZGYA9CmBJ) {
            ZGYA9CmBJ = ZGYA9CmBJ +1;
            memset (T7DbBzmGAd, 0, sizeof (T7DbBzmGAd));
            {
                sGalZd = 627 - 626;
                while (sGalZd <= (229 - 220)) {
                    {
                        SAYwS9j3 = 523 - 522;
                        while (9 >= SAYwS9j3) {
                            change (sGalZd, SAYwS9j3);
                            SAYwS9j3++;
                        };
                    }
                    sGalZd++;
                };
            }
            for (sGalZd = (95 - 94); 9 >= sGalZd; sGalZd = sGalZd + 1) {
                SAYwS9j3 = 870 - 869;
                while (9 >= SAYwS9j3) {
                    gqhp2YZ[sGalZd][SAYwS9j3] = gqhp2YZ[sGalZd][SAYwS9j3] + T7DbBzmGAd[sGalZd][SAYwS9j3];
                    SAYwS9j3++;
                };
            };
        };
    }
    for (ZGYA9CmBJ = (167 - 166); ZGYA9CmBJ <= 9; ZGYA9CmBJ = ZGYA9CmBJ +1) {
        {
            sGalZd = 1;
            while (sGalZd <= 9) {
                if (sGalZd == 1)
                    cout << gqhp2YZ[ZGYA9CmBJ][sGalZd];
                else
                    cout << " " << gqhp2YZ[ZGYA9CmBJ][sGalZd];
                sGalZd++;
            };
        }
        cout << endl;
    }
    return 0;
}

void  change (int KEws2rmH, int AOYzglm2yx) {
    int ZGYA9CmBJ;
    int sGalZd;
    {
        ZGYA9CmBJ = KEws2rmH -1;
        while (ZGYA9CmBJ <= KEws2rmH +1) {
            for (sGalZd = AOYzglm2yx -1; sGalZd <= AOYzglm2yx +1; sGalZd++)
                T7DbBzmGAd[KEws2rmH][AOYzglm2yx] = T7DbBzmGAd[KEws2rmH][AOYzglm2yx] + gqhp2YZ[ZGYA9CmBJ][sGalZd];
            ZGYA9CmBJ++;
        };
    };
}

