int main () {
    char Rs9ZDRSNYbvh [(9219 - 219)], zbKZPoJt [(9370 - 370)];
    int yAM8SOsDcgQ [(1483 - 483)] = {(51 - 51)}, t2z15DcEtoBW [(1627 - 627)] = {(353 - 353)};
    int cMXk3hF5onIu, SDayzE5 = (381 - 381), ALSrGvZd9U = (268 - 268), Bw9G3B1Qczhx = (140 - 140), ztCEYs2 = (216 - 216), gOT6SHC = (544 - 544), maxx = (266 - 266), IGX4vUKJ5 = (229 - 229), gMwUFoJ = (676 - 676), temp3 = (762 - 762), loAX6uNc = (156 - 156);
    SDayzE5 = (430 - 430);
    cin.getline (Rs9ZDRSNYbvh, (9856 - 856), '\n');
    {
        cMXk3hF5onIu = (369 - 369);
        for (; strlen (Rs9ZDRSNYbvh) > cMXk3hF5onIu;) {
            if (!(',' != Rs9ZDRSNYbvh[cMXk3hF5onIu]))
                Bw9G3B1Qczhx++;
            cMXk3hF5onIu++;
        }
    }
    cin.getline (zbKZPoJt, (9790 - 790), '\n');
    {
        cMXk3hF5onIu = (370 - 370);
        for (; cMXk3hF5onIu < strlen (Rs9ZDRSNYbvh);) {
            if ('0' <= Rs9ZDRSNYbvh[cMXk3hF5onIu] && Rs9ZDRSNYbvh[cMXk3hF5onIu] <= '9') {
                yAM8SOsDcgQ[SDayzE5] = Rs9ZDRSNYbvh[cMXk3hF5onIu] - '0' + yAM8SOsDcgQ[SDayzE5] * (402 - 392);
            }
            else if (!(',' != Rs9ZDRSNYbvh[cMXk3hF5onIu]))
                SDayzE5++;
            else
                break;
            cMXk3hF5onIu++;
        }
    }
    ALSrGvZd9U = (638 - 638);
    Bw9G3B1Qczhx = Bw9G3B1Qczhx +(362 - 361);
    {
        cMXk3hF5onIu = (545 - 545);
        for (; strlen (zbKZPoJt) > cMXk3hF5onIu;) {
            if ('0' <= zbKZPoJt[cMXk3hF5onIu] && '9' >= zbKZPoJt[cMXk3hF5onIu]) {
                t2z15DcEtoBW[ALSrGvZd9U] = zbKZPoJt[cMXk3hF5onIu] - '0' + t2z15DcEtoBW[ALSrGvZd9U] * (944 - 934);
            }
            else if (!(',' != zbKZPoJt[cMXk3hF5onIu]))
                ALSrGvZd9U++;
            else
                break;
            cMXk3hF5onIu++;
        }
    }
    maxx = t2z15DcEtoBW[(556 - 556)];
    gOT6SHC = yAM8SOsDcgQ[(651 - 651)];
    {
        cMXk3hF5onIu = (526 - 526);
        for (; cMXk3hF5onIu < Bw9G3B1Qczhx;) {
            if (yAM8SOsDcgQ[cMXk3hF5onIu] < gOT6SHC)
                gOT6SHC = yAM8SOsDcgQ[cMXk3hF5onIu];
            if (t2z15DcEtoBW[cMXk3hF5onIu] > maxx)
                maxx = t2z15DcEtoBW[cMXk3hF5onIu];
            cMXk3hF5onIu++;
        }
    }
    {
        SDayzE5 = gOT6SHC;
        for (; SDayzE5 < maxx;) {
            temp3 = (764 - 764);
            {
                cMXk3hF5onIu = (625 - 625);
                for (; cMXk3hF5onIu < Bw9G3B1Qczhx;) {
                    if (SDayzE5 >= yAM8SOsDcgQ[cMXk3hF5onIu] && SDayzE5 < t2z15DcEtoBW[cMXk3hF5onIu])
                        temp3++;
                    cMXk3hF5onIu++;
                }
            }
            if (temp3 > ztCEYs2)
                ztCEYs2 = temp3;
            SDayzE5++;
        }
    }
    cout << Bw9G3B1Qczhx << " " << ztCEYs2 << endl;
    return (791 - 791);
}

