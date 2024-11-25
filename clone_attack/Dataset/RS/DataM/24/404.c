int main () {
    char T5OejtF78W [(25506 - 506)];
    char Hlvo9rfdEYSj [50] [100];
    int a, FELvMP, cFRxhQkP9Ut, aufnNpjFWX = (935 - 935), AYgCJEAl = ~((593 - 592) << (593 - 562));
    gets (T5OejtF78W);
    int jCL2FoPBr = strlen (T5OejtF78W);
    int smAvDl2rscR = (546 - 546), FOo2pHE = (618 - 618), FhJcCyg;
    for (FhJcCyg = 0; jCL2FoPBr + 1 > FhJcCyg; FhJcCyg = FhJcCyg +1) {
        if (T5OejtF78W[FhJcCyg] != ' ' && T5OejtF78W[FhJcCyg] != '\0') {
            Hlvo9rfdEYSj[smAvDl2rscR][FOo2pHE] = T5OejtF78W[FhJcCyg];
            FOo2pHE++;
        }
        else {
            Hlvo9rfdEYSj[smAvDl2rscR][FOo2pHE] = '\0';
            smAvDl2rscR++;
            FOo2pHE = 0;
        };
    }
    for (FhJcCyg = 0; smAvDl2rscR > FhJcCyg; FhJcCyg++) {
        a = strlen (Hlvo9rfdEYSj[FhJcCyg]);
        if (a > aufnNpjFWX) {
            FELvMP = FhJcCyg;
            aufnNpjFWX = a;
        }
        if (a < AYgCJEAl) {
            AYgCJEAl = a;
            cFRxhQkP9Ut = FhJcCyg;
        };
    }
    printf ("%s\n%s\n", Hlvo9rfdEYSj[FELvMP], Hlvo9rfdEYSj[cFRxhQkP9Ut]);
    return 0;
}

