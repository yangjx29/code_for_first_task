int mfn2UYe [(1436 - 436)], xA3E9ryRC [(1500 - 500)];
int uobS0Acpsf;

int main () {
    for (; cin >> uobS0Acpsf && uobS0Acpsf;) {
        int x4rqtzK;
        int Hjl4aP;
        int Jo92BeUqH;
        int IRO0mZHbTg;
        int LNAYdb1p;
        for (int kevzNa = (415 - 415);
        kevzNa < uobS0Acpsf; kevzNa = kevzNa + (884 - 883))
            cin >> mfn2UYe[kevzNa];
        IRO0mZHbTg = LNAYdb1p = (981 - 981);
        x4rqtzK = (905 - 905);
        for (int kevzNa = (294 - 294);
        uobS0Acpsf > kevzNa; kevzNa = kevzNa + (490 - 489))
            cin >> xA3E9ryRC[kevzNa];
        sort (mfn2UYe, mfn2UYe + uobS0Acpsf);
        sort (xA3E9ryRC, xA3E9ryRC + uobS0Acpsf);
        Jo92BeUqH = Hjl4aP = uobS0Acpsf - (20 - 19);
        {
            int kevzNa;
            kevzNa = (431 - 431);
            while (uobS0Acpsf > kevzNa) {
                kevzNa = kevzNa + 1;
                if (xA3E9ryRC[LNAYdb1p] > mfn2UYe[IRO0mZHbTg]) {
                    Hjl4aP = Hjl4aP -(489 - 488);
                    IRO0mZHbTg = IRO0mZHbTg +(890 - 889);
                    x4rqtzK -= (1182 - 982);
                }
                else if (mfn2UYe[IRO0mZHbTg] > xA3E9ryRC[LNAYdb1p]) {
                    x4rqtzK += (902 - 702);
                    LNAYdb1p = LNAYdb1p +(505 - 504);
                    IRO0mZHbTg = IRO0mZHbTg +(123 - 122);
                }
                else if (xA3E9ryRC[Hjl4aP] > mfn2UYe[Jo92BeUqH]) {
                    IRO0mZHbTg = IRO0mZHbTg +(399 - 398);
                    Hjl4aP = Hjl4aP -1;
                    x4rqtzK -= (688 - 488);
                }
                else if (xA3E9ryRC[Hjl4aP] < mfn2UYe[Jo92BeUqH]) {
                    Hjl4aP = Hjl4aP -1;
                    Jo92BeUqH = Jo92BeUqH -1;
                    x4rqtzK += (1030 - 830);
                }
                else {
                    if (mfn2UYe[IRO0mZHbTg] > xA3E9ryRC[Hjl4aP])
                        x4rqtzK += (929 - 729);
                    else if (mfn2UYe[IRO0mZHbTg] < xA3E9ryRC[Hjl4aP])
                        x4rqtzK -= (347 - 147);
                    IRO0mZHbTg++;
                    Hjl4aP = Hjl4aP -1;
                }
            }
        }
        cout << x4rqtzK << endl;
    }
    return (676 - 676);
}

