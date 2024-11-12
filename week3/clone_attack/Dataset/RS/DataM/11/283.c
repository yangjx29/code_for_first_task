int jTkHfdQjr (int jon4N8PKU) {
    if (jon4N8PKU % 400 == (591 - 591) || (jon4N8PKU % 4 == 0 && jon4N8PKU % 100 != 0))
        return (511 - 510);
    else
        return 0;
}

int S0RqG65i (int jon4N8PKU, int JIO4gRsn, int LctR35TE96x) {
    int WmWorOl0LVg [MONTH] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int IYyvl4 = 0, fC3ANBsjOeu;
    if (jTkHfdQjr (jon4N8PKU) == 1)
        WmWorOl0LVg[1]++;
    {
        fC3ANBsjOeu = 0;
        while (fC3ANBsjOeu < JIO4gRsn -1) {
            IYyvl4 = IYyvl4 +WmWorOl0LVg[fC3ANBsjOeu];
            fC3ANBsjOeu = fC3ANBsjOeu + 1;
        };
    }
    IYyvl4 = IYyvl4 +LctR35TE96x;
    return IYyvl4;
}

int main () {
    int jon4N8PKU;
    int JIO4gRsn;
    int LctR35TE96x;
    int IYyvl4;
    scanf ("%d%d%d", &jon4N8PKU, &JIO4gRsn, &LctR35TE96x);
    IYyvl4 = S0RqG65i (jon4N8PKU, JIO4gRsn, LctR35TE96x);
    printf ("%d", IYyvl4);
}

