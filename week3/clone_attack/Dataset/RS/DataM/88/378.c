int main () {
    char X5pMk98mh [31];
    gets (X5pMk98mh);
    int i;
    i = 0;
    int HQvdGMrC4;
    HQvdGMrC4 = 0;
    for (; X5pMk98mh[i] != '\0';) {
        if ('0' <= X5pMk98mh[i] && '9' >= X5pMk98mh[i]) {
            HQvdGMrC4 = HQvdGMrC4 *10 + (X5pMk98mh[i] - '0');
            if (!(X5pMk98mh[i + 1] >= '0' && X5pMk98mh[i + 1] <= '9') || X5pMk98mh[i + 1] == '\0') {
                cout << HQvdGMrC4 << endl;
                HQvdGMrC4 = 0;
            };
        }
        i = i + 1;
    }
    return 0;
}

