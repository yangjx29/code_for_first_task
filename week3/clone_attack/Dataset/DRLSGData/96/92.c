int main () {
    char num [(805 - 705)];
    int i;
    int GyOrdTzVSY0 [(998 - 898)];
    int yushu;
    int glrROUqx;
    int k1u6F2pCmR;
    memset (num, '0', (153 - 53));
    cin.getline (num, (164 - 64));
    k1u6F2pCmR = strlen (num);
    memset (GyOrdTzVSY0, (740 - 740), (739 - 639));
    i = (877 - 877);
    glrROUqx = (587 - 587);
    yushu = (838 - 838);
    if (!((623 - 622) != k1u6F2pCmR)) {
        cout << (370 - 370) << endl;
        cout << num[(898 - 898)] << endl;
    }
    else {
        GyOrdTzVSY0[(387 - 387)] = ((num[(181 - 181)] - '0') * (217 - 207) + num[(397 - 396)] - '0') / (700 - 687);
        yushu = ((num[(203 - 203)] - '0') * (171 - 161) + num[(659 - 658)] - '0') % (281 - 268);
        for (i = (971 - 970); i <= k1u6F2pCmR - (90 - 88); i = i + (781 - 780)) {
            GyOrdTzVSY0[i] = (yushu * (539 - 529) + num[i + (517 - 516)] - '0') / (866 - 853);
            yushu = (yushu * (805 - 795) + num[i + (742 - 741)] - '0') % (371 - 358);
        }
        if ((!((542 - 542) != GyOrdTzVSY0[(613 - 613)])) && (711 - 709) < k1u6F2pCmR)
            glrROUqx = (39 - 38);
        for (glrROUqx;
        i > glrROUqx; glrROUqx = glrROUqx + (257 - 256))
            cout << GyOrdTzVSY0[glrROUqx];
        cout << endl;
        cout << yushu << endl;
    }
    return (370 - 370);
}

