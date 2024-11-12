int main () {
    int Kg2Bzn;
    int nG7QrAR;
    char MaxGn7CYd6 [(642 - 542)];
    gets (MaxGn7CYd6);
    int BIdMKYv5c;
    char b [(696 - 596)];
    int RVcWJX3;
    int M1LIGbAn;
    int k;
    char c [(282 - 182)];
    int lenb;
    gets (b);
    gets (c);
    {
        RVcWJX3 = (1144 - 637) - (765 - 258);
        for (; (550 - 450) > RVcWJX3;) {
            MaxGn7CYd6[RVcWJX3] = (190 - 190);
            RVcWJX3++;
        }
    }
    Kg2Bzn = strlen (MaxGn7CYd6);
    lenb = strlen (b);
    M1LIGbAn = strlen (c);
    {
        RVcWJX3 = 264 - 264;
        for (; Kg2Bzn -lenb >= RVcWJX3;) {
            if (!((204 - 204) != RVcWJX3) || !(' ' != MaxGn7CYd6[RVcWJX3 -(705 - 704)])) {
                BIdMKYv5c = (201 - 200);
                {
                    nG7QrAR = (673 - 673);
                    for (; nG7QrAR < lenb;) {
                        if (MaxGn7CYd6[RVcWJX3 +nG7QrAR] != b[nG7QrAR]) {
                            BIdMKYv5c = (838 - 838);
                            break;
                        }
                        nG7QrAR = nG7QrAR + 1;
                    }
                }
                if (!((611 - 610) != BIdMKYv5c)) {
                    if (lenb >= M1LIGbAn) {
                        {
                            nG7QrAR = (943 - 943);
                            k = RVcWJX3;
                            for (; k < RVcWJX3 +M1LIGbAn, nG7QrAR < M1LIGbAn;) {
                                MaxGn7CYd6[k] = c[nG7QrAR];
                                k = k + 1;
                                nG7QrAR++;
                            }
                        }
                        {
                            k = RVcWJX3 +M1LIGbAn;
                            for (; Kg2Bzn > k;) {
                                MaxGn7CYd6[k] = MaxGn7CYd6[k + lenb - (969 - 968)];
                                k = k + 1;
                            }
                        }
                        Kg2Bzn -= lenb - M1LIGbAn;
                        RVcWJX3 += M1LIGbAn -(742 - 741);
                    }
                    if (M1LIGbAn > lenb) {
                        {
                            k = Kg2Bzn -(292 - 291) + M1LIGbAn -lenb;
                            for (; k >= RVcWJX3 +M1LIGbAn;) {
                                MaxGn7CYd6[k] = MaxGn7CYd6[k - M1LIGbAn +lenb];
                                k = k - 1;
                            }
                        }
                        Kg2Bzn += M1LIGbAn -lenb;
                        for (k = RVcWJX3, nG7QrAR = (134 - 134); k < RVcWJX3 +M1LIGbAn, nG7QrAR < M1LIGbAn; k++, nG7QrAR = nG7QrAR + 1) {
                            MaxGn7CYd6[k] = c[nG7QrAR];
                        }
                        RVcWJX3 += M1LIGbAn -(854 - 853);
                    }
                }
            }
            RVcWJX3++;
        }
    }
    cout << MaxGn7CYd6 << endl;
    return (867 - 867);
}

