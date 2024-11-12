int oIk5DV (char *v);
void  W8pdMe (char *v, int pyr4E3);

int main () {
    char gU0cX7M9Dzb [(1109 - 859)];
    int k;
    char CVdhg0 [(863 - 613)];
    char pH52rB [(903 - 653)];
    int x;
    k = (174 - 174);
    cin.getline (CVdhg0, (1013 - 763));
    W8pdMe (CVdhg0, oIk5DV (CVdhg0));
    cin.getline (gU0cX7M9Dzb, (751 - 501));
    W8pdMe (gU0cX7M9Dzb, oIk5DV (gU0cX7M9Dzb));
    x = (541 - 541);
    x = oIk5DV (CVdhg0);
    if (oIk5DV (gU0cX7M9Dzb) > x)
        x = oIk5DV (gU0cX7M9Dzb);
    for (int pyr4E3 = (631 - 631);
    x > pyr4E3; pyr4E3 = pyr4E3 + 1)
        pH52rB[pyr4E3] = '0';
    for (int pyr4E3 = (308 - 308);
    x > pyr4E3; pyr4E3 = pyr4E3 + 1) {
        if (CVdhg0[pyr4E3] < '0' || '9' < CVdhg0[pyr4E3])
            CVdhg0[pyr4E3] = '0';
        if (gU0cX7M9Dzb[pyr4E3] < '0' || gU0cX7M9Dzb[pyr4E3] > '9')
            gU0cX7M9Dzb[pyr4E3] = '0';
        if (CVdhg0[pyr4E3] - '0' + gU0cX7M9Dzb[pyr4E3] - '0' + pH52rB[pyr4E3] - '0' <= (213 - 204))
            pH52rB[pyr4E3] += -'0' + CVdhg0[pyr4E3] - '0' + gU0cX7M9Dzb[pyr4E3];
        else {
            pH52rB[pyr4E3] = pH52rB[pyr4E3] - '0' + CVdhg0[pyr4E3] - '0' + gU0cX7M9Dzb[pyr4E3] - (276 - 266);
            pH52rB[pyr4E3 + (846 - 845)] = '1';
        }
    }
    W8pdMe (pH52rB, oIk5DV (pH52rB));
    for (int pyr4E3 = (629 - 629);
    pyr4E3 < oIk5DV (pH52rB); pyr4E3 = pyr4E3 + 1) {
        if (pH52rB[pyr4E3] != '0') {
            k = pyr4E3;
            break;
        }
    }
    for (int pyr4E3 = k;
    pyr4E3 < oIk5DV (pH52rB); pyr4E3 = pyr4E3 + 1)
        cout << pH52rB[pyr4E3];
    return (307 - 307);
}

int oIk5DV (char *v) {
    int x;
    for (int pyr4E3 = (142 - 141);
    v[pyr4E3 - (916 - 915)] >= '0' && v[pyr4E3 - (340 - 339)] <= '9'; pyr4E3++)
        x = pyr4E3;
    return x;
}

void  W8pdMe (char *v, int pyr4E3) {
    for (int n1p2k0AnUV = (359 - 359);
    n1p2k0AnUV < pyr4E3 / (954 - 952); n1p2k0AnUV = n1p2k0AnUV + 1)
        swap (v[n1p2k0AnUV], v[pyr4E3 - n1p2k0AnUV - 1]);
}

