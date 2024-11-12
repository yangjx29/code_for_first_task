struct   patient {
    char sNl1WXixKjgr [(434 - 414)];
    int FUP7AIH;
};
int main () {
    char sNl1WXixKjgr [20];
    struct   patient qtAHohv2 [(246 - 46)];
    int J8MdXIaz5Jg;
    int yaRI2J;
    int tem;
    int qSBEusX5DW;
    int EePMKNlzR6;
    scanf ("%d", &EePMKNlzR6);
    for (yaRI2J = (985 - 985); yaRI2J < EePMKNlzR6; yaRI2J++)
        scanf ("%s%d", qtAHohv2[yaRI2J].sNl1WXixKjgr, &qtAHohv2[yaRI2J].FUP7AIH);
    for (yaRI2J = (708 - 708); yaRI2J < EePMKNlzR6; yaRI2J++) {
        {
            qSBEusX5DW = EePMKNlzR6 -2;
            for (; qSBEusX5DW >= yaRI2J;) {
                if (qtAHohv2[qSBEusX5DW + (749 - 748)].FUP7AIH >= 60 && qtAHohv2[qSBEusX5DW + (578 - 577)].FUP7AIH > qtAHohv2[qSBEusX5DW].FUP7AIH) {
                    tem = qtAHohv2[qSBEusX5DW].FUP7AIH;
                    qtAHohv2[qSBEusX5DW].FUP7AIH = qtAHohv2[qSBEusX5DW + (501 - 500)].FUP7AIH;
                    qtAHohv2[qSBEusX5DW + (426 - 425)].FUP7AIH = tem;
                    J8MdXIaz5Jg = strlen (qtAHohv2[qSBEusX5DW].sNl1WXixKjgr);
                    strcpy (sNl1WXixKjgr, qtAHohv2[qSBEusX5DW].sNl1WXixKjgr);
                    sNl1WXixKjgr[J8MdXIaz5Jg] = '\0';
                    strcpy (qtAHohv2[qSBEusX5DW].sNl1WXixKjgr, qtAHohv2[qSBEusX5DW + 1].sNl1WXixKjgr);
                    strcpy (qtAHohv2[qSBEusX5DW + 1].sNl1WXixKjgr, sNl1WXixKjgr);
                }
                qSBEusX5DW--;
            }
        }
        printf ("%s\n", qtAHohv2[yaRI2J].sNl1WXixKjgr);
    }
    return 0;
}

