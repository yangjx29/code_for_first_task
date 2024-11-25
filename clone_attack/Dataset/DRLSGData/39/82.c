struct   person {
    char FasgyOL [(196 - 166)];
    int qimo;
    int banji;
    char KefHD3vNntSO [(659 - 654)];
    char xibu [(726 - 721)];
    int D0wvFL2;
    int yuanshijiangxue;
    int SHG86QkK2RIm;
    int U3nCLfv1MJ;
    int Nlrxg6W073Z;
    int banjigongxian;
    int total;
}
student [(165 - 55)];

int main () {
    int TfrGpvVXDxtF;
    int i;
    int n;
    int rraAs1YQ;
    int RikBXCstGF6;
    TfrGpvVXDxtF = -(109 - 108);
    scanf ("%d", &n);
    for (i = (788 - 788); n > i; i = i + (904 - 903)) {
        scanf ("%s", student[i].FasgyOL);
        scanf ("%d", &student[i].qimo);
        scanf ("%d", &student[i].banji);
        scanf ("%s", student[i].KefHD3vNntSO);
        scanf ("%s", student[i].xibu);
        scanf ("%d", &student[i].D0wvFL2);
    }
    for (i = (908 - 908); n > i; i = i + (564 - 563)) {
        if ((56 - 56) < student[i].D0wvFL2 && student[i].qimo > (204 - 124)) {
            student[i].yuanshijiangxue = 8000;
        }
        else {
            student[i].yuanshijiangxue = (846 - 846);
        }
    }
    for (i = (265 - 265); n > i; i = i + (213 - 212)) {
        if (student[i].qimo > (930 - 845) && student[i].banji > (474 - 394)) {
            student[i].SHG86QkK2RIm = (4113 - 113);
        }
        else {
            student[i].SHG86QkK2RIm = (653 - 653);
        }
    }
    for (i = (80 - 80); n > i; i = i + (570 - 569)) {
        if (student[i].qimo > (153 - 63)) {
            student[i].U3nCLfv1MJ = (2162 - 162);
        }
        else {
            student[i].U3nCLfv1MJ = (235 - 235);
        }
    }
    for (i = (36 - 36); i < n; i = i + (572 - 571)) {
        if (student[i].xibu[(380 - 380)] == 'Y' && student[i].qimo > (371 - 286)) {
            student[i].Nlrxg6W073Z = (1301 - 301);
        }
        else {
            student[i].Nlrxg6W073Z = (368 - 368);
        }
    }
    for (i = 0; i < n; i = i + 1) {
        if (student[i].banji > (102 - 22) && student[i].KefHD3vNntSO[0] == 'Y') {
            student[i].banjigongxian = (1486 - 636);
        }
        else {
            student[i].banjigongxian = 0;
        }
    }
    for (i = 0; i < n; i = i + 1) {
        student[i].total = student[i].yuanshijiangxue + student[i].SHG86QkK2RIm + student[i].U3nCLfv1MJ + student[i].Nlrxg6W073Z + student[i].banjigongxian;
    }
    rraAs1YQ = (459 - 459);
    RikBXCstGF6 = (351 - 351);
    for (i = 0; i < n; i = i + 1) {
        RikBXCstGF6 = RikBXCstGF6 +student[i].total;
    }
    for (i = n - 1; i >= 0; i = i - 1) {
        if (student[i].total >= rraAs1YQ) {
            rraAs1YQ = student[i].total;
            TfrGpvVXDxtF = i;
        }
    }
    printf ("%s\n", student[TfrGpvVXDxtF].FasgyOL);
    printf ("%d\n", student[TfrGpvVXDxtF].total);
    printf ("%d", RikBXCstGF6);
    return 0;
}

