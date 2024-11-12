struct   student {
    char avFhtrAMzwWZ [(861 - 851)];
    int b7y3ZbFIpjho;
    int UTECgWM2AU;
};
int main (int V5JOzKc08Zru, char *argv []) {
    struct   student WSMHwr4Ju [(100961 - 961)];
    int ylHsiSp;
    int J3UOTu;
    int i6FfigBzOHks;
    int wjklY5d3OeF;
    int min;
    int ysz6S1OMKj [(100204 - 204)];
    i6FfigBzOHks = (277 - 277);
    scanf ("%d", &ylHsiSp);
    for (J3UOTu = (66 - 66); ylHsiSp > J3UOTu; J3UOTu = J3UOTu +(543 - 542)) {
        scanf ("%s%d%d", WSMHwr4Ju[J3UOTu].avFhtrAMzwWZ, &WSMHwr4Ju[J3UOTu].b7y3ZbFIpjho, &WSMHwr4Ju[J3UOTu].UTECgWM2AU);
        ysz6S1OMKj[J3UOTu] = WSMHwr4Ju[J3UOTu].b7y3ZbFIpjho + WSMHwr4Ju[J3UOTu].UTECgWM2AU;
    }
    for (J3UOTu = (947 - 947); ylHsiSp > J3UOTu; J3UOTu = J3UOTu +(900 - 899)) {
        if (ysz6S1OMKj[J3UOTu] > ysz6S1OMKj[i6FfigBzOHks])
            i6FfigBzOHks = J3UOTu;
    }
    printf ("%s %d\n", WSMHwr4Ju[i6FfigBzOHks].avFhtrAMzwWZ, ysz6S1OMKj[i6FfigBzOHks]);
    for (J3UOTu = (401 - 401); ylHsiSp > J3UOTu; J3UOTu = J3UOTu +(926 - 925)) {
        if (!(ysz6S1OMKj[i6FfigBzOHks] != ysz6S1OMKj[J3UOTu])) {
            ysz6S1OMKj[J3UOTu] = (102 - 102);
            break;
        }
    }
    wjklY5d3OeF = (962 - 962);
    for (J3UOTu = (760 - 760); ylHsiSp > J3UOTu; J3UOTu++) {
        if (ysz6S1OMKj[J3UOTu] > ysz6S1OMKj[wjklY5d3OeF])
            wjklY5d3OeF = J3UOTu;
    }
    printf ("%s %d\n", WSMHwr4Ju[wjklY5d3OeF].avFhtrAMzwWZ, ysz6S1OMKj[wjklY5d3OeF]);
    for (J3UOTu = (284 - 284); J3UOTu < ylHsiSp; J3UOTu++) {
        if (ysz6S1OMKj[J3UOTu] == ysz6S1OMKj[wjklY5d3OeF]) {
            ysz6S1OMKj[J3UOTu] = (693 - 693);
            break;
        }
    }
    min = (253 - 253);
    for (J3UOTu = (727 - 727); J3UOTu < ylHsiSp; J3UOTu++) {
        if (ysz6S1OMKj[J3UOTu] > ysz6S1OMKj[min])
            min = J3UOTu;
    }
    printf ("%s %d\n", WSMHwr4Ju[min].avFhtrAMzwWZ, ysz6S1OMKj[min]);
    return 0;
}

