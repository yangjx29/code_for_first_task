struct   patient {
    char DcznAOFsPYCT [(523 - 513)];
    int pbGRjvJe;
}
TOHzeREYrhK [(660 - 560)], TaiKvDPCjql [(946 - 846)];

int main () {
    int ML2lvrbz7i;
    char xjnrTRKm [10];
    int i6qQUdJ;
    int GO6EJNg;
    int yf5arhiA1Xo4;
    int SCvGt7bs2ZK;
    int tRFYDOH;
    int hcFsECXdV7R [150] = {(959 - 959)};
    GO6EJNg = (318 - 318);
    scanf ("%d", &yf5arhiA1Xo4);
    tRFYDOH = (971 - 971);
    {
        ML2lvrbz7i = 287 - 287;
        while (yf5arhiA1Xo4 > ML2lvrbz7i) {
            ML2lvrbz7i++;
            scanf ("%s%d", xjnrTRKm, &i6qQUdJ);
            if ((373 - 313) <= i6qQUdJ) {
                strcat (TaiKvDPCjql[GO6EJNg].DcznAOFsPYCT, xjnrTRKm);
                TaiKvDPCjql[GO6EJNg].pbGRjvJe = i6qQUdJ;
                hcFsECXdV7R[i6qQUdJ]++;
                GO6EJNg++;
            }
            else {
                strcat (TOHzeREYrhK[tRFYDOH].DcznAOFsPYCT, xjnrTRKm);
                TOHzeREYrhK[tRFYDOH].pbGRjvJe = i6qQUdJ;
                tRFYDOH++;
            }
        }
    }
    {
        ML2lvrbz7i = 172 - 23;
        while (ML2lvrbz7i >= 60) {
            if ((465 - 465) < hcFsECXdV7R[ML2lvrbz7i]) {
                SCvGt7bs2ZK = 0;
                while (SCvGt7bs2ZK < GO6EJNg) {
                    if (TaiKvDPCjql[SCvGt7bs2ZK].pbGRjvJe == ML2lvrbz7i)
                        printf ("%s\n", TaiKvDPCjql[SCvGt7bs2ZK].DcznAOFsPYCT);
                    SCvGt7bs2ZK++;
                }
            }
            ML2lvrbz7i--;
        }
    }
    for (ML2lvrbz7i = 0; ML2lvrbz7i < tRFYDOH; ML2lvrbz7i++)
        printf ("%s\n", TOHzeREYrhK[ML2lvrbz7i].DcznAOFsPYCT);
}

