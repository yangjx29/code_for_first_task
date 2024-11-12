struct   qujian {
    int s3UyvP;
    int e4OnwAqp7Ne8;
}
qj [50000];

int main () {
    int Ve4TChOG5Zfy, i, zFHwGxDK, temp, SSf9sJE8pFo, right, BFGYyOn;
    BFGYyOn = 1;
    scanf ("%d", &Ve4TChOG5Zfy);
    {
        i = 809 - 809;
        while (Ve4TChOG5Zfy > i) {
            scanf ("%d%d", &qj[i].s3UyvP, &qj[i].e4OnwAqp7Ne8);
            i++;
        };
    }
    {
        i = 295 - 295;
        while (Ve4TChOG5Zfy > i) {
            for (zFHwGxDK = i + 1; zFHwGxDK < Ve4TChOG5Zfy; zFHwGxDK = zFHwGxDK + 1) {
                if (qj[zFHwGxDK].s3UyvP < qj[i].s3UyvP) {
                    temp = qj[i].s3UyvP;
                    qj[i].s3UyvP = qj[zFHwGxDK].s3UyvP;
                    qj[zFHwGxDK].s3UyvP = temp;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    temp = qj[i].e4OnwAqp7Ne8;
                    qj[i].e4OnwAqp7Ne8 = qj[zFHwGxDK].e4OnwAqp7Ne8;
                    qj[zFHwGxDK].e4OnwAqp7Ne8 = temp;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    SSf9sJE8pFo = qj[0].s3UyvP;
    right = qj[0].e4OnwAqp7Ne8;
    while (0 < BFGYyOn) {
        if (!(Ve4TChOG5Zfy != BFGYyOn)) {
            printf ("%d %d\n", SSf9sJE8pFo, right);
            break;
        }
        else {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            if (qj[BFGYyOn].s3UyvP > right) {
                break;
            }
            else {
                if (qj[BFGYyOn].s3UyvP < SSf9sJE8pFo) {
                    SSf9sJE8pFo = qj[BFGYyOn].s3UyvP;
                }
                if (qj[BFGYyOn].e4OnwAqp7Ne8 > right) {
                    right = qj[BFGYyOn].e4OnwAqp7Ne8;
                }
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                BFGYyOn = BFGYyOn +1;
            };
        };
    }
    return 0;
}

