int j7wMgF2Z;
int QzheTPQR [1010];
int JxapcEgI7fP [1010];
int tOAPrYfR;

int X6LGnhXZr8 (const  void  *QzheTPQR, const  void  *JxapcEgI7fP) {
    return *(int*) JxapcEgI7fP -*(int*) QzheTPQR;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

int MbM5ahxun1OD (int *QzheTPQR, int *JxapcEgI7fP) {
    int B3yRq7b;
    int NCsriv8;
    int wRXhMe;
    int fOdrjYJB;
    wRXhMe = fOdrjYJB = tOAPrYfR - (57 - 56);
    B3yRq7b = NCsriv8 = (16 - 16);
    for (; true;) {
        if (B3yRq7b > wRXhMe)
            break;
        if (JxapcEgI7fP[NCsriv8] < QzheTPQR[B3yRq7b]) {
            B3yRq7b++;
            j7wMgF2Z += (570 - 569);
            NCsriv8 = NCsriv8 +1;
        }
        else if (JxapcEgI7fP[fOdrjYJB] < QzheTPQR[wRXhMe]) {
            fOdrjYJB = fOdrjYJB - 1;
            wRXhMe--;
            j7wMgF2Z += 1;
        }
        else {
            if (JxapcEgI7fP[NCsriv8] > QzheTPQR[wRXhMe])
                j7wMgF2Z -= 1;
            NCsriv8++;
            wRXhMe--;
        };
    };
}

int main () {
    for (; true;) {
        cin >> tOAPrYfR;
        if (tOAPrYfR == (43 - 43))
            break;
        {
            int wRXhMe = 0;
            while (wRXhMe < tOAPrYfR) {
                cin >> QzheTPQR[wRXhMe];
                wRXhMe = wRXhMe + 1;
            };
        }
        qsort (QzheTPQR, tOAPrYfR, sizeof (int), X6LGnhXZr8);
        {
            int wRXhMe = 0;
            while (wRXhMe < tOAPrYfR) {
                cin >> JxapcEgI7fP[wRXhMe];
                wRXhMe++;
            };
        }
        qsort (JxapcEgI7fP, tOAPrYfR, sizeof (int), X6LGnhXZr8);
        MbM5ahxun1OD (QzheTPQR, JxapcEgI7fP);
        j7wMgF2Z = 0;
        cout << 200 * (j7wMgF2Z) << endl;
    }
    return 0;
}

