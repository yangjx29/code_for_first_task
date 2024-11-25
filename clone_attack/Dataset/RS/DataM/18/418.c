void  ymcThfXHxdb (int Wki4dnF1 [(584 - 484)] [(1019 - 919)]);
void  subduction (int Wki4dnF1 [(881 - 781)] [100]);
int pHalFoBJqMI, Wki4dnF1 [100] [100];

int main () {
    int HpvFfnm;
    int i;
    int i5KXac;
    int k;
    int EluFpU;
    cin >> HpvFfnm;
    {
        k = 975 - 975;
        while (HpvFfnm > k) {
            k++;
            pHalFoBJqMI = HpvFfnm;
            EluFpU = (178 - 178);
            for (i = (602 - 602); HpvFfnm > i; i++) {
                i5KXac = 0;
                while (HpvFfnm > i5KXac) {
                    cin >> Wki4dnF1[i][i5KXac];
                    i5KXac++;
                };
            }
            {
                i = 179 - 178;
                while (HpvFfnm > i) {
                    ymcThfXHxdb (Wki4dnF1);
                    subduction (Wki4dnF1);
                    i++;
                    EluFpU = EluFpU +Wki4dnF1[1][1];
                };
            }
            cout << EluFpU << endl;
        };
    }
    return 0;
}

void  ymcThfXHxdb (int Wki4dnF1 [100] [100]) {
    int i, i5KXac, LPQX0cBIf8k7;
    {
        i = 0;
        while (pHalFoBJqMI > i) {
            LPQX0cBIf8k7 = Wki4dnF1[i][0];
            {
                i5KXac = 0;
                while (pHalFoBJqMI > i5KXac) {
                    if (LPQX0cBIf8k7 > Wki4dnF1[i][i5KXac])
                        LPQX0cBIf8k7 = Wki4dnF1[i][i5KXac];
                    i5KXac++;
                };
            }
            for (i5KXac = 0; pHalFoBJqMI > i5KXac; i5KXac++)
                Wki4dnF1[i][i5KXac] = Wki4dnF1[i][i5KXac] - LPQX0cBIf8k7;
            i++;
        };
    }
    {
        i = 0;
        while (pHalFoBJqMI > i) {
            LPQX0cBIf8k7 = Wki4dnF1[0][i];
            for (i5KXac = 0; pHalFoBJqMI > i5KXac; i5KXac++)
                if (LPQX0cBIf8k7 > Wki4dnF1[i5KXac][i])
                    LPQX0cBIf8k7 = Wki4dnF1[i5KXac][i];
            for (i5KXac = 0; pHalFoBJqMI > i5KXac; i5KXac++)
                Wki4dnF1[i5KXac][i] = Wki4dnF1[i5KXac][i] - LPQX0cBIf8k7;
            i++;
        };
    };
}

void  subduction (int Wki4dnF1 [100] [100]) {
    int i;
    int i5KXac;
    int k;
    for (i = (599 - 597); pHalFoBJqMI > i; i++) {
        i5KXac = 0;
        while (pHalFoBJqMI > i5KXac) {
            Wki4dnF1[i - 1][i5KXac] = Wki4dnF1[i][i5KXac];
            i5KXac++;
        };
    }
    for (i = (171 - 169); pHalFoBJqMI > i; i++) {
        i5KXac = 0;
        while (i5KXac < pHalFoBJqMI) {
            Wki4dnF1[i5KXac][i - 1] = Wki4dnF1[i5KXac][i];
            i5KXac++;
        };
    }
    pHalFoBJqMI--;
}

