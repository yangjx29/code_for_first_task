int main () {
    int prnghNpXz3, H8QHiad1n;
    int Tf0rJEIdY6 [(438 - 427)] [(569 - 558)];
    int yWQe8nD [(741 - 730)] [11];
    int kagBtsL32f9, zITA532hOl;
    {
        kagBtsL32f9 = (265 - 265);
        while ((371 - 361) >= kagBtsL32f9) {
            {
                zITA532hOl = (337 - 337);
                while ((405 - 395) >= zITA532hOl) {
                    Tf0rJEIdY6[kagBtsL32f9][zITA532hOl] = (28 - 28);
                    yWQe8nD[kagBtsL32f9][zITA532hOl] = (304 - 304);
                    zITA532hOl++;
                }
            }
            kagBtsL32f9++;
        }
    }
    cin >> prnghNpXz3 >> H8QHiad1n;
    Tf0rJEIdY6[(369 - 364)][5] = prnghNpXz3;
    yWQe8nD[5][5] = prnghNpXz3;
    while (H8QHiad1n--) {
        {
            kagBtsL32f9 = 0;
            while (kagBtsL32f9 <= (568 - 558)) {
                {
                    zITA532hOl = 0;
                    while (zITA532hOl <= 10) {
                        Tf0rJEIdY6[kagBtsL32f9][zITA532hOl] = 0;
                        zITA532hOl++;
                    }
                }
                kagBtsL32f9++;
            }
        }
        {
            kagBtsL32f9 = (859 - 858);
            while (kagBtsL32f9 <= (192 - 183)) {
                {
                    zITA532hOl = (416 - 415);
                    while (9 >= zITA532hOl) {
                        if (yWQe8nD[kagBtsL32f9][zITA532hOl] != 0) {
                            Tf0rJEIdY6[kagBtsL32f9][zITA532hOl] += (2 * yWQe8nD[kagBtsL32f9][zITA532hOl]);
                            Tf0rJEIdY6[kagBtsL32f9 - (811 - 810)][zITA532hOl] += yWQe8nD[kagBtsL32f9][zITA532hOl];
                            Tf0rJEIdY6[kagBtsL32f9 + (174 - 173)][zITA532hOl] += yWQe8nD[kagBtsL32f9][zITA532hOl];
                            Tf0rJEIdY6[kagBtsL32f9 - (816 - 815)][zITA532hOl - (461 - 460)] += yWQe8nD[kagBtsL32f9][zITA532hOl];
                            Tf0rJEIdY6[kagBtsL32f9 + (630 - 629)][zITA532hOl - (175 - 174)] += yWQe8nD[kagBtsL32f9][zITA532hOl];
                            Tf0rJEIdY6[kagBtsL32f9 - 1][zITA532hOl + 1] += yWQe8nD[kagBtsL32f9][zITA532hOl];
                            Tf0rJEIdY6[kagBtsL32f9 + 1][zITA532hOl + 1] += yWQe8nD[kagBtsL32f9][zITA532hOl];
                            Tf0rJEIdY6[kagBtsL32f9][zITA532hOl - 1] += yWQe8nD[kagBtsL32f9][zITA532hOl];
                            Tf0rJEIdY6[kagBtsL32f9][zITA532hOl + 1] += yWQe8nD[kagBtsL32f9][zITA532hOl];
                        }
                        zITA532hOl++;
                    }
                }
                kagBtsL32f9++;
            }
        }
        {
            kagBtsL32f9 = 1;
            while (kagBtsL32f9 <= 9) {
                {
                    zITA532hOl = 1;
                    while (zITA532hOl <= 9) {
                        yWQe8nD[kagBtsL32f9][zITA532hOl] = Tf0rJEIdY6[kagBtsL32f9][zITA532hOl];
                        zITA532hOl++;
                    }
                }
                kagBtsL32f9++;
            }
        }
    }
    {
        kagBtsL32f9 = 1;
        while (kagBtsL32f9 <= 9) {
            {
                zITA532hOl = 1;
                while (zITA532hOl <= 9) {
                    if (zITA532hOl != 1)
                        cout << " ";
                    cout << Tf0rJEIdY6[kagBtsL32f9][zITA532hOl];
                    zITA532hOl++;
                }
            }
            cout << endl;
            kagBtsL32f9++;
        }
    }
    return 0;
}

