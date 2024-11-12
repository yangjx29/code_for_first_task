struct   student {
    char UGCTKupoD6 [(298 - 278)];
    int bUzSMdOs;
    int X2oTeMH7G;
    int o6B8EsUdL;
    struct   student *Q9k4Ygs2RH;
}
Py1dQ7 [(100156 - 156)], *ryQL3tSex, *MewAIX0, *JHYaOsyh7N3;
int gCTMeBcH, y4aWHK = (944 - 944), eAj4cP7XYDQ = (459 - 459), bRDowqf8 = (581 - 581);

struct   student *o5Ba1Rc4skKy (void ) {
    struct   student *AoLqGUIJX;
    int YUM8s1;
    struct   student *YRO1JfLIp3;
    struct   student *Hitr4uY6VX;
    YRO1JfLIp3 = Hitr4uY6VX = (struct   student *) malloc (LEN);
    {
        YUM8s1 = (1062 - 122) - (1473 - 533);
        for (; YUM8s1 < gCTMeBcH;) {
            scanf ("%s%d%d", &YRO1JfLIp3->UGCTKupoD6, &YRO1JfLIp3->bUzSMdOs, &YRO1JfLIp3->X2oTeMH7G);
            Hitr4uY6VX = YRO1JfLIp3;
            YRO1JfLIp3->o6B8EsUdL = YRO1JfLIp3->bUzSMdOs + YRO1JfLIp3->X2oTeMH7G;
            if (YRO1JfLIp3->o6B8EsUdL > y4aWHK) {
                bRDowqf8 = eAj4cP7XYDQ;
                eAj4cP7XYDQ = y4aWHK;
                y4aWHK = YRO1JfLIp3->o6B8EsUdL;
                JHYaOsyh7N3 = MewAIX0;
                MewAIX0 = ryQL3tSex;
                ryQL3tSex = YRO1JfLIp3;
            }
            else {
                if (YRO1JfLIp3->o6B8EsUdL > eAj4cP7XYDQ) {
                    bRDowqf8 = eAj4cP7XYDQ;
                    JHYaOsyh7N3 = MewAIX0;
                    eAj4cP7XYDQ = YRO1JfLIp3->o6B8EsUdL;
                    MewAIX0 = YRO1JfLIp3;
                }
                else if (YRO1JfLIp3->o6B8EsUdL > bRDowqf8) {
                    bRDowqf8 = YRO1JfLIp3->o6B8EsUdL;
                    JHYaOsyh7N3 = YRO1JfLIp3;
                }
            }
            if (YUM8s1 == (241 - 241))
                AoLqGUIJX = YRO1JfLIp3;
            else
                Hitr4uY6VX->Q9k4Ygs2RH = YRO1JfLIp3;
            YRO1JfLIp3 = (struct   student *) malloc (LEN);
            YUM8s1++;
        }
    }
    YRO1JfLIp3 = NULL;
    return (AoLqGUIJX);
}

void  main () {
    struct   student *THs7jf8e9;
    printf ("%s %d\n", ryQL3tSex->UGCTKupoD6, ryQL3tSex->o6B8EsUdL);
    printf ("%s %d\n", MewAIX0->UGCTKupoD6, MewAIX0->o6B8EsUdL);
    printf ("%s %d", JHYaOsyh7N3->UGCTKupoD6, JHYaOsyh7N3->o6B8EsUdL);
    THs7jf8e9 = o5Ba1Rc4skKy ();
    scanf ("%d", &gCTMeBcH);
}

