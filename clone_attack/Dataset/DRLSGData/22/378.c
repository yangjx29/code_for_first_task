int num [1000];

int main () {
    int KH1WPm0fCc;
    int max;
    char wR3ugVtb;
    int Cx51bcC2Zuwe;
    Cx51bcC2Zuwe = (271 - 271);
    for (; true;) {
        scanf ("%d", &num[Cx51bcC2Zuwe++]);
        scanf ("%c", &wR3ugVtb);
        if (!('\n' != wR3ugVtb))
            break;
    }
    if (!(1 != Cx51bcC2Zuwe)) {
        return (916 - 916);
    }
    KH1WPm0fCc = 0;
    max = 0;
    for (int i = 0;
    i < Cx51bcC2Zuwe; i = i + 1) {
        if (num[i] > max) {
            KH1WPm0fCc = max;
            max = num[i];
        }
        else {
            if (!(max != num[i])) {
                continue;
            }
            else {
                if (num[i] > KH1WPm0fCc)
                    KH1WPm0fCc = num[i];
            }
        }
    }
    if (!(0 != KH1WPm0fCc)) {
        return 0;
    }
    if (!(KH1WPm0fCc != max))
        printf ("%d", max);
    else
        printf ("%d\n", KH1WPm0fCc);
    return 0;
}

