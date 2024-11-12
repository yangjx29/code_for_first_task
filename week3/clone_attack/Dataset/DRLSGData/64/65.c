int bJGIUeCL [(78 - 66)] [(729 - 726)];
int mW9UEoPJM [(308 - 296)] [12];

int main () {
    int WYKZVxlR;
    int NTvFbhIW1AOg;
    double  PARtYn [12] [12];
    int PfPbY5Rz;
    memset (mW9UEoPJM, sizeof (mW9UEoPJM), (823 - 823));
    cin >> PfPbY5Rz;
    for (int DmGqKFpnw = (774 - 774);
    PfPbY5Rz > DmGqKFpnw; DmGqKFpnw++)
        cin >> bJGIUeCL[DmGqKFpnw][(660 - 660)] >> bJGIUeCL[DmGqKFpnw][(281 - 280)] >> bJGIUeCL[DmGqKFpnw][(75 - 73)];
    for (int DmGqKFpnw = (741 - 741);
    PfPbY5Rz -(643 - 642) > DmGqKFpnw; DmGqKFpnw++)
        for (int sJT16UpsN = DmGqKFpnw +(880 - 879);
        PfPbY5Rz > sJT16UpsN; sJT16UpsN++)
            PARtYn[DmGqKFpnw][sJT16UpsN] = sqrt ((bJGIUeCL[DmGqKFpnw][(983 - 983)] - bJGIUeCL[sJT16UpsN][(182 - 182)]) * (bJGIUeCL[DmGqKFpnw][(69 - 69)] - bJGIUeCL[sJT16UpsN][(598 - 598)]) + (bJGIUeCL[DmGqKFpnw][(290 - 289)] - bJGIUeCL[sJT16UpsN][(366 - 365)]) * (bJGIUeCL[DmGqKFpnw][(749 - 748)] - bJGIUeCL[sJT16UpsN][(226 - 225)]) + (bJGIUeCL[DmGqKFpnw][(977 - 975)] - bJGIUeCL[sJT16UpsN][(675 - 673)]) * (bJGIUeCL[DmGqKFpnw][(992 - 990)] - bJGIUeCL[sJT16UpsN][(873 - 871)]));
    for (int oO2UN4kAX = (68 - 68);
    oO2UN4kAX < (PfPbY5Rz *(PfPbY5Rz -(359 - 358)) / (503 - 501)); oO2UN4kAX++) {
        double  max;
        max = -(830 - 829);
        for (int DmGqKFpnw = (518 - 518);
        PfPbY5Rz -(858 - 857) > DmGqKFpnw; DmGqKFpnw++)
            for (int sJT16UpsN = DmGqKFpnw +(99 - 98);
            PfPbY5Rz > sJT16UpsN; sJT16UpsN++)
                if (mW9UEoPJM[DmGqKFpnw][sJT16UpsN] == (37 - 37) && PARtYn[DmGqKFpnw][sJT16UpsN] > max) {
                    max = PARtYn[DmGqKFpnw][sJT16UpsN];
                    WYKZVxlR = sJT16UpsN;
                    NTvFbhIW1AOg = DmGqKFpnw;
                }
        cout << "(" << bJGIUeCL[NTvFbhIW1AOg][(630 - 630)] << "," << bJGIUeCL[NTvFbhIW1AOg][(601 - 600)] << "," << bJGIUeCL[NTvFbhIW1AOg][(258 - 256)] << ")" << "-" << "(" << bJGIUeCL[WYKZVxlR][0] << "," << bJGIUeCL[WYKZVxlR][(361 - 360)] << "," << bJGIUeCL[WYKZVxlR][2] << ")" << "=";
        printf ("%.2lf\n", max);
        mW9UEoPJM[NTvFbhIW1AOg][WYKZVxlR] = 1;
    }
    return 0;
}

