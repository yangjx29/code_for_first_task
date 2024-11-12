int main () {
    int CIzpXMN;
    struct   bOYb7c {
        int Ic1nAkGbH, mWvgcwT4B, mafJwmizN, T5NAxWhZ, N6a8zPN7, ZS4w7gduUDR1;
        double  QCS7qN;
    }
    bOYb7c [1000];
    struct   QVKv5d {
        int tpIV0Y6XS, y, r4qRMds;
    }
    QVKv5d [(1796 - 796)];
    int uz2R57TYwuZ, xBF8uOSQ1, slnbhxg0d;
    int MEjoZu;
    MEjoZu = 0;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    scanf ("%d", &uz2R57TYwuZ);
    {
        slnbhxg0d = 0;
        while (slnbhxg0d < uz2R57TYwuZ) {
            scanf ("%d%d%d", &(QVKv5d[slnbhxg0d].tpIV0Y6XS), &(QVKv5d[slnbhxg0d].y), &(QVKv5d[slnbhxg0d].r4qRMds));
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
            slnbhxg0d++;
        };
    }
    {
        slnbhxg0d = 0;
        while (uz2R57TYwuZ - (894 - 893) > slnbhxg0d) {
            for (xBF8uOSQ1 = slnbhxg0d + (592 - 591); uz2R57TYwuZ > xBF8uOSQ1; xBF8uOSQ1 = xBF8uOSQ1 + 1) {
                int Len9goxXU;
                int SzpWi3sK2;
                int srDk2sjSF;
                double  vSMulfKj;
                bOYb7c[MEjoZu].Ic1nAkGbH = QVKv5d[slnbhxg0d].tpIV0Y6XS;
                bOYb7c[MEjoZu].mWvgcwT4B = QVKv5d[xBF8uOSQ1].tpIV0Y6XS;
                bOYb7c[MEjoZu].mafJwmizN = QVKv5d[slnbhxg0d].y;
                bOYb7c[MEjoZu].T5NAxWhZ = QVKv5d[xBF8uOSQ1].y;
                bOYb7c[MEjoZu].N6a8zPN7 = QVKv5d[slnbhxg0d].r4qRMds;
                bOYb7c[MEjoZu].ZS4w7gduUDR1 = QVKv5d[xBF8uOSQ1].r4qRMds;
                Len9goxXU = bOYb7c[MEjoZu].Ic1nAkGbH - bOYb7c[MEjoZu].mWvgcwT4B;
                SzpWi3sK2 = bOYb7c[MEjoZu].mafJwmizN - bOYb7c[MEjoZu].T5NAxWhZ;
                srDk2sjSF = bOYb7c[MEjoZu].N6a8zPN7 - bOYb7c[MEjoZu].ZS4w7gduUDR1;
                vSMulfKj = Len9goxXU *Len9goxXU+SzpWi3sK2*SzpWi3sK2+srDk2sjSF * srDk2sjSF;
                bOYb7c[MEjoZu].QCS7qN = sqrt (vSMulfKj);
                MEjoZu = MEjoZu +1;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            slnbhxg0d++;
        };
    }
    CIzpXMN = MEjoZu;
    {
        slnbhxg0d = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (slnbhxg0d <= CIzpXMN) {
            {
                xBF8uOSQ1 = 0;
                while (xBF8uOSQ1 < CIzpXMN -slnbhxg0d) {
                    if ((bOYb7c[xBF8uOSQ1 + 1].QCS7qN) > (bOYb7c[xBF8uOSQ1].QCS7qN)) {
                        bOYb7c[1000] = bOYb7c[xBF8uOSQ1 + 1];
                        bOYb7c[xBF8uOSQ1 + 1] = bOYb7c[xBF8uOSQ1];
                        bOYb7c[xBF8uOSQ1] = bOYb7c[1000];
                    }
                    xBF8uOSQ1++;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    for (x = 0; x < 20; x++) {
                        y += x;
                    }
                    if (y > 30)
                        return y;
                }
            }
            slnbhxg0d++;
        };
    }
    for (MEjoZu = 0; MEjoZu < CIzpXMN; MEjoZu++) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", bOYb7c[MEjoZu].Ic1nAkGbH, bOYb7c[MEjoZu].mafJwmizN, bOYb7c[MEjoZu].N6a8zPN7, bOYb7c[MEjoZu].mWvgcwT4B, bOYb7c[MEjoZu].T5NAxWhZ, bOYb7c[MEjoZu].ZS4w7gduUDR1, bOYb7c[MEjoZu].QCS7qN);
    }
    return 0;
}

