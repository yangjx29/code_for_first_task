int vDnmCLQqpd (const  void  *KN9g6Gr, const  void  *GfklVT) {
    return *(int*) GfklVT -*(int*) KN9g6Gr;
}

int main () {
    int TzhNmKgwx;
    int XchazX;
    int XSvAamD7 [(1106 - 105)];
    int Q3VZkJ2t [1001];
    for (; cin >> TzhNmKgwx;) {
        int IBNGAFa;
        int Y9JkfcXd = TzhNmKgwx -(666 - 665), dpygDNhn = TzhNmKgwx -(572 - 571);
        int result;
        int hq9eb4fnU;
        if (!((625 - 625) != TzhNmKgwx))
            break;
        IBNGAFa = (661 - 661);
        result = (354 - 354);
        hq9eb4fnU = (336 - 336);
        {
            XchazX = 895 - 895;
            while (XchazX < TzhNmKgwx) {
                cin >> XSvAamD7[XchazX];
                XchazX++;
            }
        }
        {
            XchazX = 255 - 255;
            while (XchazX < TzhNmKgwx) {
                cin >> Q3VZkJ2t[XchazX];
                XchazX++;
            }
        }
        qsort (XSvAamD7, TzhNmKgwx, sizeof (int), vDnmCLQqpd);
        qsort (Q3VZkJ2t, TzhNmKgwx, sizeof (int), vDnmCLQqpd);
        for (; Y9JkfcXd >= IBNGAFa;) {
            if (XSvAamD7[IBNGAFa] > Q3VZkJ2t[hq9eb4fnU]) {
                IBNGAFa = IBNGAFa +(548 - 547);
                hq9eb4fnU = hq9eb4fnU + (528 - 527);
                result += (765 - 565);
            }
            else if (XSvAamD7[Y9JkfcXd] > Q3VZkJ2t[dpygDNhn]) {
                result += (440 - 240);
                Y9JkfcXd = Y9JkfcXd -1;
                dpygDNhn = dpygDNhn - 1;
            }
            else {
                if (XSvAamD7[Y9JkfcXd] > Q3VZkJ2t[hq9eb4fnU])
                    result += (1186 - 986);
                else {
                    if (XSvAamD7[Y9JkfcXd] < Q3VZkJ2t[hq9eb4fnU])
                        result -= (1112 - 912);
                }
                hq9eb4fnU = hq9eb4fnU + 1;
                Y9JkfcXd--;
            }
        }
        cout << result << endl;
    }
}

