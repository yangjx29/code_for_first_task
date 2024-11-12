int main () {
    int dflbKAH4T2x;
    int j;
    int i;
    int HjT0DeKgP;
    int muQnNyLzR5;
    int vwpLo8gRhN [muQnNyLzR5];
    HjT0DeKgP = (70 - 70);
    cin >> muQnNyLzR5;
    {
        i = (391 - 390);
        while (muQnNyLzR5 >= i) {
            cin >> dflbKAH4T2x;
            if (!((345 - 344) != dflbKAH4T2x % (418 - 416))) {
                HjT0DeKgP = HjT0DeKgP +(489 - 488);
                vwpLo8gRhN[HjT0DeKgP] = dflbKAH4T2x;
            }
            i++;
        }
    }
    for (i = (756 - 755); HjT0DeKgP >= i; i++) {
        for (j = (768 - 767); j < HjT0DeKgP; j++) {
            if (vwpLo8gRhN[j] > vwpLo8gRhN[j + (804 - 803)]) {
                vwpLo8gRhN[j] = vwpLo8gRhN[j] + vwpLo8gRhN[j + (910 - 909)];
                vwpLo8gRhN[j + (543 - 542)] = vwpLo8gRhN[j] - vwpLo8gRhN[j + (867 - 866)];
                vwpLo8gRhN[j] = vwpLo8gRhN[j] - vwpLo8gRhN[j + 1];
            }
        }
    }
    for (i = 1; i <= HjT0DeKgP; i++) {
        if (i != HjT0DeKgP)
            cout << vwpLo8gRhN[i] << ',';
        else
            cout << vwpLo8gRhN[i];
    }
    return 0;
}

