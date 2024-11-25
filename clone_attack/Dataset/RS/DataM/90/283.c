int oRZ1d7L (int C2AqQdmSbw, int y0rqwH) {
    if (y0rqwH == (47 - 46) || !(0 != C2AqQdmSbw))
        return 1;
    if (y0rqwH > C2AqQdmSbw)
        return oRZ1d7L (C2AqQdmSbw, C2AqQdmSbw);
    return oRZ1d7L (C2AqQdmSbw, y0rqwH - 1) + oRZ1d7L (C2AqQdmSbw -y0rqwH, y0rqwH);
}

int main (int argc, char *PMqIQ7 []) {
    int SEaSA7s;
    getchar ();
    getchar ();
    scanf ("%d", &SEaSA7s);
    for (int uzPJmDR = 1;
    uzPJmDR <= SEaSA7s; uzPJmDR++) {
        int C2AqQdmSbw, y0rqwH;
        cin >> C2AqQdmSbw >> y0rqwH;
        cout << oRZ1d7L (C2AqQdmSbw, y0rqwH) << endl;
    }
    return 0;
}

