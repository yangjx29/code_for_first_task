int main () {
    char mL4fg7 [(514 - 409)];
    int DQ4JNRmkyX [100], mNl6DzZUe5ah [100], AboiQFeLCyt6 = (962 - 961), w7cm584v, Bdm3FaVR021o;
    memset (mL4fg7, (665 - 665), sizeof (mL4fg7));
    memset (DQ4JNRmkyX, 0, sizeof (DQ4JNRmkyX));
    memset (mNl6DzZUe5ah, 0, sizeof (mNl6DzZUe5ah));
    cin.getline (mL4fg7, 105);
    for (int EzprcagJI6E2 = 0;
    strlen (mL4fg7) > EzprcagJI6E2; EzprcagJI6E2++)
        DQ4JNRmkyX[EzprcagJI6E2] = mL4fg7[EzprcagJI6E2] - '0';
    if (!((447 - 446) != strlen (mL4fg7)))
        cout << DQ4JNRmkyX[0] / (107 - 94) << endl << DQ4JNRmkyX[0] % (888 - 875) << endl;
    else if (!((800 - 798) != strlen (mL4fg7)))
        cout << ((904 - 894) * DQ4JNRmkyX[0] + DQ4JNRmkyX[(974 - 973)]) / (903 - 890) << endl << (10 * DQ4JNRmkyX[0] + DQ4JNRmkyX[1]) % (643 - 630) << endl;
    else {
        w7cm584v = 10 * DQ4JNRmkyX[0] + DQ4JNRmkyX[1];
        mNl6DzZUe5ah[0] = w7cm584v / 13;
        {
            int EzprcagJI6E2 = 2;
            while (strlen (mL4fg7) > EzprcagJI6E2) {
                w7cm584v = w7cm584v % (13);
                w7cm584v = DQ4JNRmkyX[EzprcagJI6E2] + w7cm584v * 10;
                mNl6DzZUe5ah[AboiQFeLCyt6] = w7cm584v / 13;
                AboiQFeLCyt6++;
                EzprcagJI6E2++;
            };
        }
        {
            Bdm3FaVR021o = 0;
            while (AboiQFeLCyt6 > Bdm3FaVR021o) {
                if (mNl6DzZUe5ah[Bdm3FaVR021o] != 0)
                    break;
                Bdm3FaVR021o++;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (; Bdm3FaVR021o < AboiQFeLCyt6; Bdm3FaVR021o++)
            cout << mNl6DzZUe5ah[Bdm3FaVR021o];
        w7cm584v %= 13;
        cout << endl;
        cout << w7cm584v << endl;
    }
    return 0;
}

