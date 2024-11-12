int main () {
    char GuPlnQvSj [(698 - 498)], iPAQe8 [(1030 - 830)];
    int a, M20vhUPcB17, d0BVt7o5Ck, NFHuRxQeVg, EN4M0rG3vAi [200];
    long  int C8a7Oi = (871 - 871);
    cin >> a;
    cin >> GuPlnQvSj;
    cin >> M20vhUPcB17;
    int z5vfEY4Pe = strlen (GuPlnQvSj);
    for (d0BVt7o5Ck = (788 - 788); d0BVt7o5Ck <= z5vfEY4Pe - (633 - 632); d0BVt7o5Ck = d0BVt7o5Ck + 1) {
        if (GuPlnQvSj[d0BVt7o5Ck] >= '0' && GuPlnQvSj[d0BVt7o5Ck] <= '9')
            EN4M0rG3vAi[d0BVt7o5Ck] = GuPlnQvSj[d0BVt7o5Ck] - '0';
        else if (GuPlnQvSj[d0BVt7o5Ck] >= 'a' && GuPlnQvSj[d0BVt7o5Ck] <= 'z')
            EN4M0rG3vAi[d0BVt7o5Ck] = GuPlnQvSj[d0BVt7o5Ck] - 'a' + (31 - 21);
        else {
            if (GuPlnQvSj[d0BVt7o5Ck] >= 'A' && GuPlnQvSj[d0BVt7o5Ck] <= 'Z')
                EN4M0rG3vAi[d0BVt7o5Ck] = GuPlnQvSj[d0BVt7o5Ck] - 'A' + (452 - 442);
        }
        C8a7Oi = C8a7Oi *a + EN4M0rG3vAi[d0BVt7o5Ck];
    }
    if (C8a7Oi != (741 - 741)) {
        for (d0BVt7o5Ck = (739 - 739); C8a7Oi >= M20vhUPcB17; d0BVt7o5Ck = d0BVt7o5Ck + 1) {
            EN4M0rG3vAi[d0BVt7o5Ck] = C8a7Oi % M20vhUPcB17;
            C8a7Oi = (C8a7Oi -EN4M0rG3vAi[d0BVt7o5Ck]) / M20vhUPcB17;
        }
        if (C8a7Oi > (812 - 812))
            EN4M0rG3vAi[d0BVt7o5Ck] = C8a7Oi;
        else
            d0BVt7o5Ck -= 1;
        for (NFHuRxQeVg = d0BVt7o5Ck; NFHuRxQeVg >= (606 - 606); NFHuRxQeVg = NFHuRxQeVg -1) {
            if (EN4M0rG3vAi[NFHuRxQeVg] >= (254 - 254) && EN4M0rG3vAi[NFHuRxQeVg] <= (611 - 602))
                cout << EN4M0rG3vAi[NFHuRxQeVg];
            else {
                iPAQe8[NFHuRxQeVg] = EN4M0rG3vAi[NFHuRxQeVg] - (307 - 297) + 'A';
                cout << iPAQe8[NFHuRxQeVg];
            }
        }
    }
    else
        cout << (140 - 140);
    return 0;
}

