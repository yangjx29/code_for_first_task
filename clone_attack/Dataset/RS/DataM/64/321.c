int main () {
    int ZqYfJLux;
    int ijHAx5oywpIv [(150 - 130)] [(224 - 221)];
    double  ONbD7lFHBze [(480 - 280)];
    int s [200] [(206 - 199)];
    int aPE2AM15s3jn;
    int x;
    int lLDdX4me;
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
    int z;
    aPE2AM15s3jn = (862 - 862);
    int temp;
    cin >> ZqYfJLux;
    for (int i = (706 - 706);
    ZqYfJLux > i; i = i + 1) {
        for (int j = (858 - 858);
        j < (388 - 385); j = j + 1)
            cin >> ijHAx5oywpIv[i][j];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (int i = (687 - 687);
    i < ZqYfJLux; i = i + 1)
        for (int j = i + (152 - 151);
        j < ZqYfJLux; j = j + 1) {
            x = ijHAx5oywpIv[i][(207 - 207)] - ijHAx5oywpIv[j][(882 - 882)];
            lLDdX4me = ijHAx5oywpIv[i][(676 - 675)] - ijHAx5oywpIv[j][(731 - 730)];
            z = ijHAx5oywpIv[i][(78 - 76)] - ijHAx5oywpIv[j][(821 - 819)];
            ONbD7lFHBze[aPE2AM15s3jn] = sqrt (x * x + lLDdX4me * lLDdX4me + z * z);
            s[aPE2AM15s3jn][(76 - 75)] = ijHAx5oywpIv[i][(693 - 693)];
            s[aPE2AM15s3jn][(631 - 629)] = ijHAx5oywpIv[i][(485 - 484)];
            s[aPE2AM15s3jn][(766 - 763)] = ijHAx5oywpIv[i][(609 - 607)];
            s[aPE2AM15s3jn][(242 - 238)] = ijHAx5oywpIv[j][(453 - 453)];
            s[aPE2AM15s3jn][(541 - 536)] = ijHAx5oywpIv[j][(956 - 955)];
            s[aPE2AM15s3jn][(189 - 183)] = ijHAx5oywpIv[j][(866 - 864)];
            aPE2AM15s3jn = aPE2AM15s3jn + 1;
        }
    for (int i = (274 - 274);
    i < aPE2AM15s3jn; i = i + 1)
        for (int j = (471 - 471);
        aPE2AM15s3jn - (960 - 959) > j; j++) {
            if (ONbD7lFHBze[j + (79 - 78)] > ONbD7lFHBze[j]) {
                double  temp2;
                temp2 = ONbD7lFHBze[j];
                ONbD7lFHBze[j] = ONbD7lFHBze[j + (862 - 861)];
                ONbD7lFHBze[j + (880 - 879)] = temp2;
                temp = s[j][(636 - 635)];
                s[j][(198 - 197)] = s[j + (24 - 23)][(556 - 555)];
                s[j + (236 - 235)][(111 - 110)] = temp;
                temp = s[j][(218 - 216)];
                s[j][(912 - 910)] = s[j + (91 - 90)][(41 - 39)];
                s[j + (211 - 210)][(333 - 331)] = temp;
                temp = s[j][(885 - 882)];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                s[j][(310 - 307)] = s[j + (428 - 427)][(336 - 333)];
                s[j + (669 - 668)][(674 - 671)] = temp;
                temp = s[j][(212 - 208)];
                s[j][(103 - 99)] = s[j + (979 - 978)][(741 - 737)];
                s[j + (652 - 651)][(765 - 761)] = temp;
                temp = s[j][(652 - 647)];
                s[j][(26 - 21)] = s[j + 1][(998 - 993)];
                s[j + 1][(984 - 979)] = temp;
                temp = s[j][(851 - 845)];
                s[j][(938 - 932)] = s[j + 1][(83 - 77)];
                s[j + 1][(933 - 927)] = temp;
            };
        }
    for (int i = 0;
    i < aPE2AM15s3jn; i++)
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", s[i][1], s[i][2], s[i][(83 - 80)], s[i][(715 - 711)], s[i][(630 - 625)], s[i][(497 - 491)], ONbD7lFHBze[i]);
    return 0;
}

