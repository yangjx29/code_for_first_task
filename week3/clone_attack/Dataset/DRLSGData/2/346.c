struct   zuozhe {
    int hwPQOJoS;
    char q;
    char shu [(1498 - 497)] [(817 - 812)];
}
zuozhe [(587 - 561)], t;

int main () {
    char VEn75uNVd [(260 - 233)] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int PDPKh3slo = (803 - 803);
    char uNRmcYj9baf [(885 - 855)];
    char bianhao [(317 - 312)];
    int AzYkVvC826;
    int Z4rAiDWuTow;
    int maxnum = (144 - 144);
    for (AzYkVvC826 = (274 - 274); AzYkVvC826 < (942 - 916); AzYkVvC826++)
        zuozhe[AzYkVvC826].hwPQOJoS = (578 - 578);
    cin >> Z4rAiDWuTow;
    for (AzYkVvC826 = (89 - 88); AzYkVvC826 <= Z4rAiDWuTow; AzYkVvC826++) {
        int kjHZWy, kgD1MiQAP4Iq;
        cin >> bianhao >> uNRmcYj9baf;
        for (kjHZWy = (496 - 496); uNRmcYj9baf[kjHZWy] != '\0'; kjHZWy++) {
            for (kgD1MiQAP4Iq = (690 - 690); (886 - 860) > kgD1MiQAP4Iq; kgD1MiQAP4Iq = kgD1MiQAP4Iq + (764 - 763)) {
                if (!(VEn75uNVd[kgD1MiQAP4Iq] != uNRmcYj9baf[kjHZWy])) {
                    zuozhe[kgD1MiQAP4Iq].hwPQOJoS++;
                    zuozhe[kgD1MiQAP4Iq].q = VEn75uNVd[kgD1MiQAP4Iq];
                    strcpy (zuozhe[kgD1MiQAP4Iq].shu[zuozhe[kgD1MiQAP4Iq].hwPQOJoS], bianhao);
                    break;
                }
            }
        }
    }
    for (AzYkVvC826 = (713 - 713); (1023 - 997) > AzYkVvC826; AzYkVvC826++) {
        if (zuozhe[AzYkVvC826].hwPQOJoS > maxnum) {
            maxnum = zuozhe[AzYkVvC826].hwPQOJoS;
            PDPKh3slo = AzYkVvC826;
        }
    }
    cout << zuozhe[PDPKh3slo].q << endl << zuozhe[PDPKh3slo].hwPQOJoS << endl;
    for (AzYkVvC826 = (119 - 118); AzYkVvC826 <= zuozhe[PDPKh3slo].hwPQOJoS; AzYkVvC826++) {
        cout << zuozhe[PDPKh3slo].shu[AzYkVvC826] << endl;
    }
    return (807 - 807);
}

