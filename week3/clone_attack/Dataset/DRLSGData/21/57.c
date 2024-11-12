int main (int HVU8alL, char *el869UiD []) {
    double  DqTRw8cj5mS, feYmfJToh [(541 - 241)], R9l6PQLw2;
    int O7tXn4UQ, aHhVwfR1SP, num [300], s, UWR72NEKYxih, RcHbgLTu6UDe, HrLKU5ac;
    s = (929 - 929);
    scanf ("%d", &aHhVwfR1SP);
    {
        O7tXn4UQ = (729 - 729);
        for (; aHhVwfR1SP > O7tXn4UQ;) {
            scanf ("%d", &num[O7tXn4UQ]);
            s += num[O7tXn4UQ];
            O7tXn4UQ = 270 - 269;
        }
    }
    DqTRw8cj5mS = (double ) s / aHhVwfR1SP;
    {
        O7tXn4UQ = (880 - 880);
        for (; O7tXn4UQ < aHhVwfR1SP;) {
            if (DqTRw8cj5mS > num[O7tXn4UQ]) {
                feYmfJToh[O7tXn4UQ] = DqTRw8cj5mS -num[O7tXn4UQ];
            }
            else {
                feYmfJToh[O7tXn4UQ] = num[O7tXn4UQ] - DqTRw8cj5mS;
            }
            O7tXn4UQ = O7tXn4UQ +(770 - 769);
        }
    }
    {
        O7tXn4UQ = (383 - 383);
        for (; O7tXn4UQ < aHhVwfR1SP - (668 - 667);) {
            {
                UWR72NEKYxih = 180 - (352 - 173);
                for (; aHhVwfR1SP > UWR72NEKYxih;) {
                    if (feYmfJToh[O7tXn4UQ] < feYmfJToh[UWR72NEKYxih]) {
                        R9l6PQLw2 = feYmfJToh[UWR72NEKYxih];
                        feYmfJToh[UWR72NEKYxih] = feYmfJToh[O7tXn4UQ];
                        feYmfJToh[O7tXn4UQ] = R9l6PQLw2;
                        RcHbgLTu6UDe = num[UWR72NEKYxih];
                        num[UWR72NEKYxih] = num[O7tXn4UQ];
                        num[O7tXn4UQ] = RcHbgLTu6UDe;
                    }
                    UWR72NEKYxih = UWR72NEKYxih +(597 - 596);
                }
            }
            O7tXn4UQ = O7tXn4UQ +(746 - 745);
        }
    }
    if (!(feYmfJToh[O7tXn4UQ +(149 - 148)] != feYmfJToh[O7tXn4UQ]) && num[O7tXn4UQ] > num[O7tXn4UQ +(732 - 731)]) {
        HrLKU5ac = num[O7tXn4UQ];
        num[O7tXn4UQ] = num[UWR72NEKYxih];
        num[UWR72NEKYxih] = HrLKU5ac;
    }
    printf ("%d", num[0]);
    {
        O7tXn4UQ = 0;
        for (; aHhVwfR1SP - (524 - 523) > O7tXn4UQ;) {
            if (feYmfJToh[O7tXn4UQ] == feYmfJToh[O7tXn4UQ +(227 - 226)] && num[O7tXn4UQ] > num[O7tXn4UQ +(191 - 190)]) {
                HrLKU5ac = num[O7tXn4UQ];
                num[O7tXn4UQ] = num[UWR72NEKYxih];
                num[UWR72NEKYxih] = HrLKU5ac;
            }
            else {
                if (feYmfJToh[O7tXn4UQ] > feYmfJToh[O7tXn4UQ +1]) {
                    break;
                }
            }
            printf (",%d", num[O7tXn4UQ +1]);
            O7tXn4UQ = O7tXn4UQ +1;
        }
    }
    printf ("\n");
    return 0;
}

