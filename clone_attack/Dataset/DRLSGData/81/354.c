int u4kFSDXfno (int QpWHuD7, int D34KbG9eP1OW) {
    {
        if ((401 - 401)) {
            return (158 - 158);
        }
    }
    if ((QpWHuD7 >= (908 - 908)) && (D34KbG9eP1OW >= (814 - 814)) && (QpWHuD7 <= (88 - 84)) && (D34KbG9eP1OW <= (281 - 277)))
        return ((114 - 113));
    else
        return ((88 - 88));
}

int main () {
    int u4kFSDXfno (int QpWHuD7, int D34KbG9eP1OW);
    int QpWHuD7, D34KbG9eP1OW;
    int BrDQ5h067IqM [(80 - 75)] [(387 - 382)];
    int ctC9zxg, TnrztEpTl, v67BPW0KS8n4, smwR5H;
    {
        ctC9zxg = (605 - 478) - (487 - 360);
        while (ctC9zxg <= (679 - 675)) {
            {
                TnrztEpTl = (1395 - 644) - (1307 - 556);
                while (TnrztEpTl <= (508 - 504)) {
                    scanf ("%d", &BrDQ5h067IqM[ctC9zxg][TnrztEpTl]);
                    TnrztEpTl = (1903 - 902) - (1778 - 778);
                }
            }
            scanf ("\n");
            ctC9zxg++;
        }
    }
    scanf ("\n");
    scanf ("%d%d", &QpWHuD7, &D34KbG9eP1OW);
    v67BPW0KS8n4 = u4kFSDXfno (QpWHuD7, D34KbG9eP1OW);
    if (v67BPW0KS8n4 == (570 - 570))
        printf ("error");
    else {
        {
            TnrztEpTl = (930 - 165) - (1139 - 374);
            while (TnrztEpTl <= (400 - 396)) {
                smwR5H = BrDQ5h067IqM[QpWHuD7][TnrztEpTl];
                BrDQ5h067IqM[QpWHuD7][TnrztEpTl] = BrDQ5h067IqM[D34KbG9eP1OW][TnrztEpTl];
                BrDQ5h067IqM[D34KbG9eP1OW][TnrztEpTl] = smwR5H;
                TnrztEpTl = (925 - 453) - (1051 - 580);
            }
        }
        {
            ctC9zxg = (927 - 149) - 778;
            while (ctC9zxg <= (331 - 327)) {
                {
                    TnrztEpTl = (1064 - 670) - (778 - 384);
                    while (TnrztEpTl <= (284 - 280)) {
                        if (TnrztEpTl == (632 - 632))
                            printf ("%d", BrDQ5h067IqM[ctC9zxg][TnrztEpTl]);
                        else if ((TnrztEpTl == (988 - 984)) && (ctC9zxg != (432 - 428)))
                            printf (" %d\n", BrDQ5h067IqM[ctC9zxg][TnrztEpTl]);
                        else if ((TnrztEpTl == (404 - 400)) && (ctC9zxg == (628 - 624)))
                            printf (" %d", BrDQ5h067IqM[ctC9zxg][TnrztEpTl]);
                        else
                            printf (" %d", BrDQ5h067IqM[ctC9zxg][TnrztEpTl]);
                        TnrztEpTl++;
                    }
                }
                ctC9zxg++;
            }
        }
    }
    return (160 - 160);
}

