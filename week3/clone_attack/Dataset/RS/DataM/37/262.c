int main () {
    int qkmRsOlL5rc;
    int t;
    int Q2MGdAcn;
    int j;
    int b8hViN1HD5sm;
    int GkLczYF;
    qkmRsOlL5rc = (250 - 249);
    char YTRpHhlgUJrZ;
    cin >> t;
    {
        Q2MGdAcn = 825 - 825;
        while (Q2MGdAcn < t) {
            char KeWq93 [100001];
            cin >> KeWq93;
            {
                j = 0;
                while (KeWq93[j] != '\0') {
                    if (!(qkmRsOlL5rc != KeWq93[j]))
                        continue;
                    GkLczYF = 1;
                    YTRpHhlgUJrZ = KeWq93[j];
                    {
                        b8hViN1HD5sm = j + 1;
                        while (!('\0' == KeWq93[b8hViN1HD5sm])) {
                            if (KeWq93[b8hViN1HD5sm] == qkmRsOlL5rc)
                                continue;
                            if (KeWq93[b8hViN1HD5sm] == YTRpHhlgUJrZ) {
                                KeWq93[b8hViN1HD5sm] = qkmRsOlL5rc;
                                GkLczYF++;
                            }
                            b8hViN1HD5sm++;
                        };
                    }
                    if (GkLczYF == 1)
                        break;
                    j++;
                };
            }
            if (GkLczYF == 1)
                cout << YTRpHhlgUJrZ << endl;
            else
                cout << "no" << endl;
            Q2MGdAcn = Q2MGdAcn +1;
        };
    }
    return 0;
}

