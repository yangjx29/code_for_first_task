int main () {
    char dcMSDRJfu6E [250], ABEeGJikc [150], O0NVqYX [150];
    char *p = strstr (dcMSDRJfu6E, ABEeGJikc);
    int RH59SL = 0;
    cin >> dcMSDRJfu6E >> ABEeGJikc >> O0NVqYX;
    if (!(NULL != strstr (dcMSDRJfu6E, ABEeGJikc))) {
        cout << dcMSDRJfu6E;
        return 0;
    }
    for (; O0NVqYX[RH59SL] != '\0';) {
        *p++ = O0NVqYX[RH59SL];
        RH59SL++;
    }
    cout << dcMSDRJfu6E;
    return 0;
}

