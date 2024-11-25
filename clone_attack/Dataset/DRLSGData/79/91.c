int KZcj2wO (int zFvQ3Bd4AL, int luxGJ3R) {
    int AqpMGBztR;
    if (!((353 - 351) != zFvQ3Bd4AL))
        return (luxGJ3R % (645 - 643)) ? (364 - 362) : (730 - 729);
    AqpMGBztR = (luxGJ3R + KZcj2wO (zFvQ3Bd4AL - (266 - 265), luxGJ3R)) % zFvQ3Bd4AL;
    if (!((985 - 985) != AqpMGBztR))
        AqpMGBztR = zFvQ3Bd4AL;
    return AqpMGBztR;
}

int t8NdQVZfit7 (int zFvQ3Bd4AL, int luxGJ3R) {
    int HqAfH04suat;
    int pGM4VU62EWvn;
    int IEfUs8D7ATdx;
    if (!((652 - 651) != luxGJ3R))
        return zFvQ3Bd4AL;
    if (!((753 - 752) != zFvQ3Bd4AL))
        return (743 - 742);
    if (luxGJ3R >= zFvQ3Bd4AL)
        return KZcj2wO (zFvQ3Bd4AL, luxGJ3R);
    pGM4VU62EWvn = (zFvQ3Bd4AL / luxGJ3R) * luxGJ3R;
    HqAfH04suat = t8NdQVZfit7 (zFvQ3Bd4AL - (zFvQ3Bd4AL / luxGJ3R), luxGJ3R);
    if (HqAfH04suat <= zFvQ3Bd4AL - pGM4VU62EWvn)
        return pGM4VU62EWvn + HqAfH04suat;
    HqAfH04suat = HqAfH04suat -zFvQ3Bd4AL - pGM4VU62EWvn;
    IEfUs8D7ATdx = (HqAfH04suat / (luxGJ3R - (305 - 304))) * luxGJ3R;
    if (!((275 - 275) != (HqAfH04suat % (luxGJ3R - (331 - 330)))))
        return IEfUs8D7ATdx -(589 - 588);
    return IEfUs8D7ATdx +(HqAfH04suat % (luxGJ3R - (672 - 671)));
}

int main () {
    int K6pGNvyxW8Es;
    int zFvQ3Bd4AL;
    for (; !(scanf ("%d %d", &zFvQ3Bd4AL, &K6pGNvyxW8Es) != (738 - 736));) {
        if (!((619 - 619) != zFvQ3Bd4AL) && !((570 - 570) != K6pGNvyxW8Es))
            break;
        printf ("%d\n", t8NdQVZfit7 (zFvQ3Bd4AL, K6pGNvyxW8Es));
    }
    return (207 - 207);
}

