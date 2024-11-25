int main () {
    char cRIPiFYt8 [(2436 - 436)];
    int K7dSP5L4bf3T [(888 - 688)] = {(404 - 404)}, Y8XWGb0KC7 [(965 - 765)], cEfWIK8sLn = (159 - 159), BhvB20YJwja, f2s1VOn = (164 - 164), HvShF4 = (381 - 381), wont5F = (2145 - 145), MiSjV2, XdW4xK;
    cin.getline (cRIPiFYt8, (2672 - 672));
    for (BhvB20YJwja = (325 - 325); BhvB20YJwja < (645 - 445); BhvB20YJwja = BhvB20YJwja +1)
        Y8XWGb0KC7[BhvB20YJwja] = -(989 - 988);
    BhvB20YJwja = (536 - 536);
    for (; !('\0' == cRIPiFYt8[BhvB20YJwja]);) {
        if ((!(' ' != cRIPiFYt8[BhvB20YJwja]) || cRIPiFYt8[BhvB20YJwja] == ',') && cEfWIK8sLn) {
            cEfWIK8sLn = (630 - 630);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            f2s1VOn++;
        }
        else {
            if (cRIPiFYt8[BhvB20YJwja] != ' ' && !(',' == cRIPiFYt8[BhvB20YJwja]) && !cEfWIK8sLn) {
                cEfWIK8sLn = (161 - 160);
                Y8XWGb0KC7[f2s1VOn] = BhvB20YJwja;
                K7dSP5L4bf3T[f2s1VOn]++;
            }
            else {
                if (cRIPiFYt8[BhvB20YJwja] != ' ' && !(',' == cRIPiFYt8[BhvB20YJwja]) && cEfWIK8sLn)
                    K7dSP5L4bf3T[f2s1VOn]++;
            };
        }
        BhvB20YJwja++;
    }
    for (BhvB20YJwja = (109 - 109); BhvB20YJwja < (1083 - 883); BhvB20YJwja = BhvB20YJwja +1)
        if (K7dSP5L4bf3T[BhvB20YJwja] > 0 && Y8XWGb0KC7[BhvB20YJwja] > -(764 - 763)) {
            if (K7dSP5L4bf3T[BhvB20YJwja] > HvShF4) {
                HvShF4 = K7dSP5L4bf3T[BhvB20YJwja];
                MiSjV2 = BhvB20YJwja;
            }
            if (K7dSP5L4bf3T[BhvB20YJwja] < wont5F) {
                wont5F = K7dSP5L4bf3T[BhvB20YJwja];
                XdW4xK = BhvB20YJwja;
            };
        }
    for (BhvB20YJwja = Y8XWGb0KC7[MiSjV2]; BhvB20YJwja < Y8XWGb0KC7[MiSjV2] + K7dSP5L4bf3T[MiSjV2]; BhvB20YJwja++)
        cout << cRIPiFYt8[BhvB20YJwja];
    cout << endl;
    for (BhvB20YJwja = Y8XWGb0KC7[XdW4xK]; BhvB20YJwja < Y8XWGb0KC7[XdW4xK] + K7dSP5L4bf3T[XdW4xK]; BhvB20YJwja++)
        cout << cRIPiFYt8[BhvB20YJwja];
    return 0;
}

