int op7ymgK3z5Mj = (128 - 128);

void  jSLNoKzQhk (int jVY7nRNo, int OgxsaqMS0 [] [(544 - 443)]) {
    if (!((256 - 255) != jVY7nRNo))
        return;
    else {
        int VeFby6;
        int xh5GmAu;
        int qguh0My9bY;
        int wETa1rUL84;
        VeFby6 = (100045 - 45);
        for (xh5GmAu = (761 - 761); xh5GmAu <= jVY7nRNo - (954 - 953); xh5GmAu++) {
            {
                qguh0My9bY = 900 - 900;
                for (; qguh0My9bY <= jVY7nRNo - (752 - 751);) {
                    if (VeFby6 > OgxsaqMS0[xh5GmAu][qguh0My9bY]) {
                        VeFby6 = OgxsaqMS0[xh5GmAu][qguh0My9bY];
                    }
                    qguh0My9bY++;
                }
            }
            {
                wETa1rUL84 = 323 - 323;
                for (; jVY7nRNo - (479 - 478) >= wETa1rUL84;) {
                    OgxsaqMS0[xh5GmAu][wETa1rUL84] = OgxsaqMS0[xh5GmAu][wETa1rUL84] - VeFby6;
                    wETa1rUL84++;
                }
            }
            VeFby6 = 100000;
        }
        {
            xh5GmAu = 474 - 474;
            for (; jVY7nRNo - (183 - 182) >= xh5GmAu;) {
                for (qguh0My9bY = (936 - 936); qguh0My9bY <= jVY7nRNo - (899 - 898); qguh0My9bY++) {
                    if (OgxsaqMS0[qguh0My9bY][xh5GmAu] < VeFby6) {
                        VeFby6 = OgxsaqMS0[qguh0My9bY][xh5GmAu];
                    }
                }
                {
                    wETa1rUL84 = 712 - 712;
                    for (; wETa1rUL84 <= jVY7nRNo - (485 - 484);) {
                        OgxsaqMS0[wETa1rUL84][xh5GmAu] = OgxsaqMS0[wETa1rUL84][xh5GmAu] - VeFby6;
                        wETa1rUL84++;
                    }
                }
                VeFby6 = 100000;
                xh5GmAu++;
            }
        }
        op7ymgK3z5Mj = op7ymgK3z5Mj + OgxsaqMS0[(382 - 381)][1];
        for (xh5GmAu = (515 - 513); xh5GmAu <= jVY7nRNo - 1; xh5GmAu++) {
            {
                qguh0My9bY = 2;
                for (; qguh0My9bY <= jVY7nRNo - 1;) {
                    OgxsaqMS0[xh5GmAu - 1][qguh0My9bY - 1] = OgxsaqMS0[xh5GmAu][qguh0My9bY];
                    qguh0My9bY++;
                }
            }
            OgxsaqMS0[0][xh5GmAu - 1] = OgxsaqMS0[0][xh5GmAu];
            OgxsaqMS0[xh5GmAu - 1][0] = OgxsaqMS0[xh5GmAu][0];
        }
        jSLNoKzQhk (jVY7nRNo - 1, OgxsaqMS0);
    }
}

int main () {
    int xh5GmAu;
    int qguh0My9bY;
    int J1qyXM6LJzkp;
    int awh2jPR;
    int OgxsaqMS0 [101] [101];
    cin >> awh2jPR;
    {
        J1qyXM6LJzkp = 1;
        for (; J1qyXM6LJzkp <= awh2jPR;) {
            {
                xh5GmAu = 0;
                for (; xh5GmAu <= awh2jPR - 1;) {
                    for (qguh0My9bY = 0; qguh0My9bY <= awh2jPR - 1; qguh0My9bY++) {
                        cin >> OgxsaqMS0[xh5GmAu][qguh0My9bY];
                    }
                    xh5GmAu++;
                }
            }
            op7ymgK3z5Mj = 0;
            jSLNoKzQhk (awh2jPR, OgxsaqMS0);
            cout << op7ymgK3z5Mj << endl;
            J1qyXM6LJzkp++;
        }
    }
    return 0;
}

