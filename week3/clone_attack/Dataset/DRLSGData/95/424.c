int main () {
    int xK4DfdL0yi;
    char EbLUar [(553 - 473)];
    char xW8xFsk9wt [(316 - 236)];
    int hsKNCFl4x6j;
    int CYirvQDl2jPC;
    gets (EbLUar);
    gets (xW8xFsk9wt);
    int jh;
    jh = (396 - 395);
    hsKNCFl4x6j = strlen (EbLUar);
    xK4DfdL0yi = strlen (xW8xFsk9wt);
    for (CYirvQDl2jPC = (158 - 158); hsKNCFl4x6j >= CYirvQDl2jPC; CYirvQDl2jPC = CYirvQDl2jPC +1) {
        if (!(xW8xFsk9wt[CYirvQDl2jPC] != EbLUar[CYirvQDl2jPC])) {
            continue;
        }
        else {
            if (EbLUar[CYirvQDl2jPC] >= 'A' && 'Z' >= EbLUar[CYirvQDl2jPC] && 'a' <= xW8xFsk9wt[CYirvQDl2jPC] && 'z' >= xW8xFsk9wt[CYirvQDl2jPC]) {
                if (xW8xFsk9wt[CYirvQDl2jPC] > EbLUar[CYirvQDl2jPC] - 'A' + 'a') {
                    jh = (1000 - 1000);
                    break;
                }
                else {
                    if (!(xW8xFsk9wt[CYirvQDl2jPC] != EbLUar[CYirvQDl2jPC] - 'A' + 'a'))
                        continue;
                    else {
                        jh = (236 - 236);
                        break;
                    };
                };
            }
            else {
                if ('A' <= xW8xFsk9wt[CYirvQDl2jPC] && xW8xFsk9wt[CYirvQDl2jPC] <= 'Z' && EbLUar[CYirvQDl2jPC] >= 'a' && EbLUar[CYirvQDl2jPC] <= 'z') {
                    if (xW8xFsk9wt[CYirvQDl2jPC] - 'A' + 'a' < EbLUar[CYirvQDl2jPC]) {
                        jh = (332 - 332);
                        break;
                    }
                    else {
                        if (xW8xFsk9wt[CYirvQDl2jPC] - 'A' + 'a' == EbLUar[CYirvQDl2jPC])
                            continue;
                        else {
                            jh = (709 - 709);
                            break;
                        };
                    };
                }
                else {
                    if (xW8xFsk9wt[CYirvQDl2jPC] < EbLUar[CYirvQDl2jPC]) {
                        jh = (278 - 278);
                        break;
                    }
                    else {
                        if (xW8xFsk9wt[CYirvQDl2jPC] == EbLUar[CYirvQDl2jPC])
                            continue;
                        else {
                            jh = 0;
                            break;
                        };
                    };
                };
            };
        };
    }
    if (jh == (214 - 213))
        ;
}

