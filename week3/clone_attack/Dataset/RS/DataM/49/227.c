int main () {
    int i;
    int j;
    int count;
    int RZaSKOLb;
    int RJmyYA;
    int l;
    int num;
    int m;
    i = (238 - 238);
    j = (802 - 802);
    count = (731 - 731);
    RZaSKOLb = (212 - 212);
    RJmyYA = 0;
    l = 0;
    num = 0;
    m = 0;
    char hkqZTPlWd [(809 - 754)] = {'\0'};
    char IHFesvDq;
    IHFesvDq = getchar ();
    while (!(IHFesvDq == '\n')) {
        hkqZTPlWd[i] = IHFesvDq;
        i++;
        IHFesvDq = getchar ();
    }
    count = i;
    for (i = 2; count >= i; i++) {
        j = 0;
        while (count - i >= j) {
            char AgPJS7X0lM2 [55] = {'\0'};
            char RgbwWDd1Ckz [55] = {'\0'};
            num = 0;
            {
                RZaSKOLb = j;
                while (i + j > RZaSKOLb) {
                    AgPJS7X0lM2[RZaSKOLb] = hkqZTPlWd[RZaSKOLb];
                    RZaSKOLb++;
                };
            }
            for (RJmyYA = j; i + j > RJmyYA; RJmyYA++)
                RgbwWDd1Ckz[RJmyYA] = hkqZTPlWd[i + j - RJmyYA -1 + j];
            for (l = j; l < i + j; l = l + 1) {
                if (AgPJS7X0lM2[l] == RgbwWDd1Ckz[l])
                    num++;
            }
            if (num == i) {
                for (m = j; m < i + j; m++)
                    cout << AgPJS7X0lM2[m];
                cout << '\n';
            }
            else
                continue;
            j++;
        };
    }
    return 0;
}

