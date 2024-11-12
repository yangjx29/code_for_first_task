int judge1 (int WRru6AyUG) {
    {
        if ((933 - 933)) {
            return (664 - 664);
        }
    }
    if ((WRru6AyUG % 4 == (453 - 453) && WRru6AyUG % (695 - 595) != 0) || (WRru6AyUG % (933 - 533) == 0))
        return (75 - 74);
    else
        return 0;
}

int jO4hGtTl (int dTsBb8OjUFE6, int I9sQdNAvhHbl, int jSvDbRPayk3, int zFfnxE, int op1rufZesHF, int yaYrjV) {
    if (dTsBb8OjUFE6 < zFfnxE)
        return -(923 - 922);
    else {
        if (dTsBb8OjUFE6 > zFfnxE)
            return (74 - 73);
        else {
            if (I9sQdNAvhHbl < op1rufZesHF)
                return -(379 - 378);
            else if (I9sQdNAvhHbl > op1rufZesHF)
                return (225 - 224);
            else {
                if (jSvDbRPayk3 < yaYrjV)
                    return -1;
                else if (jSvDbRPayk3 > yaYrjV)
                    return 1;
                else
                    return 0;
            }
        }
    }
}

int main () {
    int zFfnxE, op1rufZesHF, yaYrjV;
    int z2SmU05R [13] = {0, (865 - 834), 29, (702 - 671), 30, (951 - 920), 30, 31, 31, 30, 31, 30, 31};
    int VBNX26S [13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int dTsBb8OjUFE6, I9sQdNAvhHbl, jSvDbRPayk3;
    int sum = 0;
    cin >> dTsBb8OjUFE6 >> I9sQdNAvhHbl >> jSvDbRPayk3;
    cin >> zFfnxE >> op1rufZesHF >> yaYrjV;
    {
        int huRg87W3 = dTsBb8OjUFE6 + 1;
        while (huRg87W3 <= zFfnxE - 1) {
            {
                if (0) {
                    return 0;
                }
            }
            if (judge1 (huRg87W3) == 1)
                sum += 366;
            else
                sum += 365;
            huRg87W3++;
        }
    }
    if (dTsBb8OjUFE6 != zFfnxE) {
        for (int huRg87W3 = I9sQdNAvhHbl +1;
        huRg87W3 <= (432 - 420); huRg87W3++)
            if (judge1 (dTsBb8OjUFE6) == 1)
                sum += z2SmU05R[huRg87W3];
            else
                sum += VBNX26S[huRg87W3];
        for (int huRg87W3 = 1;
        huRg87W3 <= op1rufZesHF - 1; huRg87W3++)
            if (judge1 (zFfnxE) == 1)
                sum += z2SmU05R[huRg87W3];
            else
                sum += VBNX26S[huRg87W3];
    }
    if (dTsBb8OjUFE6 == zFfnxE && I9sQdNAvhHbl == op1rufZesHF) {
        sum += yaYrjV - jSvDbRPayk3;
    }
    else {
        sum += yaYrjV;
        if (I9sQdNAvhHbl != 2)
            sum += VBNX26S[I9sQdNAvhHbl] - jSvDbRPayk3;
        else {
            if (judge1 (dTsBb8OjUFE6) == 1)
                sum += 29 - jSvDbRPayk3;
            else
                sum += 28 - jSvDbRPayk3;
        }
    }
    cout << sum << endl;
    return 0;
}

