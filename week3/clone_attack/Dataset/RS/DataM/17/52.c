int main () {
    char LqLfumze3W [(333 - 33)], OJyMQA4kgIn [300];
    int BEdNoh [300];
    int l, hCWsb9XnQyi, bNTrtnEHVk3;
    do {
        puts (LqLfumze3W);
        puts (OJyMQA4kgIn);
        if (!(EOF != scanf ("%s", LqLfumze3W)))
            break;
        if (LqLfumze3W[(925 - 925)] == '\0')
            break;
        l = strlen (LqLfumze3W);
        if (!(0 != l))
            break;
        bNTrtnEHVk3 = 0;
        {
            hCWsb9XnQyi = 0;
            while (hCWsb9XnQyi < l) {
                OJyMQA4kgIn[hCWsb9XnQyi] = ' ';
                if (!('(' != LqLfumze3W[hCWsb9XnQyi])) {
                    bNTrtnEHVk3++;
                    BEdNoh[bNTrtnEHVk3] = hCWsb9XnQyi;
                }
                if (LqLfumze3W[hCWsb9XnQyi] == ')') {
                    if (bNTrtnEHVk3 == 0) {
                        OJyMQA4kgIn[hCWsb9XnQyi] = '?';
                        continue;
                    }
                    bNTrtnEHVk3--;
                }
                hCWsb9XnQyi = hCWsb9XnQyi + 1;
            };
        }
        {
            hCWsb9XnQyi = 1;
            while (hCWsb9XnQyi <= bNTrtnEHVk3) {
                OJyMQA4kgIn[BEdNoh[hCWsb9XnQyi]] = '$';
                hCWsb9XnQyi++;
            };
        }
        OJyMQA4kgIn[l] = '\0';
    }
    while (0 == 0);
}

