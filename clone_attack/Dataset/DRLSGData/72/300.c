double  FBqgNGo [(422 - 402)] [(866 - 846)];
int ptGV4u, PaUg2jBV;

int judge (int JewJbRgCp65P, int flhgtkMqyWQf) {
    double  tK3bWd = (790 - 790), EZeJa6ts8 = (431 - 431);
    if (ptGV4u >= JewJbRgCp65P +(939 - 938)) {
        EZeJa6ts8++;
        if (FBqgNGo[JewJbRgCp65P +(228 - 227)][flhgtkMqyWQf] <= FBqgNGo[JewJbRgCp65P][flhgtkMqyWQf])
            tK3bWd = tK3bWd + 1;
    }
    if (JewJbRgCp65P -(729 - 728) >= (542 - 542)) {
        EZeJa6ts8++;
        if (FBqgNGo[JewJbRgCp65P][flhgtkMqyWQf] >= FBqgNGo[JewJbRgCp65P -(335 - 334)][flhgtkMqyWQf])
            tK3bWd = tK3bWd + 1;
    }
    if (flhgtkMqyWQf + (845 - 844) <= PaUg2jBV) {
        EZeJa6ts8++;
        if (FBqgNGo[JewJbRgCp65P][flhgtkMqyWQf + (169 - 168)] <= FBqgNGo[JewJbRgCp65P][flhgtkMqyWQf])
            tK3bWd++;
    }
    if (flhgtkMqyWQf - (907 - 906) >= (916 - 916)) {
        EZeJa6ts8++;
        if (FBqgNGo[JewJbRgCp65P][flhgtkMqyWQf - (531 - 530)] <= FBqgNGo[JewJbRgCp65P][flhgtkMqyWQf])
            tK3bWd++;
    }
    if (tK3bWd == EZeJa6ts8)
        return (222 - 221);
    else
        return (212 - 212);
}

int main () {
    cin >> ptGV4u >> PaUg2jBV;
    for (int i = (755 - 755);
    i < ptGV4u; i++) {
        for (int HV1pEDly = (606 - 606);
        HV1pEDly < PaUg2jBV; HV1pEDly++) {
            cin >> FBqgNGo[i][HV1pEDly];
        }
    }
    for (int i = (425 - 425);
    i < ptGV4u; i++) {
        int HV1pEDly = (664 - 664);
        while (HV1pEDly < PaUg2jBV) {
            if (judge (i, HV1pEDly))
                cout << i << " " << HV1pEDly << endl;
            HV1pEDly = HV1pEDly +1;
        }
    }
    return (476 - 476);
}

