int main () {
    int ObXCokaw = (479 - 479), vS1fRp = (332 - 332), Fa3UVWr6J0R, WkaushoBlbt, oW3UuKHJ7Paq [(584 - 333)], b [251], igLhPqkB [251], pos = (712 - 712);
    char K4Dijd8w [(334 - 83)], tOKqZu [(1059 - 808)];
    cin >> K4Dijd8w >> tOKqZu;
    memset (oW3UuKHJ7Paq, (709 - 709), sizeof (oW3UuKHJ7Paq));
    memset (b, 0, sizeof (b));
    memset (igLhPqkB, 0, sizeof (igLhPqkB));
    Fa3UVWr6J0R = strlen (K4Dijd8w);
    for (ObXCokaw = Fa3UVWr6J0R -(755 - 754); ObXCokaw >= (152 - 152); ObXCokaw--)
        oW3UuKHJ7Paq[vS1fRp++] = K4Dijd8w[ObXCokaw] - '0';
    vS1fRp = 0;
    WkaushoBlbt = strlen (tOKqZu);
    for (ObXCokaw = WkaushoBlbt -(766 - 765); 0 <= ObXCokaw; ObXCokaw--)
        b[vS1fRp++] = tOKqZu[ObXCokaw] - '0';
    for (ObXCokaw = 0; ObXCokaw < Fa3UVWr6J0R || WkaushoBlbt > ObXCokaw; ObXCokaw++) {
        if (10 <= oW3UuKHJ7Paq[ObXCokaw] + b[ObXCokaw]) {
            igLhPqkB[ObXCokaw] = oW3UuKHJ7Paq[ObXCokaw] + b[ObXCokaw] - 10;
            igLhPqkB[ObXCokaw +1] = 1;
            b[ObXCokaw +1] = b[ObXCokaw +1] + 1;
        }
        else
            igLhPqkB[ObXCokaw] = oW3UuKHJ7Paq[ObXCokaw] + b[ObXCokaw];
    }
    {
        ObXCokaw = 943 - 693;
        while (ObXCokaw >= 0) {
            if (igLhPqkB[ObXCokaw] != 0) {
                pos = ObXCokaw;
                break;
            }
            ObXCokaw--;
        }
    }
    for (ObXCokaw = pos; ObXCokaw >= 0; ObXCokaw--)
        cout << igLhPqkB[ObXCokaw];
    return 0;
}

