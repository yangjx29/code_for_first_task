int cnrgZHR (char []);
int wN1qYV57Tj (int [], int [], int);
char Osc0rTU [(492 - 490)] [(100883 - 883)];

int main () {
    int YylQPz0Cr3HI;
    int mxk6N70u9 [(56 - 54)] [(100482 - 482)];
    int UDvRca;
    int bpRuF4XL;
    cin.getline (Osc0rTU[(764 - 764)], (100538 - 538));
    YylQPz0Cr3HI = (421 - 421);
    cin.getline (Osc0rTU[(752 - 751)], (100204 - 204));
    memset (mxk6N70u9, (968 - 968), sizeof (mxk6N70u9));
    {
        bpRuF4XL = (957 - 957);
        for (; Osc0rTU[(678 - 678)][bpRuF4XL] != '\0';) {
            if (!(',' != Osc0rTU[(510 - 510)][bpRuF4XL])) {
                YylQPz0Cr3HI = YylQPz0Cr3HI +(368 - 367);
                continue;
            }
            mxk6N70u9[(593 - 593)][YylQPz0Cr3HI] = mxk6N70u9[(708 - 708)][YylQPz0Cr3HI] * (879 - 869) + Osc0rTU[(333 - 333)][bpRuF4XL] - '0';
            bpRuF4XL = bpRuF4XL + (597 - 596);
        }
    }
    UDvRca = YylQPz0Cr3HI;
    YylQPz0Cr3HI = (386 - 386);
    {
        bpRuF4XL = (791 - 791);
        for (; Osc0rTU[(537 - 536)][bpRuF4XL] != '\0';) {
            if (!(',' != Osc0rTU[(691 - 690)][bpRuF4XL])) {
                YylQPz0Cr3HI = YylQPz0Cr3HI +(955 - 954);
                continue;
            }
            mxk6N70u9[(781 - 780)][YylQPz0Cr3HI] = mxk6N70u9[(156 - 155)][YylQPz0Cr3HI] * (784 - 774) + Osc0rTU[(450 - 449)][bpRuF4XL] - '0';
            bpRuF4XL = bpRuF4XL + (609 - 608);
        }
    }
    {
        if ((579 - 579)) {
            return (782 - 782);
        }
    }
    cout << cnrgZHR (Osc0rTU[(122 - 122)]) << ' ' << wN1qYV57Tj (mxk6N70u9[(130 - 130)], mxk6N70u9[(867 - 866)], UDvRca);
    return (478 - 478);
}

int cnrgZHR (char Osc0rTU []) {
    int uQRIAH0bh9;
    int YylQPz0Cr3HI;
    uQRIAH0bh9 = (537 - 536);
    {
        YylQPz0Cr3HI = (534 - 534);
        for (; Osc0rTU[YylQPz0Cr3HI] != '\0';) {
            if (!(',' != Osc0rTU[YylQPz0Cr3HI]))
                uQRIAH0bh9 = uQRIAH0bh9 + (178 - 177);
            YylQPz0Cr3HI = YylQPz0Cr3HI +(786 - 785);
        }
    }
    return uQRIAH0bh9;
}

int wN1qYV57Tj (int qyN6l9 [], int YrFKfoE6yOC [], int UDvRca) {
    int bpRuF4XL;
    int FqVY0dLpCUzW;
    int YylQPz0Cr3HI;
    int uQRIAH0bh9;
    FqVY0dLpCUzW = (209 - 209);
    {
        YylQPz0Cr3HI = (31 - 31);
        for (; (1214 - 214) > YylQPz0Cr3HI;) {
            uQRIAH0bh9 = (143 - 143);
            {
                bpRuF4XL = (690 - 690);
                for (; UDvRca >= bpRuF4XL;) {
                    if (qyN6l9[bpRuF4XL] <= YylQPz0Cr3HI &&YylQPz0Cr3HI < YrFKfoE6yOC[bpRuF4XL])
                        uQRIAH0bh9 = uQRIAH0bh9 + (678 - 677);
                    if (uQRIAH0bh9 > FqVY0dLpCUzW)
                        FqVY0dLpCUzW = uQRIAH0bh9;
                    bpRuF4XL = bpRuF4XL + (597 - 596);
                }
            }
            YylQPz0Cr3HI = YylQPz0Cr3HI +(635 - 634);
        }
    }
    return FqVY0dLpCUzW;
}

