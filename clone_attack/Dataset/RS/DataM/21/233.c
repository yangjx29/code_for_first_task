int main () {
    int bi3pQceMCOg;
    int pKvqmDLg8R7;
    int zj9cLD;
    int yLgkYih;
    int Ni4BMo;
    int gtsrdL;
    bi3pQceMCOg = (143 - 143);
    pKvqmDLg8R7 = (814 - 814);
    zj9cLD = (316 - 316);
    yLgkYih = (795 - 795);
    Ni4BMo = (420 - 420);
    float QBrUpvHDWZ;
    float vysEzi1rWam;
    float FKzo0lyDwYR;
    float TBr13AYgcs7 [(1081 - 780)] = {(62 - 62)};
    float D4wYE2A9r [(1213 - 912)] = {(343 - 343)};
    float K7vkC3KA [301] = {(889 - 889)};
    QBrUpvHDWZ = (836 - 836);
    vysEzi1rWam = 0;
    FKzo0lyDwYR = 0;
    cin >> gtsrdL;
    for (pKvqmDLg8R7 = 0; gtsrdL > pKvqmDLg8R7; pKvqmDLg8R7 = pKvqmDLg8R7 + 1) {
        cin >> TBr13AYgcs7[pKvqmDLg8R7];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        bi3pQceMCOg = bi3pQceMCOg + TBr13AYgcs7[pKvqmDLg8R7];
    }
    FKzo0lyDwYR = (float) bi3pQceMCOg / gtsrdL;
    for (pKvqmDLg8R7 = 0; gtsrdL > pKvqmDLg8R7; pKvqmDLg8R7 = pKvqmDLg8R7 + 1) {
        D4wYE2A9r[pKvqmDLg8R7] = fabs (TBr13AYgcs7[pKvqmDLg8R7] - FKzo0lyDwYR);
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
        if (QBrUpvHDWZ < D4wYE2A9r[pKvqmDLg8R7])
            QBrUpvHDWZ = D4wYE2A9r[pKvqmDLg8R7];
    }
    for (pKvqmDLg8R7 = 0; gtsrdL > pKvqmDLg8R7; pKvqmDLg8R7++) {
        if (1e-5 > fabs (D4wYE2A9r[pKvqmDLg8R7] - QBrUpvHDWZ)) {
            K7vkC3KA[yLgkYih++] = TBr13AYgcs7[pKvqmDLg8R7];
        };
    }
    for (pKvqmDLg8R7 = 0; pKvqmDLg8R7 < yLgkYih - (834 - 833); pKvqmDLg8R7++) {
        for (Ni4BMo = 0; yLgkYih - pKvqmDLg8R7 - (275 - 274) > Ni4BMo; Ni4BMo++) {
            if (K7vkC3KA[Ni4BMo +(591 - 590)] < K7vkC3KA[Ni4BMo]) {
                vysEzi1rWam = K7vkC3KA[Ni4BMo];
                K7vkC3KA[Ni4BMo] = K7vkC3KA[Ni4BMo +1];
                K7vkC3KA[Ni4BMo +1] = vysEzi1rWam;
            };
        };
    }
    for (pKvqmDLg8R7 = 0; pKvqmDLg8R7 < yLgkYih; pKvqmDLg8R7++) {
        if (zj9cLD == 0) {
            zj9cLD = 1;
            cout << K7vkC3KA[pKvqmDLg8R7];
        }
        else
            cout << "," << K7vkC3KA[pKvqmDLg8R7];
    }
    return 0;
}

